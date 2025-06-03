/*

           Person
            name
            address

   --------------------------
   |                        |

Student                   Teacher
 roll                      id
 percentage                subject


 Define necessary member functions to initalize data members.
 Define a member function display() in each class to displlay information.
 Create objects of Student & Teacher class in main() & display the information.
 */
#include <iostream>
using namespace std;

class Person {
    string name, address;

   public:
    void getPerson() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Address: ";
        cin >> address;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

class Student : public Person {
    int roll;
    float percentage;

   public:
    void getStudent() {
        cout << "Enter Student's Roll: ";
        cin >> roll;
        cout << "Enter Student's Percentage: ";
        cin >> percentage;
    }
    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person {
    int id;
    string subject;

   public:
    void getTeacher() {
        cout << "Enter Teacher's ID: ";
        cin >> id;
        cout << "Enter Teacher's Subject: ";
        cin >> subject;
    }
    void display() {
        cout << "Teacher's ID: " << id << endl;
        cout << "Teacher's Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;
    cout << "\nEnter Student's Details\n";
    s.getPerson();
    s.getStudent();
    cout << "\nStudent's Details\n";
    s.Person::display();
    s.display();

    cout << "\nEnter Teacher's Details\n";
    t.getPerson();
    t.getTeacher();
    cout << "\nTeacher's Details\n";
    t.Person::display();
    t.display();
    return 0;
}