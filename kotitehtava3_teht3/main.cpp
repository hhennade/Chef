#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    Chef chef1("Jyrki");
    ItalianChef chef2("Mario");
    chef2.getName("Mario");
    chef1.makeSalad();
    chef2.makePasta();
    chef1.makeSoup();
}
