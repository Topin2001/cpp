#ifndef __ZZ_HPP__
#define __ZZ_HPP__

#include <iostream>

class ZZ
{
public:
    std::string nom, prenom;
    double note;
};

bool operator<(ZZ const &, ZZ const &);
std::ostream &operator<<(std::ostream &, ZZ const &);

#endif