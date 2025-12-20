#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    string st = to_string(x);
    int counter = 0;
    int len = st.length();
    while (counter != len){
        counter += 1;
    }
    cout << "This integer has this many digits: " << counter << endl;
    return 0;
}