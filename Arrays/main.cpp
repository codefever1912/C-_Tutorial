#include <iostream>
#include <array>
using namespace std;

int main(){
    // int x = 5;
    // int *ptr = &x;
    // int y = 7;
    // int *ptr1 = &y;
    // array<int,8> a;
    // memcpy(a.data(),ptr,1); // memcpy(destination, source, size);
    // memcpy(a.data()+1,ptr1,1);
    // for(int i=0;i<a.size();i++){
    //     if(a.data()+i !=0){
    //         cout << *(a.data()+i) << endl;
    //     }
    // }
    // cout << a.begin() << endl;
    array<int, 3> a {1,2,3};
    // array <int, 3> b {4,5,6};
    // a.swap(b);
    // for(auto i=a.begin();i<a.end();i++){
    //     cout << *i << " ";
    // }
    // cout << endl;
    // for(auto i=b.begin();i<b.end();i++){
    //     cout << *i << " ";
    // }
    cout << a.back() << endl;
}

/*
array functions :)
    begin() -> return to beginning of array
    end() -> go to end of array
    rbegin() -> initiate iterator from last element
    rend()
    
    size()
    max_size()
    empty() -> boolean return

    operator[] -> accessing or assinging elements to the array 
    at(index)
    front()
    back()
    data()
    ** all of them return addresses

    fill() -> all the elements
    swap() -> swap two arrays
*/