#include "Chaine.hpp"
#include <cstring>

Chaine::Chaine() : capacite(-1), tab(nullptr)
{
}

Chaine::Chaine(const char *inCS)
{
    capacite = strlen(inCS);
    tab = new char[capacite];
    strcpy(tab, inCS);
}

Chaine::Chaine(int inCapacite)
{
    capacite = inCapacite;
    tab = new char[capacite];
    tab[0] = '\0';
}

Chaine::Chaine(Chaine const &chaine)
{
    capacite = chaine.capacite;
    tab = new char[capacite];
    strcpy(tab, chaine.tab);
    std::cout << "Constructeur de copie appelé" << std::endl;
}

Chaine::~Chaine()
{
    delete[] tab;
}

void Chaine::afficher(std::ostream &stream) const
{
    stream << tab;
}

Chaine &Chaine::operator=(Chaine const &c)
{

    if (&c != this)
    {
        delete[] tab;

        capacite = c.capacite;
        tab = new char[capacite];
        strcpy(tab, c.tab);
    }

    return *this;
};

char &Chaine::operator[](int i)
{
    return tab[i];
};

std::ostream &operator<<(std::ostream &stream, Chaine const &c)
{
    stream << c.c_str();
    return stream;
};

Chaine operator+(Chaine const &c1, Chaine const &c2)
{
    int tmp = strlen(c1.c_str()) + strlen(c2.c_str());
    Chaine c0(tmp);
    strcat(c0.c_str(), c1.c_str());
    strcat(c0.c_str(), c2.c_str());

    return c0;
};
