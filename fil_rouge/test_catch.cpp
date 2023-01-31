#include <iostream>
#include <string>
#include "catch.hpp"
#include "Objet.hpp"

TEST_CASE("Polymorphisme", "[Forme]")
{
   Forme *f1 = new Cercle;
   Forme *f2 = new Rectangle;

   Groupe *g = new Groupe;

   std::cout << g->toString() << std::endl;

   g->ajouter(*f1);
   g->ajouter(*f2);

   std::cout << g->toString() << std::endl;

   delete f1;
   delete f2;
}