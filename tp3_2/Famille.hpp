#ifndef __FAMILLE_HPP__
#define __FAMILLE_HPP__

class Mere
{
private:
    static int compteur;
    std::string nom;

public:
    Mere();
    Mere(std::string);
    ~Mere();
    std::string getName();
    static int getCompteur();
    virtual void afficher();
};

class Fille : public Mere
{
public:
    Fille();
    Fille(std::string);
    ~Fille();
    virtual void afficher();
};

#endif