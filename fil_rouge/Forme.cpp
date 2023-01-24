#include "Forme.hpp"

Forme::Forme(Point p, int w, int h, COULEURS c) : p(p), w(w), h(h), color(c)
{
    nbForme++;
}

Forme::Forme(Point p, COULEURS c) : p(p), color(c)
{
    nbForme++;
}