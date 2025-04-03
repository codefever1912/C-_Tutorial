#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("players.txt");

    cout << "Enter player details: " << endl; 
    cout << "Press Ctrl+Z to quit." << endl; // Ctrl+z is a special windows things to end programs
    string name,country;
    int age;

    while(file >> name >> country >> age){
        cout << name << " " << country << " " << age << endl; 
    }
}

/*
with if/ofstream when a condition is no longer satisfied, 
the object is destructed on its own wihtout having to explicitly
telling the program to do so  
*/