#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    ItalianChef chef2("Mario",200,150);
    chef2.getName("Mario");
    //chef2.makePasta(); //toinen vaihtoehto on tehdä niin, että ei tulosta konstruktiosta makePasta() metodilla, vaan tulostus tapahtuu mainissa pois kommentoidulla rivillä.
}
