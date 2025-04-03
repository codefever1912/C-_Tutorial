#include <iostream>
using namespace std;

class Heloo{
    private:
        int n;
    public:
        Heloo(){}
    
    friend void printFriend(Heloo obj); 
    // have to declare a function friend in
    //class itself
};

void printFriend(Heloo ho){
    ho.n = 100;
    cout << ho.n << endl;
}

int main(){
    Heloo obj;
    printFriend(obj);
}

// friend function has access to internal methods and variables of the friend class