#ifndef __OBJET_HPP__
#define __OBJET_HPP__

#include "Forme.hpp"
#include <string>

class Rectangle : public Forme
{
    int ordre;

public:
    inline void setOrdre(int ordre) { this->ordre = ordre; }
    inline int getOrdre() { return ordre; }
    Rectangle(Point p = Point(), int = 0, int = 0);
    std::string toString();
};

class Cercle : public Forme
{
    int ordre;

public:
    inline void setOrdre(int ordre) { this->ordre = ordre; }
    inline int getOrdre() { return ordre; }
    Cercle(Point, int, int);
    Cercle(Point p = Point(), int = 0);
    std::string toString();
};

class Liste
{
public:
    void ajouter(Rectangle);
    void ajouter(Cercle);
    static size_t const taille = 10;
    static int compteur;
    static int getCompteur();
    std::string toString();
    Cercle cercles[taille];
    int nb_c = 0;
    Rectangle rectangles[taille];
    int nb_r = 0;
    Liste();
};

#endif