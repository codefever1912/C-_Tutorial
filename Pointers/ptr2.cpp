#include <iostream>
#include <array>
using namespace std;

//Seeing how adding integer to a pointer works

int main(){
    array<int, 5>a = {1,2,3,4,5};
    int *ptr = &a[0];
    for(auto i=a.begin();i<a.end();i++){
        cout << *ptr + *i << " ";
    }
}