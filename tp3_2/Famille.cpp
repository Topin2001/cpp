#include <iostream>
#include "Famille.hpp"

int Mere::compteur = 0;

Mere::Mere()
{
    std::cout << "Construction de mère n° " << compteur << std::endl;
    ++compteur;
}

Mere::Mere(std::string nom) : nom(nom)
{
    Mere();
}

Mere::~Mere()
{
    std::cout << "Destruction de mère" << std::endl;
}

int Mere::getCompteur()
{
    return compteur;
}

std::string Mere::getName()
{
    return nom;
}

void Mere::afficher()
{
    std::cout << "Classe Mère" << std::endl;
}

Fille::Fille() : Mere()
{

    std::cout << "Construction de fille" << std::endl;
}

Fille::Fille(std::string nom) : Mere(nom) {}

Fille::~Fille()
{
    std::cout << "Destruction de fille" << std::endl;
}

void Fille::afficher()
{
    std::cout << "Classe Fille" << std::endl;
}