#include "exception.h"

Exception::Exception(int _code, std::string _message):
    code(_code),
    message(_message)
{
}

int Exception ::ObtenirCodeErreur() const
{
    return code;
}

std::string Exception::ObtenirMessage() const
{
    return message;
}
