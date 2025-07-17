// Convert meter (classtype) to centimeter (basic)
// Note: if class is source (known) -> use operator function method
//       if class is destination (unknown) -> use constructor method

#include <iostream>
using namespace std;

class Length{
    float meter;
    public:
    Length(){
        cout << "Enter length (meter): ";
        cin >> meter;
    }
    operator float(){
        float c = meter * 100;
        return c;
    }
};

int main(){
    float centimeter;
    Length l;
    centimeter = l;
    cout <<"Length (cm): "<<centimeter<<endl;
    return 0;

}
