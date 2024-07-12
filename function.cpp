#include <iostream>
using namespace std;
void sayHi(string name, int age);

//Calling the declared function in main function.
int main()
{
    sayHi("Mike", 60);//Can put as many value as decalared in the function perimeters
    sayHi("Lee", 35); //Can call the function any times as wanted.

    return 0;
}

void sayHi(string name, int age)
//Either put the function perimeter's variable's value when declaring the function or when calling it in the main function, later is the best use.
{
    cout << "Hello " << name << " You are " << age << endl;