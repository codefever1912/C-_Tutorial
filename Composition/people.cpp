#include <iostream>
#include "people.h"
#include "birthday.h"
using namespace std;

People::People(string n, Birthday obj)
:name(n), DOB(obj)
{
}

void People::print(){
    cout << name << " was born on ";
    DOB.printBday();
}