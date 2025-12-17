#include <iostream>
using namespace std;

//C++ Program to Calculate the Area of a Scalene Triangle.
int main(){
    float b;
    float h;
    cout << "Enter base of a scalene triangle: ";
    cin >> b;
    cout << "Enter height of a scalene triangle: ";
    cin >> h;
    float area = (b * h) / 2;
    cout << "Area of a scalene triangle: ";
    cout << area << endl;
    return 0;
}