#include<iostream>
#include "chef.h"

using namespace std;

Chef::Chef(int jauhot, int vesi, string s)
{
    name = s;
    cout << "Chef " << s + " konstuktori"<<endl;
}

Chef::~Chef()
{
}

void Chef::makeSalad()
{
}

void Chef::makeSoup()
{
}

