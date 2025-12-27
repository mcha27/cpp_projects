#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {11,22,33};
    int* a = &arr[0];
    int* b = &arr[1];
    int* c = &arr[2];

    cout << "a: " << *a << endl;
    cout << "b: " << *b << endl;
    cout << "c: " << *c << endl;
}