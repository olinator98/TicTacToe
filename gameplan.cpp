#include "gameplan.h"
#include "gui.h"

Gameplan::Gameplan()
{
    pGui = new GUI();
    //Instance the pointer
}
bool Gameplan::setFieldName()
{
    return true;
}

char Gameplan::fieldNumberInsert(int playerNumber)
{
    playerNumber = playerNumber;
    cout<<"Player "<<playerNumber;
    //unsigned char fieldNumber;
    //unsigned char fieldNumber;
    char playingType;
    cout<<"Please insert a field: ";
    cin>>fieldNumber;
    this->setGui(pGui);


    if(playerNumber == 1)
    {
        playingType='O';
    }
    else
    {
        playingType = 'X';
    }

    if(pGui->matrix[fieldNumber-49]!='X' && pGui->matrix[fieldNumber-49]!='O' )
    {
        //Use an object of the class GUI to use the attribute matrix. Pointer to this o
        /*cout<<matrix[fieldNumber-48];
        cout<<fieldNumber;
        cout<<"Nice shit, this works!";*/
        pGui->matrix[fieldNumber-49] = {playingType};
        pGui->draw();
        gameWinning();

        while(gameWinning() == false)
        {
            changePlayer(playerNumber);
        }
        return pGui->matrix[9];

    }
    else
    {
        cout<<"The other has already put his mark in this field.";
        fieldNumberInsert(playerNumber);
    }
    return pGui->matrix[9];

}

void Gameplan::changePlayer(int playerNumber)
{
    playerNumber = playerNumber;

    if(playerNumber == 1)
    {
        fieldNumberInsert(2);
    }
    else
    {
        fieldNumberInsert(1);
    }
}

bool Gameplan::gameWinning()
{

    if (pGui->matrix[0] == pGui->matrix[1] && pGui->matrix[1] == pGui->matrix[2])
    {
        winner = true;
    }
    else if (pGui->matrix[3] == pGui->matrix[4] && pGui->matrix[4] == pGui->matrix[5])
    {
        winner = true;
    }
    else if (pGui->matrix[6] == pGui->matrix[7] && pGui->matrix[7] == pGui->matrix[8])
    {
        winner = true;
    }
    else if (pGui->matrix[0] == pGui->matrix[3] && pGui->matrix[3] == pGui->matrix[6])
    {
        winner = true;
    }
    else if (pGui->matrix[1] == pGui->matrix[4] && pGui->matrix[4] == pGui->matrix[7])
    {
        winner = true;
    }
    else if (pGui->matrix[2] == pGui->matrix[5] && pGui->matrix[5] == pGui->matrix[8])
    {
        winner = true;
    }
    else if (pGui->matrix[0] == pGui->matrix[4] && pGui->matrix[4] == pGui->matrix[8])
    {
        winner = true;
    }
    else if (pGui->matrix[2] == pGui->matrix[4] && pGui->matrix[4] == pGui->matrix[6])
    {
        winner = true;
    }
    return winner;
}


void Gameplan::setGui(GUI *p)
{
    pGui = p;
}



