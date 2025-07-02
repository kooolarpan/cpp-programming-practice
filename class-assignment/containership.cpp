#include <iostream>
using namespace std;

class ClassRoom{
    string semester;
    public:
    void getClassRoom(){
        cout << "Enter your semester: ";
        cin >> semester;
    }
    void displayClassRoom(){
        cout << "Semester: "<< semester<<endl;
    }
    
};

class College{
    ClassRoom cr;
    string collegeName;
    public:
    void getCollegeName(){
        cout <<"Enter College Name: ";
        cin >> collegeName;
        cr.getClassRoom();
    }
    void displayCollegeName(){
        cout << "College Name: "<<collegeName<<endl;
        cr.displayClassRoom();
    }
};

int main(){
    College c;
    c.getCollegeName();
    c.displayCollegeName();
    return 0;
}
