#include<iostream>
#include "daughter.h"
#include "mother.h"
using namespace std;

Daughter::Daughter(){
    cout << "Daughter constructor " << endl;
}

Daughter::~Daughter(){
    cout << "Daughter destructor" << endl;
}