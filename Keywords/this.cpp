#include <iostream>
#include "this.h"
using namespace std;

Demo::Demo(int n)
:num(n) // basically num = n;
{ 
}

void Demo::print(){
    cout << "n: " << num << endl; // just normally prints out the value
    cout << "this->num: "  << this->num << endl; // explicitly tells that program is dealing with an object, 'this' assigned to the current object
    cout << "(*this).num: " << (*this).num << endl; // (*this) --> dereferencing a pointer, takes the memory address of the obj and calls the variable(num in this case)
}

 /*
 this basically a special type of pointer, 
 that stores the address of the current
 object being used
 used to distinguish between same named variable in diferenet classes
 e.g to differnetiate between a local member variable in a class and a parameter passed to its constructor fucntion
 */