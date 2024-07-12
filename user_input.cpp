#include <iostream>
using namespace std;
int main()
{
    
    int age;
    cout << "Enter yout age: ";
    //Taking user's input and storing it into the variable age.
    /*By changing the data type user's can input different kind of data 
    (character, float, double) and store it into the same variable and print them.
    */
    cin >> age;

    cout << "You are " << age << " years old.";

    return 0;
}