#include <iostream>
using namespace std;

class Person{
    string Name, Address;
    int Age;
    public:
    Person(){
        cout <<"Enter your name: ";
        cin >> Name;
        cout <<"Enter your age: ";
        cin >> Age;
        cout <<"Enter your address: ";
        cin >> Address;
    }
    void showData(){
        cout << "Name: "<<Name<<endl;
        cout << "Age: "<<Age<<endl;
        cout << "Address: "<<Address<<endl;
    }
};
class Teacher: public Person{
    string Qualification, Department;
    public:
    Teacher(){
        cout <<"Enter your Qualification: ";
        cin >> Qualification;
        cout <<"Enter your Department: ";
        cin >> Department;
    }
    void showData(){
        Person::showData();
        cout << "Qualification: "<<Qualification<<endl;
        cout << "Department: "<<Department<<endl;
    }
};

class Student: public Person{
    string Program, Semester;
    public:
    Student(){
        cout <<"Enter your Program: ";
        cin >> Program;
        cout <<"Enter your Semester: ";
        cin >> Semester;
    }
    void showData(){
        Person::showData();
        cout << "Program: "<<Program<<endl;
        cout << "Semester: "<<Semester<<endl;
    }
};

int main(){
    cout << "Enter Teacher's Data:"<<endl;
    Teacher t;
    cout << "\nEnter Students's Data:"<<endl;
    Student s;
    cout << "\nDisplaying Data"<<endl;
    cout << "\nTeacher's Data:"<<endl;
    t.showData();
    cout << "\nStudent's Data:"<<endl;
    s.showData();
    return 0;
}