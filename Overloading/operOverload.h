#ifndef OPEROVERLOAD_H
#define OPEROVERLOAD_H

class OperOverload{
    public: 
        OperOverload();
        OperOverload(int);
        OperOverload operator +(OperOverload);
        int num;
};

#endif