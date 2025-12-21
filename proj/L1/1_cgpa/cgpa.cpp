#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string x;
    vector<string> grades = {};
    cout << "Enter your grades - (A B+ C A- ... end)" << endl;
    while (cin >> x){
        if (x == "end") {
            break;
        }
        grades.push_back(x);
    }
    double cgpa = 0.0;
    double sum = 0.0;
    for (size_t i = 0; i < grades.size(); i++){
        if (grades[i] == "A"){
            sum += 4.0;
        }
        else if (grades[i] == "A-"){
            sum += 3.66;
        }
        else if (grades[i] == "B+"){
            sum += 3.33;
        }
        else if (grades[i] == "B"){
            sum += 3.0;
        }
        else if (grades[i] == "B-"){
            sum += 2.66;
        }
        else if (grades[i] == "C+"){
            sum += 2.33;
        }
        else if (grades[i] == "C"){
            sum += 2.0;
        }
        else if (grades[i] == "C-"){
            sum += 1.66;
        }
    }
    cgpa = sum / grades.size();
    cout << "Your Cumulative GPA is: " << cgpa << endl;
    return 0;
}