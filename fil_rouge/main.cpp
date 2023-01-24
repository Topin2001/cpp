#include <iostream>
#include <string>
#include "Objet.hpp"

int main(int, char **)
{

    Rectangle r(Point(1, 2), 3, 4);
    // std::cout << r.toString() << std::endl;

    Cercle c(Point(3, 4), 4, 5);
    // std::cout << c.toString() << std::endl;

    Cercle c1(Point(4, 5), 10);
    // std::cout << c1.toString() << std::endl;

    Forme f1;

    std::cout << f1.getColor() << std::endl;

    f1.setColor(COULEURS::ROUGE);

    std::cout << f1.getPoint().getX() << f1.getPoint().getY() << f1.getColor() << std::endl;

    return 0;
}