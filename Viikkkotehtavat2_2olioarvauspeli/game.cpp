#include "game.h"
#include <ctime>
#include <iostream>

using namespace std;

Game::Game(int maxNumber) : playerGuess(0), numOfGuesses(0), maxNumber(maxNumber) {

    srand(time(NULL));

    randomNumber = rand() % maxNumber;
    randomNumber += 1;
    cout << randomNumber << endl;
    cout << "Game constructor: Initialized game as "
         << maxNumber
         <<" a maximum value"
         << endl;
    play();
}


Game::~Game(){
    cout   <<   "GAME DESTRUCTOR: Odject cleared from stack memory" << endl;
}


void Game::play() {




    while (playerGuess != randomNumber){
        cout << "arvauksesi?" << endl;
        cin >> playerGuess;

        numOfGuesses++;


        if (randomNumber==playerGuess){
            cout << "oikein" << endl;
        } else if (playerGuess<randomNumber){
            cout << "luku on isompi" << endl;
        } else {
            cout << "luku on pienempi" << endl;
        }

    }
    printGameResult();

    }


      void Game::printGameResult() {
           cout << "Your guess was correct" << endl;
          cout << "Your guessd " << numOfGuesses << " times!" << endl;

      }







