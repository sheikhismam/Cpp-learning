#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
        Book(){ //A contstructor with no perimetere, but initializes with default values.
            title = "no title";
            author = "no author";
            pages = 0;
        }
        //constructor with perimetere. It initializes with provided values.
        Book(string title, string author, int pages){
            this -> title = title ;
            this -> author = author;
            this -> pages = pages;
        }
};

int main(){
    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2;
    cout << book1.title << endl;
    cout << book2.title;
    return 0;
}