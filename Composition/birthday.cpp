#include <iostream>
#include "birthday.h"
using namespace std;

Birthday::Birthday(int d, int m, int y)
:day(d), month(m), year(y) // : -> member initialiser 
{
}// this constructor just intilaises the private variables to their respective valaues as passed in the constructor

void Birthday::printBday(){
    cout << day << "/"<<month << "/" << year << endl; 
}