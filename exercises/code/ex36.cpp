#include <iostream>
using namespace std;

void check_prime(int x){
    if (x <= 1){
        cout << "number needs to be greater than 1." << endl;
    }
    else if(x == 2 || x == 3){
        cout << "prime." << endl;
    }
    else if(x % 2 == 0 || x % 3 ==0){
        cout << "not prime." << endl;
    }
}

int main(){
    return 0;
}