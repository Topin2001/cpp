#ifndef __PILE_HPP__
#define __PILE_HPP__

#include <stdexcept>

template<typename T=int>
class Pile
{
private:
    int Capacity;
    int Taille = 0;
    int *tab;

public:
    Pile(int const = 1);
    ~Pile();
    bool empty();
    inline int size() { return Taille; };
    void push(int);
    inline int top() { return tab[Taille - 1]; };
    void pop();
};

#include "Pile.xpp"

#endif