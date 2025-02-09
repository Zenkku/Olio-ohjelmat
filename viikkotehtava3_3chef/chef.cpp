#include "chef.h"

Chef::Chef()
{
    cout << "Chef defaultkontruktori, ei nimea"
         << endl;
}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori, kokin nimi "
          << chefName
         << endl;
}

Chef::~Chef()
{
    cout << "Chef destruktori"
         << endl;
}

string Chef::getChefName() const
{
    return chefName;
}


int Chef::makeSalad(int aines)
{
    int annoksia = aines / 5;
    cout << " Chef " << chefName << " aines voi tehda " << annoksia
        << " salad "
         << endl;
    return annoksia;
}

int Chef::makeSoup(int aines)
{
    int annoksia = aines / 3;
    cout << " Chef " << chefName << " voi tehda " << annoksia
         << " soup "
         << endl;
    return annoksia;
}

