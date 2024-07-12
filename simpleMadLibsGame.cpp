#include <iostream>
using namespace std;
int main()
{
    /*The idea of this game:
    In this game, there will be some text and some gaps within that text
    user will have to input text in those text.
    */
    string color, object, celebrity;
    cout << "Enter color: " ;
    getline(cin, color);

    cout << "Enter object: " ;
    getline(cin, object);

    cout << "Enter celebrity: " ;
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << object << " are blue" << endl;
    cout << "I love " << celebrity << endl;

}