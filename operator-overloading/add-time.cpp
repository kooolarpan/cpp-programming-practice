// WAP to add time in hours & minutes of two different objects using operator overloading

#include <iostream>
using namespace std;

class Time{
    int hours, minutes;
    public:

    Time(int h=0, int m=0){
        hours = h;
        minutes = m;
    }
    
    Time operator+(Time t) {
        Time temp;
        temp.minutes = minutes + t.minutes;
        temp.hours = hours + t.hours + (temp.minutes / 60);
        temp.minutes = temp.minutes % 60;
        return temp;
    }

    void input(){
        cout << "Enter Time in hours and minutes: ";
        cin >> hours;
        cin >> minutes;
    }
    
    void display() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main(){
    Time t1;
    t1.input();
    
    Time t2;
    t2.input();

    Time t3 = t1 + t2;  // Use overloaded + operator

    cout << "Total Time: ";
    t3.display();
    return 0;
}