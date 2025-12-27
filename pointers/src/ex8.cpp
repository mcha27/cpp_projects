#include <iostream>
#include <string>
using namespace std;

int str_len(string* s){
    int len = 0;
    for (size_t i = 0; i < s->length(); i++){
        len += 1;
    }
    return len;
}

int main(){
    string* str = new string("hello");
    int len = str_len(str);
    cout << "length of string: " << len << endl;
    delete str;
    return 0;
}