#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Chaine
{
private:
    int capacite;
    char *tab;

public:
    Chaine();
    Chaine(const char *);
    Chaine(int);
    Chaine(const Chaine &);

    ~Chaine();

    void afficher(std::ostream & = std::cout) const;
    inline void afficherParValeur(Chaine c) const { c.afficher(); };
    inline void afficherParReference(Chaine &c) const { c.afficher(); };

    Chaine &operator=(Chaine const &);
    char &operator[](int);

    inline int getCapacite() const { return capacite; };
    inline char *c_str() const { return tab; };
};

std::ostream &operator<<(std::ostream &, Chaine const &);
Chaine operator+(Chaine const &, Chaine const &);

#endif
