#ifndef __CPP3_PRODUCTEUR_HPP__
#define __CPP3_PRODUCTEUR_HPP__

#include <iostream>

class Producteur
{
    int travail = 0;

public:
    int getTravail();
    bool produire(int, std::string);
};

#endif
