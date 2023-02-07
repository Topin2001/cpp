#ifndef __PILE_HPP__
#define __PILE_HPP__

class Pile
{
private:
    int Capacity;
    int Taille = 0;
    int *tab;

public:
    Pile(int const = 0);
    ~Pile();
    inline bool empty() { return Taille == 0; };
    inline int size() { return Taille; };
    void push(int);
    inline int top() { return tab[Taille - 1]; };
    inline void pop() { Taille--; };
};

#endif