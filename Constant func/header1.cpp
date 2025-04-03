#include <iostream>
#include "header1.h"
using namespace std;

Tutorial::Tutorial(int a, int b)
:x(a), y(b) // member intialiser    
{
    cout << "the dynamic bariable is : " << x << endl;
    cout << "the constant variable is :" << y << endl;
}