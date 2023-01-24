#include "Forme.hpp"

int Forme::nbForme = 0;

Forme::Forme(Point p, int w, int h, COULEURS c) : p(p), w(w), h(h), color(c)
{
    id = nbForme;
    nbForme++;
}

Forme::Forme(Point p, COULEURS c) : p(p), color(c)
{
    id = nbForme;
    nbForme++;
}