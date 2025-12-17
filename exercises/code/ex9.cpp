#include <iostream>
#include <cmath>
using namespace std;

//C++ Program to Calculate the Area of an Equilateral Triangle.
int main(){
    float a;
    cout << "Enter side of a equilateral triangle: ";
    cin >> a;
    float area = ((sqrt(3)) / 4) * pow(a, 2);
    cout << "Area of equilateral triangle: ";
    cout << area << endl;
    return 0;
}
