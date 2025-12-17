#include <iostream>
using namespace std;

//C++ Program to Calculate the Area of Right Angle Triangle.
int main(){
    float a;
    float b;
    cout << "Enter side of a right triangle: ";
    cin >> a;
    cout << "Enter base of a right triangle: ";
    cin >> b;
    float area = (a * b) / 2;
    cout << "Area of a right triangle: ";
    cout << area << endl;
    return 0;
}