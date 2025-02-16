#include "pankkitili.h"

Pankkitili::Pankkitili(string o)
{
    omistaja = o;
    saldo = 0;
    cout << "Pankkitili luotu " << omistaja << ":lle" << "saldo=" << saldo << endl;

}



bool Pankkitili::withdraw(double summa)
{
    if (summa < 0) {
      return false;
    } else if(summa>saldo){
        return false;
    } else {
            saldo=saldo-summa;
            return true;

    };

}

bool Pankkitili::deposit(double summa)
{
    if(summa<0){
        return false;
    } else {
        saldo=saldo+summa;
                return true;


    };


}

double Pankkitili::getBalance()
{
    return saldo;
}





