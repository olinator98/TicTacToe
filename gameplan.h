#ifndef GAMEPLAN_H
#define GAMEPLAN_H
#include <string>
#include <iostream>
#include "player.h"
#include "gui.h"

using namespace std;

class Gameplan
{
public:
    Gameplan();
    bool setFieldName();
    int getFieldNumber();
    void setFieldNumber(int value);
    bool winner = false;
    bool gameWinning();
    void setGui(GUI* p);
    char fieldNumberInsert(int playerNumber);
    void changePlayer(int playerNumber);
    unsigned char fieldNumber;

private:


    GUI* pGui;

};

#endif // GAMEPLAN_H
