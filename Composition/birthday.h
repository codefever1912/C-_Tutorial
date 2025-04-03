#ifndef BIRTHDAY_H
#define BIRTHDAY_H
using namespace std;

class Birthday{
    public:
        Birthday(int d, int m, int y);
        void printBday();
    private: 
        int day, month, year;
};

#endif

/*
composition is basically using objects of one class in some other class to create more complex and intertwined structures
 
*/