#include <iostream>
#include <fstream>
using namespace std;

void output(int x);

int main(){
    int userChoice = 1;
    while(userChoice!=5){
        cout << "\n1 - Name" << endl;
        cout << "2 - Age" << endl;
        cout << "3 - Interests" << endl;
        cout << "4 - Skills" << endl;
        cout << "5 - quit\n" << endl;
        cin >> userChoice;
        output(userChoice);
    }
}


void output(int x){
    ifstream obj("Personal.txt");
    string attribute, quality;
    switch(x){
        case 1:
            while(obj >> attribute >> quality){
                if(attribute == "Name"){
                    cout << "Name: " << quality << endl;
                }
            }
            break;
        case 2:
           while(obj >> attribute >> quality){
                if(attribute == "Age"){
                    cout << "Age: " << quality << endl;
                }
           }
            break; 
        case 3:
            cout<< "\nInterests: " << endl; 
            while(obj >> attribute >> quality){
                if(attribute == "Interest"){
                    cout << quality << endl;
                }
            }
            break;
        case 4: 
            cout << "\nSkills: " << endl;
            while(obj >> attribute >> quality){
                if(attribute == "Skills"){
                    cout << quality << endl;
                }
            }
            break;
    }
}


/*
1- Name
2- Age
3- Interests
4- Skills
5-quit
*/