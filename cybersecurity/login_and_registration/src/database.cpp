#include <iostream>
#include <string>
#include <sqlite3.h>
#include <openssl/md5.h>
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

    sqlite3_bind_text(stmt, 1, username.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 2, password.c_str(), -1, SQLITE_TRANSIENT);
    rc = sqlite3_step(stmt);

    if (rc != SQLITE_DONE) {
        cerr << "USERNAME IS ALREADY REGISTERED." << endl;
    } else {
        cout << "REGISTRATION IS SUCCESSFUL." << endl;
    }

    sqlite3_finalize(stmt);
}
