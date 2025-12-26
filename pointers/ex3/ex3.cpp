#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter integer: ";
    cin >> a;
    int *b = &a;
    cout << "The pointer value is "<< *b << endl;
    cout << "The memory address is: "<< b << endl;

    return 0;
}