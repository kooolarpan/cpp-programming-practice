#include <iostream>
using namespace std;

// Default Constructors in inheritance

class Person {
    string name;

   public:
    Person() {  // Default Constructor
        cout << "Enter your name: ";
        cin >> name;
    }
    void display() { cout << "Name: " << name << endl; }
};
class Student : public Person {
    int roll;

   public:
    Student() {
        cout << "Enter your roll: ";
        cin >> roll;
    }
    void display() { cout << "Roll: " << roll << endl; }
};

int main() {
    Student s;
    s.Person::display();
    s.display();
    return 0;
}