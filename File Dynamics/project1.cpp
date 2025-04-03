#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream obj("objects.txt");
    cout << "Enter ctrl+Z to quit" << endl;
    string objname;
    int damage;

    while(cin >> objname >> damage){
        obj << objname << " " << damage << endl;
    }
}