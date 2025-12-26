#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "enter array length: ";
    cin >> n;
    
    vector<int> arr = {};
    cout << "enter integers" << endl;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int max = 0;
    int* ptr = &max;

    for (int i = 0; i < arr.size(); i++){
        if (arr[i] > *ptr){
            *ptr = arr[i];
        }
    }
    cout << "largest value (max variable): " << max << endl;
    cout << "largest value (ptr variable): " << *ptr << endl;
    return 0;
}