#ifndef __BAVARDE_HPP__
#define __BAVARDE_HPP__

class Bavarde
{
private:
    int id;

public:
    Bavarde(int = 0);
    ~Bavarde();
    int get();
    void afficher();
};

class Couple
{
private:
    Bavarde b1;
    Bavarde b2;

public:
    Couple(Bavarde const &, Bavarde const &);
    ~Couple();
    void getB();
};

class Famille
{
private:
    Bavarde *tab;

public:
    Famille(size_t = 0);
    ~Famille();
};

#endif