#include <iostream>
using namespace std;
int main()
{
    string phrase = "Giraffe Academy";

    //printing the length of the string
    cout << phrase.length() << endl;

    //accessing string characters
    cout << phrase[0] << endl;
    cout << phrase[1] << endl;

    //finding index number of string/character
    cout << phrase.find("Academy", 0) << endl;

    //printing specified number of characters from a speicified index 
    cout << phrase.substr(3, 4);

}