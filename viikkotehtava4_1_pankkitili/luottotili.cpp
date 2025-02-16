#include "luottotili.h"


Luottotili::Luottotili(string o, double lr)
    : Pankkitili(o)
{
    cout << "Luottotili luotu " << omistaja
         << ":lle, luottoraja " << lr << endl;

    luottoRaja = lr;
    cout << "luottoraja=" << luottoRaja << endl;
    saldo = 0;

}

bool Luottotili::withdraw(double summa)
{

    if(summa<0){
        return false;
    } else if (luottoRaja<summa+saldo){
        return false;
    } else {
        saldo=saldo+summa;
        return true;
        cout << "luotto=" << saldo << "onnistui" << endl;
    }

}


bool Luottotili::deposit(double summa)
{
    if (summa<0){
        return false;
    } else{
        saldo=saldo-summa;
        return true;
        cout << "saldon vahennys=" << saldo << "onnistui" << endl;
    }

}
