#include <iostream>
using namespace std;
int main(){
    int roll = 123;
    int *pRoll = &roll; 
    //*roll -> it's pointer variable. Storing the memory address of the variable's value.
    /*
    double gpa = 3.9;
    double *gpa = &gpa;
    string name = "Mike";
    string *name = &name;
    */

    cout << pRoll << endl; //Print out the memory address of the variable's value.
    cout << *pRoll << endl; //Dereferencing pointer. It will print the variable's value that we chose to put.
    cout << &roll << endl; //Print out the memory address of the variable's value.
    cout << *&roll << endl; //Dereferencing pointer. It will print the variable's value that we chose to put.

    return 0;
}