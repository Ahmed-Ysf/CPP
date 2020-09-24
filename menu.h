
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "exception.h"
using namespace std;

class Menu
{
private:
    string nom;
    string * options;
    int nbOptions;
    int longueurMax;

public:
    ~Menu();
    Menu(const string &_nom);
    int afficher();
    void AttendreAppuiTouche();
};

#endif // MENU_H
