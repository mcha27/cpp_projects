#ifndef DATABASE
#define DATABASE
#include <string>
#include <sqlite3.h>
#include "../headers/user.hpp"


class Database {
    /*
    create database(sqlite3* db)
    register_user(username, password)
    check_user(username, password)
    hash_passwords(password)
    */
    private:
        sqlite3* db;

    public:
        Database(sqlite3* d);
        void create_table();
        void register_user(User* user);
        std::string hash_password(std::string& password);
};


#endif