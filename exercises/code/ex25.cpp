/*
Write a program to calculate taxes, with the following conditions:

    If the salary is less than $1500, then there are no taxes
    If the salary is from 1501 to 3000 $ (1501<= salary < 3000) then the tax should be 10%
    If the salary is from 3001 to 5000 $ (3001 <= salary < 5000) then the tax should be 20%
    If the salary is above $5000, then the tax should be 30%

Hint: Formula for finding tax (salary * percentage) / 100

You must output:

    Tax percentage
    Salary after taxes
*/

#include <iostream>
using namespace std;

int main() {
    float salary;
    cout << "Enter salary in $: ";
    cin >> salary;
    float taxes;
    if (salary < 1500){
        cout << "No taxes on your salary" << endl;
    }
    else if (salary >= 1500 && salary < 3000){
        taxes = (salary * .10) / 100;
        cout << "10% tax: " << taxes << endl;
        cout << "Salary after taxes: " << salary + taxes << endl;
    }
    else if (salary >= 3000 && salary < 5000){
        taxes = (salary * .20) / 100;
        cout << "20% tax: " << taxes << endl;
        cout << "Salary after taxes: " << salary + taxes << endl;
    }
    else {
        taxes = (salary * .30) / 100;
        cout << "30% tax: " << taxes << endl;
        cout << "Salary after taxes: " << salary + taxes << endl;
    }
    return 0;
}