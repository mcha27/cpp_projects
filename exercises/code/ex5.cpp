#include <iostream>
using namespace std;

//C++ Program to Add/Subtract/Multiply/Divide two Floating Point Numbers.
int main(){
    float a;
    float b;
    cout << "Input float a: ";
    cin >> a;
    cout << "Input float b: ";
    cin >> b;
    float add = a + b;
    float sub = a + b;
    float mult = a * b;
    float div = a / b;
    cout << "Adding two floats." << endl;
    cout << add << endl;
    cout << "Subtracting two floats." << endl;
    cout << sub << endl;
    cout << "Multiplying two floats." << endl;
    cout << mult << endl;
    cout << "Dividing two floats." << endl;
    cout << div << endl;
    return 0;
}