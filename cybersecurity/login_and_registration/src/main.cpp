#include <iostream>
#include <sqlite3.h>
#include <string>
#include "../headers/user.hpp"
#include "../headers/database.hpp"
using namespace std;

int main(){
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    int option;
    cin >> option;
    sqlite3* db;

    int rc = sqlite3_open("data/database.db", &db);
    if (rc != SQLITE_OK) {
        cerr << "Cannot open database: " << sqlite3_errmsg(db) << endl;
        sqlite3_close(db);
        return 1;
    }

    Database* datab = new Database(db);
    datab->create_table();

    bool RUN = true;

    while(RUN){
        if (option == 1){
            string username;
            string password;
            cout << "Username: ";
            cin >> username;
            cout << "Password: ";
            cin >> password;
            
            string hashed = datab->hash_password(password);
            RUN = !datab->login_user(username, hashed);
        }

        if (option == 2){
            string username;
            string password;
            cout << "Create a username: ";
            cin >> username;
            cout << "Create a password: ";
            cin >> password;

            User* user = new User(username, password);
            RUN = !datab->register_user(user);          
        }
    }
    

    sqlite3_close(db);
    return 0;
}