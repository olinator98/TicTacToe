#include <iostream>
#include "player.h"
#include "gui.h"
#include "gameplan.h"


using namespace std;

int main()
{
    Gameplan *gameplan = new Gameplan();
    Player *player1 = new Player("", NULL, "");
    player1->setPlayerNumber(1);
    player1->setPlayerName(1);
    //player1->setGameType("O");
    //cout<<player1->getPlayerNumber();
    //cout<<player1->getGameType();

    Player *player2 = new Player("", NULL, "");
    player2->setPlayerNumber(2);
    player2->setPlayerName(2);
    //player2->setGameType("X");

    //cout<<player2->getPlayerNumber();
    //cout<<player2->getGameType();

    GUI *guiMain = new GUI();
    guiMain->draw();

    //check if name is correct
    if(player1->getPlayerName(1) != "")
    {
        gameplan->fieldNumberInsert(1);
    }
    else
    {
        cout<<"This username is not avalaible. ";
        player1->setPlayerName(1);
    }

    if(player2->getPlayerName(2) != "")
    {
        //gameplay->fieldNumberInsert(2);
    }
    else
    {
        cout<<"This username is not avalaible. ";
        player2->setPlayerName(2);
    }


    return 0;
}
