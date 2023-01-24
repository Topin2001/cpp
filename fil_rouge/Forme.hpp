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
    COULEURS color;

protected:
    Point p;
    int w;
    int h;

public:
    Forme(Point p = Point(), int = 0, int = 0, COULEURS c = COULEURS::BLEU);
    Forme(Point p, COULEURS c);
    inline int getNbForme() { return nbForme; }
    inline Point& getPoint() { return p; }
    inline COULEURS getCouleur() { return color; }
    inline void setCouleur(COULEURS color) { this->color = color; }
    inline void setX(int x1) { p.setX(x1); };
    inline void setY(int y1) { p.setY(y1); };
};

#endif