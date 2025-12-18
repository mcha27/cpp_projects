#include <iostream>
using namespace std;

int main(){
    int x = 100;
    for (int i = 2; i <= x; i ++){
        if (i % 2 == 0){
            cout << i << endl;
        }
    }
}