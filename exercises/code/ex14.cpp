#include <iostream>
using namespace std;

// C++ Program to Find the Size of int, float, double, and char.
int main(){
    int a;
    float b;
    double c;
    char d;
    cout << "Enter int: " << endl;
    cin >> a;
    cout << "Enter float: " << endl;
    cin >> b;
    cout << "Enter double: " << endl;
    cin >> c;
    cout << "Enter char: " << endl;
    cin >> d;
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    return 0;
}