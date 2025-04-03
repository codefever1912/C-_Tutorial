#include <iostream>
using namespace std;

class Vector{
    public:
        Vector(int n):elem{new double[n]}, size{n}{} // Constructing a vector
        double& operator[](int i){return elem[i];}
        int size(){return size;} 
    private: 
        int size;//no of elements
        double *elem; // pointer to the elements
};

int main(){

}