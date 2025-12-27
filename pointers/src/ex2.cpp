#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {99, 88, 77, 66 , 55, 44, 33, 22, 11};
    int* ptr = &arr[0];
    cout << "original ptr value: " << *ptr << endl;
    ptr += 2;
    cout << "ptr value + 2: " << *ptr << endl;
    return 0;
}