#ifndef GAME_H
#define GAME_H


class Game
{
public:
    Game();
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
