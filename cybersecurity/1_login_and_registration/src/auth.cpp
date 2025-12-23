#include "../headers/auth.hpp"

#include <iostream>
#include <sqlite3.h>
//#include <string>
using namespace std;

void create_table(){
    sqlite3* db;
    //char* zErrMsg = 0;
    int rc = sqlite3_open("data/database.db", &db);

    if (rc) {
        cerr << "Can't open database: " << sqlite3_errmsg(db) << endl;
    }
    cout << "opened" << endl;
    rc = sqlite3_close(db);
    /*
    const char* sql = "CREATE TABLE IF NOT EXISTS USERS ("
          "USERNAME TEXT PRIMARY KEY NOT NULL,"
          "PASSWORD_HASH TEXT NOT NULL,"
          "SALT TEXT NOT NULL);";

    // Execute SQL statement
    rc = sqlite3_exec(db, sql, 0, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << zErrMsg << std::endl;
        sqlite3_free(zErrMsg);
    } else {
        std::cerr << "Table created successfully" << std::endl;
    }
    */
}
