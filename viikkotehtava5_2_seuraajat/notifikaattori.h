#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include <iostream>

#include "seuraaja.h"

using namespace std;

class Notifikaattori

{
public:
    Notifikaattori();

    void lisaa(Seuraaja *seur);
    void poista(Seuraaja *seur);
    void tulosta();
    void postita(string viesti);

private:
    Seuraaja *seuraajat = nullptr;

};

#endif // NOTIFIKAATTORI_H
