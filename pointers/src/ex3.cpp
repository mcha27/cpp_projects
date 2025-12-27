#include <iostream>
using namespace std;

int main(){
    int* n = new int;
    *n = 100;
    cout << "dynamically allocated integer value: " << *n << endl;
    delete n;
    cout << "deleted" << endl;
    return 0;
}