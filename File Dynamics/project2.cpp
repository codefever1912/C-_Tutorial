#include <iostream>
#include <fstream>
using namespace std;

int choice();
void displayObj(int a);

int main(){
    int whatheyWant = 1;    
    while(whatheyWant!=4){
        whatheyWant = choice();
        displayObj(whatheyWant);
    } 
}

//getting user input
int choice(){
    int whatheyWant;
    cout << "\n1 - harmless items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit\n" << endl;
    cin >> whatheyWant;
    while(whatheyWant<1 || whatheyWant>4){
        cout << "Enter a number between 1 and 4" << endl;
        whatheyWant = choice();
    }
    return whatheyWant;
}

void displayObj(int a){
    ifstream obj("objects.txt");
    string objName;
    int damage;
    switch(a){
        case 1:
            cout << "Harmless Items: " << endl;
            while(obj >> objName >> damage){
                if(damage==0){
                    cout << objName << " " << damage << endl;
                }
            }
            break;
        case 2:
        cout << "Helpful Items: " << endl;
            while(obj >> objName >> damage){
                if(damage>0){
                    cout << objName << " " <<  damage <<  endl;
                }
            }
            break;
        case 3:
        cout << "Harmful Items: " << endl;
            while(obj >> objName >> damage){
                if(damage<0){ 
                    cout << objName << " " <<  damage <<  endl;
                }        
            }
            break;
    }
}

/*
1-plain
2-helpful
3-harmful
4-quit
*/