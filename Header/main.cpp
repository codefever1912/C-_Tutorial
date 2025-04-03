#include <iostream>
#include "header.cpp"
using namespace std;

int main(){
    Personal obj("Dnyanesh", 19);
    cout << obj.getName() << " " << obj.getAge();
}