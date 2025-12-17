#include <iostream>
using namespace std;

// C++ Program to Check Whether a Character is a Vowel or Consonant.
int main(){
    char a;
    cout << "Enter character: ";
    cin >> a;
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
        cout << "Vowel" << endl;
    }
    else if (a == 'y'){
        cout << "Semi vowel" << endl;
    }
    else {
        cout << "Consonant" << endl;
    }
    return 0;
}