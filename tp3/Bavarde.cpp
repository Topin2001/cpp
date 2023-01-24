#include <iostream>
#include <string>
#include "Bavarde.hpp"

Bavarde::Bavarde(int id)
{
    this->id = id;
    std::cout << "Construction de " << id << std::endl;
}


Bavarde::~Bavarde()
{
    std::cout << "Tais toi " << id << std::endl;
}

int Bavarde::get()
{
    return id;
}

void Bavarde::afficher()
{
    std::cout << "Affichage de " << id << std::endl;
}

Couple::Couple(Bavarde const& b1, Bavarde const& b2):b1(b1),b2(b2)
{
}

Couple::~Couple()
{
}

void Couple::getB(){
    std::cout << "b1 = " << b1.get() << ", b2 = " << b2.get() << std::endl;
}

Famille::Famille(size_t taille){
    tab = new Bavarde[taille];
}

Famille::~Famille(){
    delete[] tab;
};