#include <iostream>
#include <sqlite3.h>
#include <string>
#include "../headers/auth.hpp"
using namespace std;

int main(){
    string username, password;
    cout << "Login: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    create_table();
    
    return 0;
}