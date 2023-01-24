#ifndef __FORME_HPP__
#define __FORME_HPP__

#include "Point.hpp"
#include <string>

enum COULEURS
{
    NOIR,
    BLANC,
    BLEU,
    VERT,
    ROUGE,
    JAUNE
};

class Forme
{
private:
    int nbForme = 0;
    COULEURS color = COULEURS::BLEU;

protected:
    Point p;
    int w;
    int h;

public:
    Forme(Point p = Point(), int = 0, int = 0);
    inline int getNbForme() { return nbForme; }
    inline Point getPoint() { return p; }
    inline COULEURS getCouleur() { return color; }
    inline void setCouleur(COULEURS color) { this->color = color; }
};

#endif