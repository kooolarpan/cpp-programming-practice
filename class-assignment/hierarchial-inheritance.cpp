/*

An educational institute wishes to maintain a data of it's employee.
Define all the classes to represent above hierarchy and define functions to
retrieve individual information and when required.

Parent Class  - Staff (int code, string name)
Child Classes - Teacher (string subject, float salary)
                Typist(int speed)

*/

#include <iostream>
using namespace std;

class Staff {
    int code;
    string name;

   public:
    void getStaff() {
        cout << "Enter Code: ";
        cin >> code;
        cout << "Enter Name: ";
        getline(cin, name);
        cin.ignore();
    }
    void display() {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
    }
};
class Teacher : public Staff {
    string subject;
    float salary;

   public:
    void getTeacher() {
        getStaff();
        cout << "Enter Subject: ";
        getline(cin,subject);
        cout << "Enter salary: ";
        cin.ignore();
        cin >> salary;
    }
    void display() {
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};
class Typist : public Staff {
    int speed;

   public:
    void getTypist() {
        getStaff();
        cout << "Enter Speed: ";
        cin >> speed;
    }
    void display() { cout << "Speed: " << speed << endl; }
};

int main() {
    Teacher t;
    Typist ty;

    cout << "\nEnter Teacher's Details:\n";
    t.getTeacher();

    cout << "\nEnter Typist's Details:\n";
    ty.getTypist();

    cout <<"\nTeacher's Details\n";
    t.Staff::display();
    t.display();
    
    cout <<"\nTypist's Details\n";
    ty.Staff::display();
    ty.display();

    return 0;
}