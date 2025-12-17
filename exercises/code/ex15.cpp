#include <iostream>
using namespace std;

//C++ Program to Swap Two Numbers.
int main(){
    int a = 10;
    int b = 5;
    int temp;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    return 0;
}