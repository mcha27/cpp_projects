#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter a, b, and c values." << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    float quad_plus = (-b + sqrt(pow(b, 2) - (4*a*c))) / (2*a);
    float quad_neg = (-b - sqrt(pow(b, 2) - (4*a*c))) / (2*a);
    cout << quad_plus << ", " << quad_neg << endl;
    return 0;
}