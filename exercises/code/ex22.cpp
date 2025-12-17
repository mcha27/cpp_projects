#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

//C++ program that allows the user to perform basic arithmetic operations (addition, subtraction, multiplication, division) on two numbers. You can also add error handling for division by zero.
int main(){
    int a;
    int b;
    string op;
    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;
    cout << "add, sub, mult, or div: ";
    cin >> op;
    if (op == "add"){
        int res = a + b;
        cout << res << endl;
    }
    else if (op == "sub"){
        int res = a - b;
        cout << res << endl;
    }
    else if (op == "mult"){
        int res = a * b;
        cout << res << endl;
    }
    else if (op == "div"){
        if (b == 0){
            throw invalid_argument("Can't divide by 0.");
        }
        int res = a / b;
        cout << res << endl;
    }
    return 0;
}