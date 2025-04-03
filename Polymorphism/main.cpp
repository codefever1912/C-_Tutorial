#include <iostream>
using namespace std;

class Enemy{
    public:
        virtual void attack() = 0;
};  

class Ogre:public Enemy{
    public:
        void attack(){
            cout << "Mace attack!" << endl;
        }
};

class Gremlin:public Enemy{
    public:
        void attack(){
            cout << "Gremlin Swamp " << endl;
        }
};

int main(){
    Ogre obj1;
    Gremlin obj2;
    Enemy *ob1 = &obj1;
    Enemy *ob2 = &obj2;
    obj1.attack();
    obj2.attack();
}

/*Basically making the same fucnction (attack() ) give diffrernet outputs based on the class it refers to
by maing virtual function, it allows to call the attack() function without
 having to switch the objects in main() while calling attack()
pure virtual function: virtual void func() = 0;
derived classes have to overwrite a pure virt function
*/