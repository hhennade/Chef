
#include<iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;


ItalianChef::ItalianChef(string s):Chef(s)
{
    name = s;
}

ItalianChef::~ItalianChef()
{
}
