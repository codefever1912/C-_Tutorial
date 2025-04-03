#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <string>
using namespace std;

class Personal{
    public:
        Personal(string, int);
        string getName(void);
        int getAge(void);
    private:
        string name;
        int age;
};

#endif