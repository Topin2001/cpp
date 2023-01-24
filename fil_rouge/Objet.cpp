#include <iostream>
#include <string>
#include "Objet.hpp"

Rectangle::Rectangle(Point p, int w, int h) : Forme::Forme(p, w, h)
{
    this->ordre = 0;
}

std::string Rectangle::toString() const
{
    std::string str = "RECTANGLE " + std::to_string(p.getX()) + " " + std::to_string(p.getY()) + " " + std::to_string(w) + " " + std::to_string(h);

    return (str);
}

Cercle::Cercle(Point p, int w, int h) : Forme::Forme(p, w, h)
{
    this->ordre = 0;
}

Cercle::Cercle(Point p, int r) : Forme::Forme(Point(p.getX() + r, p.getY() + r), 2 * r, 2 * r)
{
    this->ordre = 0;
}

std::string Cercle::toString() const
{
    std::string str = "CERCLE " + std::to_string(p.getX()) + " " + std::to_string(p.getY()) + " " + std::to_string(w) + " " + std::to_string(h);

    return (str);
}

int Liste::compteur = 0;

Liste::Liste()
{
}

int Liste::getCompteur()
{
    return compteur;
}

void Liste::ajouter(Cercle c)
{
    if (nb_c + 1 < (int)taille)
    {
        c.setOrdre(++compteur);
        cercles[nb_c] = c;
        nb_c++;
    }
    else
    {
        std::cout << "Error" << std::endl;
    }
}

void Liste::ajouter(Rectangle r)
{
    if (nb_r + 1 < (int)taille)
    {
        r.setOrdre(++compteur);
        rectangles[nb_r] = r;
        nb_r++;
    }
    else
    {
        std::cout << "Error" << std::endl;
    }
}

std::string Liste::toString()
{
    std::string str;
    int tmp_r = nb_r;
    int tmp_c = nb_c;
    for (int i = 0; i < compteur; i++)
    {
        if (tmp_c > 0 && tmp_r > 0)
        {
            if (cercles[tmp_c - 1].getOrdre() < rectangles[tmp_r - 1].getOrdre())
            {
                str += rectangles[tmp_r - 1].toString();
                tmp_r--;
            }
            else
            {
                str += cercles[tmp_c - 1].toString();
                tmp_c--;
            }
        } else if (tmp_c <= 0 && tmp_r > 0)
        {
            str += rectangles[tmp_r-1].toString();
            tmp_r--;
        } else if (tmp_r <= 0 && tmp_c > 0)
        {
            str += cercles[tmp_c-1].toString();
            tmp_c--;
        }
        str += " ";
    }
    return str;
}