#include <iostream>
#include <openssl/evp.h>
#include <openssl/err.h>
#include <iomanip>
#include <sstream>
#include <vector>
#include <stdexcept>
#include <string>
#include <sqlite3.h>
#include <random>
#include <chrono>
#include "../headers/user.hpp"
#include "../headers/database.hpp"
using namespace std;

/*
    - create database(sqlite3* db)
    - register_user(User* user)
    - check_user(username)
    - hash_passwords(password)
*/

Database::Database(sqlite3* d)
    : db(d) {}

void Database::create_table(){
    const char* sql =
        "CREATE TABLE IF NOT EXISTS USERS ("
        "USERNAME TEXT NOT NULL UNIQUE, "
        "PASSWORD_HASH TEXT NOT NULL"
        ");";

    char* errMsg = nullptr;
    int rc = sqlite3_exec(db, sql, nullptr, nullptr, &errMsg);

    if (rc != SQLITE_OK) {
        cerr << "SQL error: " << errMsg << endl;
        sqlite3_free(errMsg);
    }
}

void Database::register_user(User* user){
    sqlite3_stmt* stmt;
    std::string username = user->username;
    std::string password = user->password;

    const char* insert = "INSERT INTO USERS (USERNAME, PASSWORD_HASH) VALUES (?, ?);";

    int rc = sqlite3_prepare_v2(db, insert, -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        cerr << "Failed to prepare statement: " << sqlite3_errmsg(db) << endl;
        sqlite3_close(db);
    }
    string hash = hash_password(password);
    sqlite3_bind_text(stmt, 1, username.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 2, hash.c_str(), -1, SQLITE_TRANSIENT);
    rc = sqlite3_step(stmt);

    if (rc != SQLITE_DONE) {
        cerr << "USERNAME IS ALREADY REGISTERED." << endl;
    } else {
        cout << "REGISTRATION IS SUCCESSFUL." << endl;
    }

    sqlite3_finalize(stmt);
}

string Database::hash_password(string& password) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 engine(seed); 
    uniform_int_distribution<int> dist(1, 10000);

    int salt = dist(engine);
    password += to_string(salt);

    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    if (!ctx) {
        throw runtime_error("EVP_MD_CTX_new failed");
    }

    if (EVP_DigestInit_ex(ctx, EVP_sha256(), nullptr) != 1) {
        EVP_MD_CTX_free(ctx);
        throw runtime_error("EVP_DigestInit_ex failed");
    }

    if (EVP_DigestUpdate(ctx, password.data(), password.size()) != 1) {
        EVP_MD_CTX_free(ctx);
        throw runtime_error("EVP_DigestUpdate failed");
    }

    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int length = 0;

    if (EVP_DigestFinal_ex(ctx, hash, &length) != 1) {
        EVP_MD_CTX_free(ctx);
        throw runtime_error("EVP_DigestFinal_ex failed");
    }

    EVP_MD_CTX_free(ctx);

    std::ostringstream oss;
    for (unsigned int i = 0; i < length; ++i) {
        oss << hex << setw(2) << setfill('0')
            << static_cast<int>(hash[i]);
    }

    return oss.str();
}
