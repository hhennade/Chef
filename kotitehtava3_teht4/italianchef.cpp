#include<iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;


ItalianChef::ItalianChef(string s, int jauhot, int vesi):Chef(jauhot, vesi, s)
{
    getName(name);
    cout << "Chef " << s + " konstuktori"<<endl;
    makePasta(jauhot, vesi);
}

ItalianChef::~ItalianChef()
{
    cout << "Chef " << name + " destruktori"<<endl;
}


string ItalianChef::getName(string s)
{
  name = s;
  return name;
}

void ItalianChef::makePasta(int jauhot, int vesi)
{
    cout << "Chef " << name + " makes pasta with special recipe"<<endl;
    cout << "Chef " << name + " users jauhot = " << jauhot << endl;
    cout << "Chef " << name + " users vesi = " << vesi << endl;
}
