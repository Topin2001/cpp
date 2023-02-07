#include "Pile.hpp"

Pile::Pile(int const taille)
{
    Capacity = taille;
    tab = new int[Capacity];
}

Pile::~Pile()
{
    delete[] tab;
}

void Pile::push(int a){
    if (Taille < Capacity)
    {
        tab[Taille] = a;
        Taille++;
    }   
}