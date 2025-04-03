#include <iostream>
#include <string>
using namespace std;

class Tutorial{
    string name;
    public:
        Tutorial(string a){ /*Constructor function*/
            defName(a);
            getName();
        }
        void defName(string str){
            name = str;
        }
        string getName(void){
            return name;
        }
};

int main(){
    Tutorial run1("Dnyanesh");
    cout << run1.getName() <<  endl;
    Tutorial run2("Jayesh");
    cout << run2.getName() << endl;
    return 0;
}

/*
evey object has their own set of functions and variables fefined in the class
*/