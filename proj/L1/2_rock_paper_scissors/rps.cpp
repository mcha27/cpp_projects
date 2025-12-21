#include <iostream>
#include <random>
#include <string>
using namespace std;

string computer(){
    random_device rd; 
    mt19937 gen(rd()); 
    uniform_int_distribution<> dist(1, 3);

    int random_num = dist(gen);
    string computer_guess;
    if (random_num == 1){
        computer_guess = "rock";
    }
    else if (random_num == 2){
        computer_guess = "paper";
    }
    else {
        computer_guess = "scissors";
    }
    return computer_guess;
}

int main(){
    string computer_guess = computer();
    cout << "rock, paper, or scissors?" << endl;
    string user_guess;
    cin >> user_guess;

    if (user_guess == computer_guess){
        cout << "computer guessed: " << computer_guess << endl;
        cout << "tie" << endl;
    }
    else if (user_guess == "rock" && computer_guess == "paper"){
        cout << "computer guessed: " << computer_guess << endl;
        cout << "computer wins" << endl;
    }
    else if (user_guess == "paper" && computer_guess == "scissors"){
        cout << "computer guessed: " << computer_guess << endl;
        cout << "computer wins" << endl;
    }
    else if (user_guess == "scissors" && computer_guess == "rock"){
        cout << "computer guessed: " << computer_guess << endl;
        cout << "computer wins" << endl;
    }
    else if (user_guess == "rock" && computer_guess == "scissors"){
        cout << "computer guessed: " << computer_guess << endl;
        cout << "user wins" << endl;
    }
    else if (user_guess == "paper" && computer_guess == "rock"){
        cout << "computer guessed: " << computer_guess << endl;
        cout << "user wins" << endl;
    }
    else if (user_guess == "scissors" && computer_guess == "paper"){
        cout << "computer guessed: " << computer_guess << endl;
        cout << "user wins" << endl;
    }

    return 0;
}