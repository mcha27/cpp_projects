#include <iostream>
using namespace std;

int main(){
    int a = 100;
    cout << "original value of a: " << a << endl;
    int* ptr1 = &a;
    int** ptr2 = &ptr1;
    **ptr2 = 200;
    cout << "changed value of a using ptr2: " << **ptr2 << endl;

    cout << &a << " " << &ptr1 << " " << &ptr2 << endl;
    return 0;
}