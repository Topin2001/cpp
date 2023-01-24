#include "producteur.hpp"
#include <fstream>

int Producteur::getTravail()
{
    return travail;
}

bool Producteur::produire(int quantite, std::string nom)
{
    std::ofstream fichier(nom.c_str());
    if (!fichier.fail())
    {
        fichier << quantite << std::endl;
        for (size_t i = 0; i < quantite; i++)
        {
            fichier << i+1 << std::endl;
        }
        
    }
    fichier.close();
    
    ++travail;
    return true;
}
