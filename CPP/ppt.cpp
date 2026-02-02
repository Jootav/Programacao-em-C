#include <iostream>
#include <stdlib.h>

// C++ project where user inputs his choice of Rock Paper Scissors trying to win the computer, who outputs a random choice.

using namespace std;

int main() {
    srand (time(NULL));
    
    int computerChoice = rand()%3 + 1;
    int userChoice = 0;

    cout << "===================\n";
    cout << "rock paper scissors\n";
    cout << "===================\n";
    cout << "select your choice!\n";
    cout << "> 1. rock\n";
    cout << "> 2. paper\n";
    cout << "> 3. scissors\n";
    cout << "> "; cin >> userChoice;
    cout << "the computer chose " << computerChoice << "\n";
    switch(userChoice){
        case 1:
        if(computerChoice==1)
            cout << "tie!";
        if(computerChoice==2)
            cout << "you lost!";
        if(computerChoice==3)
            cout << "you win!";
        break;
        case 2:
        if(computerChoice==1)
            cout << "you win!";
        if(computerChoice==2)
            cout << "tie!";
        if(computerChoice==3)
            cout << "you lost!";
        break;
        case 3:
        if(computerChoice==1)
            cout << "you lost!";
        if(computerChoice==2)
            cout << "you win!";
        if(computerChoice==3)
            cout << "tie!";
        break;
        default:
        cout << "not a valid option\n";
        break;
    }
    return 0;
}