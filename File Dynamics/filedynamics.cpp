#include <iostream>
#include <fstream>
using namespace std; 

int main(){
    ofstream obj("Tutorial1.txt"); // Directly associate the object with the file one line through the constructor func 
    obj << "This file has been created by using the constructor function" << endl;
    cout << (obj.is_open());
    obj.close();
}