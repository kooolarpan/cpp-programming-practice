// WAP that asks user to enter their name, roll and display them

#include <iostream>
using namespace std;

class StudentDetails {
   public:
    int rollNumber;
    string StudentName;

    int DisplayStudentDetails() {
        cout << "Displaying Student Details\n";
        cout << "Roll No: " << rollNumber << endl;
        cout << "Student Name: " << StudentName << endl;
        return 0;
    }
};

int main() {
    StudentDetails student;
    cout << "Enter Student Details: " << endl;
    cout << "Roll No: ";
    cin >> student.rollNumber;
    cout << "Student Name: ";
    cin.ignore();  // Clear leftover newline from previous input
    getline(cin, student.StudentName);  // Read full name with spaces
    student.DisplayStudentDetails();
    return 0;
}