#include <iostream>
using namespace std;

template <class T>
class Tutorial{
    public: 
        Tutorial(T x){
            cout << x << " is not a character"<< endl;
        }
}; 

template<> //template specialisation
class Tutorial<char>{ // this class will deal only with char type input Tutorial ob1(73);

    public:
        Tutorial(char c){
            cout << c << " is a charcer" << endl;
        }
};
  
int main(){
    Tutorial<int> ob1(73);
    Tutorial<int> ob2(4.289784326383);
    Tutorial<char> ob3('c');
}