#include <iostream>
using namespace std;

// Parameterized Constructors in inheritance

class Person {
    string name;

   public:
    Person(string n) {  // Parameterized Constructor
        name = n;
    }
    void display() { cout << "Name: " << name << endl; }
};
class Student : public Person {
    int roll;

   public:
    // If parent class has parameterized constructor then we have to call it
    // explicitly from constructor of child class
    Student(string n, int r) : Person(n) { roll = r; }
    void display() { cout << "Roll: " << roll << endl; }
};

int main() {
    Student s("Arpan", 6);
    s.Person::display();
    s.display();
    return 0;
}