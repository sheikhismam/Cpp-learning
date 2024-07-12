#include <iostream>
using namespace std;

double add(double num1, double num2)//Declaring a function
{
    cout << num1 + num2;
    return 0; //Return statement
}

int main()
{
    cout << add(5, 1) << endl;//Calling and printing declared function
    cout << add(5,4) << endl;//Calling the declared function as many times user want

    return 0;
}