#include <iostream>
using namespace std;
int main()
{
    //This progrm aims to demonstrate how to take string data type as user input.
    //A variable that can store string type of data.
    string name;
    //Prompting the user to input a string .
    cout << "Enter your name: ";
    //Now, to take string input, instead of cin, we use getline function.
    getline(cin, name);

    /*Printing the name. For example, if i have put my name Taa-seen as input,
    it should output Your name is Taa-seen.*/
    cout << "Your name is " << name << "." << endl;

    return 0;
}