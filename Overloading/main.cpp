#include <iostream>
#include "operOverload.h"
using namespace std;

int main(){
    OperOverload a(33);
    OperOverload b(20);
    OperOverload c;

    c = a+b;
    cout <<c.num <<endl;
}
// Algo
// .h: Create class, included a overload function for operator +
// .cpp: define overloading fucntion
// c = a+b;
// current obj, i.e obj in the function is a in this case