#include <iostream>
using namespace std;

void byValue(int x){
    x = 69;
}

void byReference(int *x){
    *x = 20;
}

int main(){
    int a = 20;
    int b = 50;
    byValue(a);
    byReference(&b);
    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;
}