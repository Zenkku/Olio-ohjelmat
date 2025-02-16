#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas A("Aaa", 1000);
    Asiakas B("Bee", 1000);
    Asiakas C("Cee", 1000);

    C.luotonNosto(300);



    return 0;
}
