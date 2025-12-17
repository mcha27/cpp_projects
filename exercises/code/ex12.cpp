#include <iostream>
using namespace std;

// C++ Program to Calculate the Area and Perimeter of a Square.
int main(){
    float a;
    cout << "Enter side of a square: ";
    cin >> a;
    float area = (a * a);
    cout << "Area of a square: ";
    cout << area << endl;
    float perim = 4 * a;
    cout << "Perimeter of a rectangle: ";
    cout << perim << endl;
    return 0;
}