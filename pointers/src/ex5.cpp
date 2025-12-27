#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int main(){
    int (*func_ptr)(int, int);
    func_ptr = &sum;
    int s = func_ptr(55, 45);
    cout << "sum of two numbers: " << s << endl;
    return 0;
}