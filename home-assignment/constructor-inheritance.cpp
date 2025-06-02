/*
Use constructors to initalize the data members.
Define members function named ShowData() in each class to display the
information. Create two objects of Hero class and dislay the info


 Batman (power)  - Superman (strength)
 Hero (life)

*/

#include <iostream>
using namespace std;

class Batman {
    int power;

   public:
    Batman(int p) { power = p; }
    void display() { cout << "Batman's Power: " << power << endl; }
};

class Superman {
    int strength;

   public:
    Superman(int s) { strength = s; }
    void display() { cout << "Superman's Strength: " << strength << endl; }
};

class Hero : public Batman, public Superman {
    int life;
    public:
    Hero(int p, int s, int l):Batman(p),Superman(s){
        life = l;
    }
    void display() { cout << "Hero's Life: " << life << endl; }

};

int main() {
    Hero h(5,6,10);
    h.Batman::display();
    h.Superman::display();
    h.display();
    return 0;
}