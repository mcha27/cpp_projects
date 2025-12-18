#include <iostream>
using namespace std;

int main(){
    cout << "Enter a natural number: " << endl;
    int nn;
    cin >> nn;
    int sum = 0;
    for (int i = 1; i <= nn; i++){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}