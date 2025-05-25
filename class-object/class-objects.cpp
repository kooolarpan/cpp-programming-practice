// Basic Class and Objects

#include <iostream>
using namespace std;

class Fruits {
    string fruitName;
    int fruitQuantity;

   public:
    void setFruit() {
        cout << "Enter a fruit name: ";
        cin >> fruitName;
        cout << "Enter a fruit quantity: ";
        cin >> fruitQuantity;
    }
    void getFruit() {
        cout << "Fruit name: " << fruitName << endl;
        cout << "Fruit quantity: " << fruitQuantity << endl;
    }
    void buyFruit() {
        cout << "Going to OOP Mart to get your " << fruitName << endl;
    }
    void eatFruit() { cout << "Yum Yum. " << fruitName << " is tasy!" << endl;
    if(fruitQuantity<2){
        cout << "Eat more "<< fruitName << endl;
    }else{
        cout << "You will get Super Power after eating "<< fruitName << endl;
    }}
};

int main() {
    Fruits fruit;
    fruit.setFruit();
    fruit.buyFruit();
    fruit.eatFruit();
    return 0;
}