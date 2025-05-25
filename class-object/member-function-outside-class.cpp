#include <iostream>
using namespace std;

/*
Access Specifiers              Within Same Class           Child Class             Outside Class
private                             yes                         no                      no
protected                           yes                         yes                     no
public                              yes                         yes                     yes
*/


class Teacher {
    int teacherId;
    string subject;

   public:
    void getData();
    void displayData();
};

void Teacher ::getData() {
    cout << "Enter Teacher ID: ";
    cin >> teacherId;
    cout << "Enter Subject's Name: ";
    cin >> subject;
}

void Teacher ::displayData() {
    cout << "\nTeacher's Data" << endl;
    cout << "Teacher's ID: " << teacherId << endl;
    cout << "Subject's Name: " << subject << endl;
}

int main() {
    Teacher t;
    t.getData();
    t.displayData();
    return 0;
}