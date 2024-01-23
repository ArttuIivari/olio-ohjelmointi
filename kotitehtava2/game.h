#ifndef GAME_H
#define GAME_H
using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>

class Game
{
public:
    Game();
    Game(int maxnum);
    ~Game();
    void play();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
};

#endif // GAME_H
