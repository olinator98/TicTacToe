#include "gui.h"
#include "player.h"
#include "gameplan.h"

GUI::GUI() :
    matrix{'1', '2', '3', '4', '5', '6', '7', '8', '9'}
  //Elementinitianisator
{

    //    matrix = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
}

void GUI::draw()
{

    system("cls");
    cout<<"TicTacToe V2\n";

    cout << "     |     |     " << endl;
    cout << "  " << matrix[0] << "  |  " << matrix[1] << "  |  " << matrix[2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << matrix[3] << "  |  " << matrix[4] << "  |  " << matrix[5] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << matrix[6] << "  |  " << matrix[7] << "  |  " << matrix[8] << endl;

    cout << "     |     |     " << endl << endl;

}

GUI::~GUI()
{

}

