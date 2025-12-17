#include <iostream>
using namespace std;

// C++ Program to Compute Quotient and Remainder.
int main(){
    int a;
    int b;
    cout << "Input int a: ";
    cin >> a;
    cout << "Input int b: ";
    cin >> b;
    int quo = a / b;
    int rem = a % b;
    cout << "Quotient" << endl;
    cout << quo << endl;
    cout << "Remainder" << endl;
    cout << rem << endl;
    return 0;
}