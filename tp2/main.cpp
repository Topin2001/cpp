#include <iostream>

#include "Point.hpp"
// Fichier main.cpp

int main(int, char **)
{
    std::cout << "Initialisation de compteur à " << Point::getCompteur() << std::endl;
    Point *p = new Point();
    std::cout << "Instanciation n°" << p->getCompteur() << std::endl;
    std::cout << p->getX() << " " << p->getY() << std::endl;
    p->deplacerDe(-5, 5);
    std::cout << p->getX() << " " << p->getY() << std::endl;
    p->deplacerVers(100, 100);
    std::cout << p->getX() << " " << p->getY() << std::endl;
    delete (p);

    Point *p1 = new Point(1000, 1000);
    std::cout << "Instanciation n°" << p1->getCompteur() << std::endl;
    std::cout << p1->getX() << " " << p1->getY() << std::endl;
    p1->deplacerDe(-5, 5);
    std::cout << p1->getX() << " " << p1->getY() << std::endl;
    p1->deplacerVers(100, 100);
    std::cout << p1->getX() << " " << p1->getY() << std::endl;
    delete (p1);

    return 0;
}