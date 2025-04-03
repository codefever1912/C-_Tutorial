#include <iostream>
using namespace std;

template <class sum>//creates a generic type of data 'sum'
sum add(sum x, sum y){
    sum z = x+y;
    return z;
}

template<>
double add <double>(double x, double y){
    return x+y;
}

int main(){
    int x = 7.0,y = 10.1;
    cout << add(x,y) << endl;
}

/*

template <class One, class Two> //two templates to take in two inputs of different data types
One larger(One x, Two y){ // will return data type of first parameter passed
    return (a>b?a:b)
}

int main(){
    int x, double y;
    cout << larger(x,y);
}
*/

/*
at()
begin()
end()
size()

*/