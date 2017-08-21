#ifndef GUI_H
#define GUI_H
#include <string>
#include <iostream>


using namespace std;
class Gameplan;
class GUI
{
friend class Gameplan;
public:
    GUI();
    void draw();
    char matrix[9];
    ~GUI();

private:

};

#endif // GUI_H
