// Convert gram to kg
#include <iostream>
using namespace std;

class Weight{
    float kg;
    public:
    Weight(float gram){
        cout<<"Weight: "<<gram<< " gram"<<endl;
        kg = gram/1000;
    }
    void display(){
        cout << "Weight: "<<kg<<" Kg"<<endl;
    }
};

int main(){
    float gram;
    cout<<"Enter weight in (gram): ";
    cin >> gram;
    Weight w=gram;
    cout<<"Conversion from gram to kg"<<endl;
    w.display();
    return 0;
}