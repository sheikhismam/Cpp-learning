#include <iostream>
using namespace std;
int main(){
    int secretNum = 10;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool limit = false;

    do{
        if(guessCount < guessLimit){
            cout << "Enter your guess: ";
            cin >> guess;
            guessCount++;
        }else{
            limit = true;
            break;
        }
    } while(secretNum != guess);

    if(limit){
        cout << "Guessing is over. You lost!";
    }else{
        cout << "You win!";
    }

    return 0;
    
}