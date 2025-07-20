// WAP to convert feet and inches (class) to meter and cm (basic)
// 1 meter = 3.3 feet

#include <iostream>
using namespace std;

class Length{
    int feet;
    float inches;
    public:
    Length(){
        cout << "Enter feet and inch: ";
        cin >> feet >> inches;
    }
    operator float(){
        float totalFeet = feet + (inches/12);
        float m = totalFeet/3.3;
        return m;
    }

};

int main(){
    float meter, cm;
    Length l;
    meter = l;
    int m = int(meter);
    cm = (meter-m)*100;
    cout << "Conversion: "<<m<<" meter and "<<cm<<" cm"<<endl;
    return 0;
}