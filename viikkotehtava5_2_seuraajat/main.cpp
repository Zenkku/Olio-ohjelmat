#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"


using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("Aapeli ");
    Seuraaja *B = new Seuraaja("Beepeli ");
    Seuraaja *C = new Seuraaja ("Ceepeli ");
    Seuraaja *D = new Seuraaja ("Deepeli ");





    Notifikaattori *N = new Notifikaattori();

    cout << endl;

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);
    N->lisaa(D);


    N->poista(C);

    N->tulosta();
    N->postita("moi");



    cout << endl;

    delete N;
    delete A;
    delete B;
    delete C;

    return 0;
}
