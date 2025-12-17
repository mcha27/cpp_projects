#include <iostream>
#include <string>
using namespace std;

//C++ program that converts between Celsius and Fahrenheit temperatures based on user input. You can also add conversions for Kelvin.
int main(){
    string val; 
    float far;
    float cel;
    float x;
    cout << "fahrenheit or celsius" << endl;
    cin >> val;
    if (val == "fahrenheit"){
        cout << "Enter fahrenheit:" << endl;
        cin >> x;
        cel = ((x - 32) * 5) / 9;
        cout << "Celsius value: " << cel << endl;
    }
    else {
        cout << "Enter celsius:" << endl;
        cin >> x;
        far = ((x * 9) / 5) + 32;
        cout << "Fahrenheit value: " << far << endl;
    }
    return 0;
}