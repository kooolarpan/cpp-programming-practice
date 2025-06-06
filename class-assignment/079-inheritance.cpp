/*
Create a class author with attributes name and qualification.
Also, create a class publication with pname. From these classes derive a class book having attributes title and price.
Each of the three classes should have getdata() method to get their data from user. 
The classes should have putdata() method to display the data. Create instance of the class book in main.


Parent Class - Author (string name, string qualification)
            - Publication (string pname)

Child Class - Book (string title, float price)

*/

#include <iostream>
using namespace std;

class Author{
    string name, qualification;
    public:
    void getdata(){
        cout << "Enter Author's Name: ";
        getline(cin,name);
        cout << "Enter Author's Qualification (SEE/+2/Bachelors/Masters) : ";
        getline(cin,qualification);
    }
    void putdata(){
        cout << "Name: " << name << endl;
        cout << "Your Qualification: " << qualification << endl;
    }
};


class Publication{
    string pname;
    public:
    void getdata(){
        cout << "Enter your publication name: ";
        getline(cin,pname);

    }
    void putdata(){
        cout << "Publication Name: " << pname << endl;
    }
};

class Book: public Author, public Publication{
    string title;
    float price;
    public:
    void getdata(){
        Author::getdata();
        Publication::getdata();
        cout << "Enter your Book's Title: ";
        getline(cin,title);
        cout << "Enter your Book's Price: ";
        cin >> price;

    }
    void putdata(){
        Author::putdata();
        Publication::putdata();
        cout << "Book's Title: " << title << endl;
        cout << "Book's Price: " << price << endl;
    }
};

int main(){
    Book b;
    cout <<"\nEnter Details:\n";
    b.getdata();
    cout <<"\nDetails:\n";
    b.putdata();
    return 0;
}