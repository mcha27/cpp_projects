#include <iostream>
using namespace std;

//C++ program that calculates a person's Body Mass Index (BMI) based on their weight and height input. 
//Provide a classification of whether the person is underweight, normal weight, overweight, or obese. 
//Use cin, cout. Formula: bmi = weight / (height * height)

int main(){
    float height;
    float weight;
    cout << "Enter height in inches: ";
    cin >> height;
    cout << "Enter weight in lbs: ";
    cin >> weight;
    float bmi = (weight / (height * height)) * 703;
    cout << "BMI: " << bmi << endl;

    if (bmi < 18.5){
        cout << "underweight." << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9){
        cout << "normal." << endl;
    }
    else if (bmi >= 25.0 && bmi <= 29.9){
        cout << "overweight." << endl;
    }
    else if (bmi >= 30.0){
        cout << "obese." << endl;
    }
    return 0;
}