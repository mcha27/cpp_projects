#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
};

int main(){
    Person* p = new Person();
    p->name = "Bill";
    cout << "name of person: " << p->name << endl;
    p->age = 21;
    cout << "age of person: " << p->age << endl;
    delete p;
    return 0;
}   
