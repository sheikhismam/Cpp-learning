#include <iostream>
using namespace std;
int main(){
    int secretNum = 7;
    int guess;
   

    while(secretNum != guess){
        cout << "Enter your guess: " ;
        cin >> guess ;
       
    }

    cout << "You win!" << endl;
    return 0;
}