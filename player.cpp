#include "player.h"
#include <time.h>



using namespace std;

Player::Player(string playerName, int playerNumber, string gameType)
{
    playerName=playerName;
    playerNumber = playerNumber;
    gameType = gameType;
    this->setpGamePlan(pGameplan);
}

void Player::setPlayerName(int playerNumber)
{
   if(playerNumber == 1)
   {
       cout<<"Player 1, please insert your name: ";
       cin>>playerName1;
       cout<<"\nPlayer one: "<< playerName1 <<"\n";
   }
   else
   {
       cout<<"Player 2, please insert your name\n";
       cin>>playerName2;
       cout<<"\nPlayer 2: " << playerName2<<"\n";
       system("pause");
   }

}

string Player::getPlayerName(int playerNumber)
{
    if(playerNumber == 1)
    {
        return playerName1;
    }
    else
    {
        return playerName2;
    }
}

void Player::setpGamePlan(Gameplan *p)
{
    pGameplan = p;
}


int Player::getPlayerNumber() const
{
    return playerNumber;
}

void Player::setPlayerNumber(int value)
{
    playerNumber = value;
}

string Player::getGameType() const
{
    return gameType;
}

void Player::setGameType(const string &value)
{
    gameType = value;
}

int Player::playerChange(int playerNumber)
{
    playerNumber = playerNumber;
    if(playerNumber == 1)
    {
        pGameplan->fieldNumberInsert(playerNumber);
    }
}

