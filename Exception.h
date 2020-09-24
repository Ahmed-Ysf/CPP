#ifndef EXCEPTION_H
#define EXCEPTION_H
#include "menu.h"
#endif // EXCEPTION_H

class Exception
{
private:
    int codeErreur;
    string message;
public:
    Exception(int _codeErreur, string _message);
    int ObtenirCodeErreur() const;
    string ObtenirDescription() const;

};

