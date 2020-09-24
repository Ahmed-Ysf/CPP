#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <string>

class Exception
{
public:
    Exception(int _code, std::string _message );
    int ObtenirCodeErreur() const;
    std::string ObtenirMessage() const;

private:
    int code;
    std::string message;
};

#endif // EXCEPTION_H
