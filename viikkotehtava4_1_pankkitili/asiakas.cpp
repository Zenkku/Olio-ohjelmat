#include "asiakas.h"

Asiakas::Asiakas(string n, double lr)
    : kayttotili(n), luottotili(n, lr)
{
    nimi=n;
    cout << "nimi=" << nimi << endl;
}


string Asiakas::getNimi() const
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Kayttotilin saldo " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo " << luottotili.getBalance() << endl;
}





bool Asiakas::talletus(double summa)
{
    if (summa <= 0.0) {
        cout << "Talletus " << summa << " ei sallittu" << endl;
        return false;
    } else {
        kayttotili.deposit(summa);
        return true;
    }
}


bool Asiakas::nosto(double summa)
{
    if (summa < 0.0) {
        cout << "Nosto " << summa << " ei sallittu" << endl;
        return false;
    } else {
        kayttotili.withdraw(summa);
        return true;
    }

}

bool Asiakas::luotonMaksu(double summa)
{
    if (summa<0.0){
       cout << "luoton maksu meni pieleen " << endl;
        return false;
    } else {
        luottotili.withdraw(summa);
        cout << "luoton maksu onnistui=  " << summa << endl;
        return true;
    }

}


bool Asiakas::luotonNosto(double summa)
{
    if (summa < 0.0) {
        cout << "Luoton nosto " << summa << " ei sallittu" << endl;
        return false;
    } else {
        luottotili.withdraw(summa);
        return true;
    }
}


/*bool Asiakas::tiliSiirto(double summa, Asiakas &saaja)
{
    // 1. nosta omalta tililta
    bool onnistuiko=nosta()
    // 2. onnistuiko nosto
    jos onnistui true
    // 2.1 jos, talleta saajan tilille
        saaja.talletus()
    jos ei
        ilmotuis
}
*/
