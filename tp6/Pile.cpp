#include "Pile.hpp"

Pile::Pile(int const taille)
{
    if (taille > 0)
    {
        Capacity = taille;
        tab = new int[Capacity];
    }
    else
        throw std::invalid_argument("Taille négative ou nulle");
}

Pile::~Pile()
{
    delete[] tab;
}

bool Pile::empty()
{
    if (Capacity > 0)
    {
        return Taille == 0;
    }
    else
        throw std::invalid_argument("Taille négative ou nulle");
}

void Pile::push(int a)
{
    if (Taille < Capacity)
    {
        tab[Taille] = a;
        Taille++;
    }
}

void Pile::pop()
{
    if (Taille > 0)
    {
        Taille--;
    }
    else
        throw std::invalid_argument("Taille négative ou nulle");
}