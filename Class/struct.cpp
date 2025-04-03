#include <iostream>
using namespace std;

struct Vector{
    int size;
    double *elem; //pointer to elements
    
    double sum(int n){
        Vector v;  // can create an object inside a function
        double sum = 0;
        vector_init(v,n);
        for(int i=0;i<n;i++){
            cin >> v.elem[i];
        }
        for(int i=0;i<n;i++){
            sum +=v.elem[i];
        }
        return sum;
    };

    void vector_init(Vector&v, int s){  //pass v by non-const reference bcoz of &, function able to modify vector passed 
        v.elem = new double[s];
        v.size = s;
    };
};

int main(){
    Vector obj;
    cout << obj.sum(5);
}