#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    Chef chef1("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    ItalianChef chef2("Anthony Bourdain");
    chef2.makeSalad();
    chef2.makeSoup();
}



