#include <iostream>
#include "header.hpp"
using namespace std;


Personal::Personal(string n, int a)
:name(n), age(a)
{
}

string Personal::getName(){
    return name;
}

int Personal::getAge(){
    return age;
}
// class Personal{
//     public:
//         Personal(string n, int a){
//             setName(n);
//             setAge(a);
//         }
//         void setName(string n){
//             name = n;
//         }
//         void setAge(int a){
//             age = a;
//         }
//         string getName(void){
//             return name;
//         }
//         int getAge(void){
//             return age;
//         }
// };