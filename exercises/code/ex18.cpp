#include <iostream>
using namespace std;

// C++ Program to Check Whether a Number is Positive or Negative.
int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (num > 0){
        cout << "Positive" << endl;
    }
    else {
        cout << "Negative" << endl;
    }
    return 0;
}