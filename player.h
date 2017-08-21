#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>
#include "gameplan.h"

using namespace std;
class Gameplan;
class Player
{
friend class Gameplan;
public:

    Player(string playerName, int playerNumber, string gameType);
    void setPlayerName(int playerNumber);
    string getPlayerName(int playerNumber);
    void setpGamePlan(Gameplan *p);
    int getPlayerNumber() const;
    void setPlayerNumber(int value);
    string getGameType() const;
    void setGameType(const string &value);

private:

    string playerName1;
    string playerName2;
    int playerNumber;
    string gameType;
    int playerChange(int playerNumber);
    Gameplan *pGameplan;
};

#endif // PLAYER_H
