#include "statisticien.hpp"
#include <fstream>


void Statisticien::acquerir(std::string nom) {
	std::ifstream fichier(nom.c_str());
    int i=0, max, somme=0;
    if (!fichier.fail())
    {
        fichier >> max;

        while (!fichier.eof() && i<max)
        {
            int lecture;
            fichier >> lecture;
            somme += lecture;
            ++i;
        }
        
    }
    fichier.close();
    std::cout << "Somme: " << somme << ", moyenne: " << somme/max << std::endl;
}

bool Statisticien::aCalcule(){
    return calcul;
}
