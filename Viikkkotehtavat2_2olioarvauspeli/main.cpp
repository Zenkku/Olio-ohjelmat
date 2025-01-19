#include <algorithm>
#include <iostream>
#include "game.h"

using namespace std;

int scale;

int main()
{

    cout << "give me your game's number" << endl;
    cout << "x= " << endl;
    cin >> scale;
    Game game(scale);
    return 0;
}
