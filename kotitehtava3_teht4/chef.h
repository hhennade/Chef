#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include <stdlib.h>

using namespace std;

class Chef
{
public:
    Chef(int jauhot, int vesi, string);
    ~Chef();
    void makeSalad();
    void makeSoup();
protected:
    string name;
};

#endif // CHEF_H
