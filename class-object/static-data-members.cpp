#include <iostream>
using namespace std;

class Student {
    string name;  // general data member
    int roll;
    static int semester;  // static data member declaration
   public:
    void get(int s) { semester = s; }
    void display() { cout << semester << endl; }
};

int Student::semester;

int main() {
    Student a, b;
    a.get(5);     // Sets s to 5
    b.display();  // Prints 5 as static data member is common to all objects.
    return 0;
}