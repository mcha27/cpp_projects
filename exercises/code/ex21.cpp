#include <iostream>
using namespace std;

// C++ Program to find if the entered year is a leap year or not.
int main(){
    int year;
    cout << "Enter year to see if its a leap year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        cout << "Leap Year" << endl;
    }
    else {
        cout << "Not Leap Year" << endl;
    }
    return 0;
}