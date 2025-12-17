#include <iostream>
#include <cmath>
using namespace std;

//C++ Program to Calculate the Area and Circumference of a Circle.
int main(){
    float pi = 3.14;
    int r = 7;
    float area = pi * pow(r, 2);
    float circumference = pi * (2*r);
    cout << "Area of circle: " << endl;
    cout << area << endl;
    cout << "Circumference of circle: " << endl;
    cout << circumference << endl;
    return 0;
}