#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char userChar;
    cout << "Enter a character: ";
    cin >> userChar;

    if (isalpha(userChar)) {
        cout << userChar << " is an alphabet." << endl;
    } 
    else {
        cout << userChar << " is not an alphabet." << endl;
    }

    return 0;
}