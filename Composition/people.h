#ifndef PEOPLE_H
#define PEOPLE_H

#include "birthday.h"
#include <string>
using namespace std;

class People{
    public:
        People(string n, Birthday obj);
        void print();
    private:
        string name;
        Birthday DOB;
};

#endif