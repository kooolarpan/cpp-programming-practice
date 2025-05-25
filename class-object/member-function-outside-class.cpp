#include <iostream>
using namespace std;

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