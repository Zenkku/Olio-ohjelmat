#include "italianchef.h"


ItalianChef::ItalianChef()
{
     cout << "ItalianChef defaultkontruktori, ei nimea"
          << endl;
}


ItalianChef::ItalianChef(string name)
    :Chef(name)
{
    cout << "ItalianChef kontruktori"
        << ", kokin nimi "
        << name
         << endl;
}



ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destruktori"
         << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)
{


    if (pw == password){
        cout << "oikein"
             << endl;
        flour = f;
        water = w;
        makePizza();
        return true;

    } else{
        cout << "vaarin"
                 << endl;
        return false;
    }
}

int ItalianChef::makePizza()
{
    int aines_f = flour / 5;
    int aines_w = water / 5;
    int pizzas =
        min(aines_f,aines_w);
    cout << flour << "jauhot ja " << water << "vesi voi tehda "
         << pizzas << " pizzas " << endl;
    return pizzas;
}
