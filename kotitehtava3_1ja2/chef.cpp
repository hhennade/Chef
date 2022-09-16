#include<iostream>
#include "chef.h"

using namespace std;

Chef::Chef(string s)
{
    name = s;
    cout << "Chef " << name + " konstuktori"<<endl;
}

Chef::~Chef()
{
    cout << "Chef " << name + " destruktori"<<endl;
}


void Chef::makeSalad()
{
    cout << "Chef " << name + " makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name + " makes soup"<<endl;
}
