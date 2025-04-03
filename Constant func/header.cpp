#include <iostream>
#include "header.h"
using namespace std;

Constant::Constant(){}

void Constant::printNormal(){
    cout << "A normal print function" << endl;
}

void Constant::printConstant() const{
    cout << "A constatn function" <<  endl;
}
//constant funciton cannot change the current object's state, i.e chnage in member variables or methods