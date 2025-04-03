#include <iostream>
using namespace std;

int main(){
    try{
        int n1,n2;
        cin >> n1 >> n2;

        if(n2==0){
            throw 0;
        }
        cout << n1/n2<<endl;
    }
    catch(int x){
        cout << "cannot divide by " << x;
    }
}