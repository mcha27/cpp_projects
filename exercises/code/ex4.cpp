#include <iostream>
using namespace std;

//C++ Program to Add/Subtract/Multiply/Divide Two Integers entered by the user.
int main(){
    int a;
    int b;
    cout << "Input int a: ";
    cin >> a;
    cout << "Input int b: ";
    cin >> b;
    int add = a + b;
    int sub = a + b;
    int mult = a * b;
    int div = a / b;
    cout << "Adding two integers." << endl;
    cout << add << endl;
    cout << "Subtracting two integers." << endl;
    cout << sub << endl;
    cout << "Multiplying two integers." << endl;
    cout << mult << endl;
    cout << "Dividing two integers." << endl;
    cout << div << endl;
    return 0;
}