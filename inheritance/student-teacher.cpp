// WAP to access function from parent class

#include <iostream>
using namespace std;

class Person {
    string name;

   public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
    }
    void displayData() { cout << "Name: " << name << endl; }
};

class Student : public Person {
    int roll;

   public:
    void getStudentData() {
        Person::getData();
        cout << "Enter Roll: ";
        cin >> roll;
    }
    void displayData() {
        Person::displayData();
        cout << "Roll: " << roll << endl;
    }
};

class Teacher : public Person {
    string subject;

   public:
    void getTeacherData() {
        Person::getData();
        cout << "Enter subject: ";
        cin >> subject;
    }
    void displayData() {
        Person::displayData();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout << "Enter Students's Details" << endl;
    s.getStudentData();
    cout << "Enter Teacher's Details" << endl;
    t.getTeacherData();

    cout << "\nDisplaying Student's Details" << endl;
    s.displayData();
    cout << "Displaying Teacher's Details" << endl;
    t.displayData();
    return 0;
}