#include <iostream>
#include <string>
#include "catch.hpp"
#include "Objet.hpp"


TEST_CASE("Instanciation1", "[Forme]") {
  Forme f1;
  REQUIRE(f1.getPoint().getX() == 0);
  REQUIRE(f1.getPoint().getY() == 0);
  REQUIRE(f1.getCouleur() ==  COULEURS::BLEU);
}

TEST_CASE("Instanciation2", "[Forme]") {
  Forme f2;
  f2.setCouleur(COULEURS::VERT);
  REQUIRE (f2.getPoint().getX() == 15);
  REQUIRE (f2.getPoint().getY() == 25);
  REQUIRE (f2.getCouleur() == COULEURS::VERT);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::BLEU);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::ROUGE);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::JAUNE);
}

TEST_CASE("Instanciation3", "[Forme]") {
  // SI LE TEST NE MARCHE PAS, VOUS AVEZ UNE ERREUR DANS VOTRE CODE
  Forme f2(Point(10,20), COULEURS::ROUGE);
  REQUIRE (f2.getPoint().getX() == 10);
  REQUIRE (f2.getPoint().getY() == 20);
  REQUIRE (f2.getCouleur() == COULEURS::ROUGE);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::BLEU);
}