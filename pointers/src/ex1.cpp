#include <iostream>
using namespace std;

int main(){
    int num = 10;
    int* ptr = &num;

    cout << "value of num: " << *ptr << endl;
    cout << "address of num: " << &ptr << endl;
    return 0;
}