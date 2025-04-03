#include <iostream>
#include "operOverload.h"
using namespace std;

OperOverload::OperOverload(){}

OperOverload::OperOverload(int a)
:num(a)
{
}

OperOverload OperOverload::operator+(OperOverload obj0){
    this->num = num+obj0.num;
    return *this;
}