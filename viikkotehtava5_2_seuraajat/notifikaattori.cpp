#include "notifikaattori.h"
#include "seuraaja.h"

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    cout << "uusi seuraaja " << uusiSeur->getNimi() << endl;
    uusiSeur->next = seuraajat;
    seuraajat = uusiSeur;
}

void Notifikaattori::poista(Seuraaja *poistSeur)
{

    cout << "Poistettava seuraaja: "<< poistSeur->getNimi() << endl;

    if(seuraajat==poistSeur){
        seuraajat = poistSeur ->next;
    } else {
        Seuraaja *alku = seuraajat;
        while (alku != nullptr) {
        if (alku->next == poistSeur){
            alku->next = poistSeur->next;
        }
    }
    }
}



void Notifikaattori::tulosta()
{
    cout << "Seuraajat: " << endl;
    Seuraaja *alku = seuraajat;
    while (alku != nullptr) {
        cout << "Seuraaja "
             << alku->getNimi() << endl;
        alku = alku->next;
    }



}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;
    cout << "viestin lahetys" << endl;
    while (seuraajat != nullptr) {
        seuraajat->paivitys(viesti);
        seuraajat = seuraajat->next;
    }


}
