#include <iostream>
using namespace std;

// Get the age and membership_status as user input. membership_status can be only Y or y. So, if the age is bigger or equal to 18 and if the user is a member of our shop, we provide a 10% discount, else we charge fully. Write a simple chatbot program using nested conditions.
int main(){
    int age;
    char membership_status;
    cout << "Enter age: ";
    cin >> age;
    cout << "Membership? y or n: ";
    cin >> membership_status;
    if (age >= 18 && membership_status == 'y'){
        cout << "10% discount." << endl;
    }
    else {
        cout << "full price." << endl;
    }
    return 0;
}
