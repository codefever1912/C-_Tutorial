#include <iostream>
#include "mother.h"
#include "daughter.h"
using namespace std;

Mother::Mother(){
    cout << "Constrcutor Function" << endl;
}

void Mother::printName(){
    cout << "Rajashree" << endl;
}

Mother::~Mother(){
    cout << "Destructor Function" << endl;
}