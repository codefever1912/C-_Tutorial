#include <iostream>
#include "header.h"
using namespace std;

Tutorial::Tutorial(){
    cout << "This is the constructor" << endl;
}

void Tutorial::print(){
    cout << "My name si Dnyanesh" << endl;
}

Tutorial::~Tutorial(){
    cout << "This is the destructor" << endl;
}