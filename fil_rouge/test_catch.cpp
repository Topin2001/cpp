#include <iostream>
#include <string>
#include "catch.hpp"
#include "Objet.hpp"


TEST_CASE("Instanciation", "[Point]") {
  Point p1;
  REQUIRE(p1.getX() == 0);
  REQUIRE(p1.getY() == 0);
  
  p1.setX(11);
  p1.setY(21);

  REQUIRE(p1.getX() == 11);
  REQUIRE(p1.getY() == 21);

  Point p2(12, 22);

  REQUIRE(p2.getX() == 12);
  REQUIRE(p2.getY() ==  22);
}

TEST_CASE("Origine", "[Point]") {
  REQUIRE(Point::ORIGINE.getX() == 0);
  REQUIRE(Point::ORIGINE.getY() == 0);
}