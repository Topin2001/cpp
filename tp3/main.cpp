#include <iostream>
#include "Bavarde.hpp"

int main(int, char **)
{
    Bavarde * b = new Bavarde();
    Bavarde * b1 = new Bavarde();

    b->afficher();
    std::cout << b1->get() << std::endl;

    return 0;
}
