// Convert meter (class) to cm (class) using operator function method
#include <iostream>
using namespace std;

class LengthDest{
    float centimeter;
    public:
    void setCm(float cm){
        centimeter = cm;
    }
    void display(){
        cout << "Length (cm): "<< centimeter<<endl;
    }
};

class LengthSource{
    float meter;
    public:
    LengthSource(){
        cout << "Enter length (meter): ";
        cin >> meter;
    }
    operator LengthDest(){
        float cm = meter*100;
        LengthDest temp;
        temp.setCm(cm);
        return temp;
    }
};

int main(){
    LengthSource ls;
    LengthDest ld;
    ld = ls;
    ld.display();
    return 0;
}