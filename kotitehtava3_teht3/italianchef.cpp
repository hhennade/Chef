#include<iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;


ItalianChef::ItalianChef(string s):Chef(s)
{
    getName(name);
    cout << "Chef " << name + " konstuktori"<<endl;
}

ItalianChef::~ItalianChef()
{
}

string ItalianChef::getName(string s)
{
    name = s;
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << name + " makes pasta"<<endl;
}
