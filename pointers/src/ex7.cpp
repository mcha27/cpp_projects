#include <iostream>
using namespace std;


void swap_ptr(int* ptr1, int* ptr2){
    int* temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
    cout << "swapped values" << endl;
    cout << "a: " << *ptr1 << endl;
    cout << "b: " << *ptr2 << endl;
}

int main(){
    int* ptr1 = new int(99);
    int* ptr2 = new int(1);
    cout << "original values" << endl;
    cout << "a: " << *ptr1 << endl;
    cout << "b: " << *ptr2 << endl;
    swap_ptr(ptr1, ptr2);

    delete ptr1;
    delete ptr2;
    return 0;
}