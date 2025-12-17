#include <iostream>
using namespace std;

// C++ Program to find the Largest Number Among Three Numbers.
int main(){
    int a;
    int b;
    int c;
    cout << "Enter three numbers: ";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b && a > c){
        cout << a << " is the biggest number" << endl;
    }
    else if (b > a && b > c){
        cout << b << " is the biggest number" << endl;
    }
    else {
        cout << c << " is the biggest number" << endl;
    }
    return 0;
}