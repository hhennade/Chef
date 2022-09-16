#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"

using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    string getName(string);
    void makePasta();
};

#endif // ITALIANCHEF_H
