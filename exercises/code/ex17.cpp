#include <iostream>
using namespace std;

// C++ Program to Check Whether a Number is Even or Odd.
int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (num % 2 == 0){
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }
    return 0;
}