#include <iostream>
using namespace std;

// C++ Program to Calculate the Area and Perimeter of a Rectangle.
int main(){
    float a;
    float b;
    cout << "Enter side of a rectangle: ";
    cin >> a;
    cout << "Enter other side of rectangle: ";
    cin >> b;
    float area = (a * b);
    cout << "Area of a rectangle: ";
    cout << area << endl;
    float perim = (2 * a) + (2 * b);
    cout << "Perimeter of a rectangle: ";
    cout << perim << endl;
    return 0;
}