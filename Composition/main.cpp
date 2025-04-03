#include <iostream>
#include "birthday.cpp"
#include "people.cpp"
using namespace std;

int main(){
    Birthday bObj(19,12,2004);
    People dnyaKav("Dnyanesh Kavate", bObj);
    dnyaKav.print();
}

//Motive was to link the name and the birthday
//a person through diff classes