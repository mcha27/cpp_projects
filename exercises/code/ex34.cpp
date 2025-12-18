#include <iostream>
using namespace std;

int power(int base, int exp){
    int p = 1;
    for (int i = 1; i <= exp; i++){
        p *= base;
    }
    return p;
}

int main(){
    int base = 2;
    int exp = 5;
    cout << power(base, exp) << endl;
}