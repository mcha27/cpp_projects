#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Enter two numbers to find the sum between them." << endl;
    cin >> m;
    cin >> n;
    int sum = 0;
    for (int i = m; i <= n; i++){
        sum += i;
    }
    cout << sum << endl;
}