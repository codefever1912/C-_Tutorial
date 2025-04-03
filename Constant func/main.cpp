#include <iostream>
#include "header.cpp"
using namespace std;

int main(){
    Constant obj;
    obj.printNormal();

    const Constant constobj1;
    constobj1.printConstant(); 
}