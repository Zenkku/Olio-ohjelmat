/*Laadi ohjelma, joka pyytää pelaajaa arvaamaan tietokoneen arpoman satunnaisen luvun väliltä 1-20. Pelaajaa autetaan kertomalla onko hänen arvauksensa pienempi tai suurempi tai yhtäsuuri kuin etsittävä luku. Kun arvaus on yhtäsuuri kuin luku, peli päättyy.​

1) Ensin kirjoita ohjelma main-funktion sisälle pääohjelmaksi. Ohjelman runko voisi olla jotain seuraavan kaltaista:​

Arvotaan satunnainen luku​

Kysytään pelaajalta arvaus​

Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku​

Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”​

Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.​

Testaa tässä vaiheessa ohjelman toimivuus, ennen tehtävän jatkamista seuraavalla sivulla.

*/


#include <iostream>

using namespace std;

int maxnum;
int arvaukset;




int game(int maxnum)
{

    srand(time(NULL));

    int satluku = rand() % maxnum;
    satluku += 1;

    int arvaus = 0;
    int arvaukset = 0;




    while (arvaus!=satluku){
        cout << "arvauksesi?" << endl;
        cin >> arvaus;

        arvaukset++;


        if (satluku==arvaus){
            cout << "oikein" << endl;
        } else if (arvaus<satluku){
            cout << "luku on isompi" << endl;
        } else {
            cout << "luku on pienempi" << endl;
        }

    }



    return arvaukset;


}

int main(){

            cout << "Maksimi" << endl;
    cin >> maxnum;

   int tulos = game(maxnum);

    cout << "arvaukset" << tulos << endl;

}
