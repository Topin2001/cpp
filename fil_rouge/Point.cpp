// Fichier Point.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "Point.hpp" // Inclusion d'un fichier du répertoire courant

Point::Point(){
    this->x = 0;
    this->y = 0;
    compteur++;
}

Point::Point(int x, int y){
    this->x = x;
    this->y = y;
    compteur++;
}

int Point::compteur = 0;

Point const Point::ORIGINE = Point(0,0);

void Point::setX(int x)
{
    this->x = x;
}
void Point::setY(int y)
{
    this->y = y;
}
void Point::deplacerDe(int x, int y)
{
    this->x += x;
    this->y += y;
}
void Point::deplacerVers(int x, int y)
{
    this->x = x;
    this->y = y;
}

