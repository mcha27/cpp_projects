#include <iostream>
using namespace std;

int fact(int x){
    if (x == 1){
        return x;
    }
    else {
        return x * fact(x-1);
    }
}

int main(){
    int x = 10;
    cout << fact(x) << endl;
    return 0;
}