#include <iostream>
#include "header.h"
using namespace std;

int main(){
    Tutorial *obj;
    obj->print();
}

/*
Creating an external classes as a file
1. .cpp(importing the .cpp file to use the class), .h, .cpp(defining the methods of the .h files)
2. .h layout
#IFNDEF FILE_NAME
#DEFINE FILE_NAME
inlcude whatever header files necessary

class Tutorial{
    *insert protected variabsles
    public:
        *insert public methods and variables
};
do not inlcude definitions/implemetations for the methods

.cpp file:

#include "FILE_NAME.h"
include any other headers

Tutorial::METHOD_NAME(){
    *insert implementation
}
*/