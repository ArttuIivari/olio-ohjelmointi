#include "game.h"



Game::Game()
{

}

Game::Game(int number)
{
    maxNumber = number;
    cout << "GAME CONSTRUCTOR: object initialized with " << number << " as maximum value" << endl;
}


Game::~Game()
{
    cout << "GAME DESTRUCTOR" << endl;
}

void Game::play()
{
    srand(time(NULL));
    randomNumber = rand() % maxNumber;
    if(randomNumber==0){
        randomNumber = maxNumber;
    }
    while(playerGuess!=randomNumber){
        cout << "Arvaa numero 1-" << maxNumber << " valilta" << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if(playerGuess > randomNumber){
            cout << "Luku on pienempi." << endl;
        }
        else if(playerGuess < randomNumber){
            cout << "Luku on suurempi." << endl;
        }
        else if(playerGuess == randomNumber){
            printGameResult();
        }

    }


}


void Game::printGameResult()
{
    cout << "Oikea vastaus! " << endl;
    cout << "Arvasit yhteensa " << numOfGuesses << " kertaa." << endl;
}
