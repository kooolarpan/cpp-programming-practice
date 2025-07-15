// WAP to add two object of distance class with data members feet and inch
// by using by using member function and friend function.

#include<iostream>
using namespace std;

class Distance{
    int feet, inch;
    public:
    void get(){
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inch: ";
        cin >> inch;
    }
    void display(){
        cout << "Feet: "<<feet<<" Inch: "<<inch<<endl;
    }
    friend Distance operator+(Distance &d1, Distance &d2);
    Distance addDistance(Distance d){
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inch = inch + d.inch;
        if (temp.inch >= 12) {
            temp.feet += temp.inch / 12;
            temp.inch = temp.inch % 12;
        }
        return temp;
    }
};

Distance operator+(Distance &d1, Distance &d2){
    Distance temp;
    temp.feet = d1.feet + d2.feet;
    temp.inch = d1.inch + d2.inch;
    if (temp.inch >= 12) {
        temp.feet += temp.inch / 12;
        temp.inch = temp.inch % 12;
    }
    return temp;
}

int main(){
    Distance d1,d2, result, result2;
    d1.get();
    d2.get();
    result = d1+d2;
    cout << "Addition of Distance using Friend Function"<<endl;
    result.display();
    result2 = d1.addDistance(d2);
    cout << "Addition of Distance using Member Function"<<endl;
    result2.display();
    return 0;
}