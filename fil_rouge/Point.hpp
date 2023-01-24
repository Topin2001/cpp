#ifndef __POINT_HPP__
#define __POINT_HPP__
// c'est comme en C
class Point
{

  static int compteur;
  int x;
  int y;

public:
  Point();
  Point(int, int);
  static Point const ORIGINE;
  inline int getX() const { return x; };
  inline int getY() const { return y; };
  static int getCompteur();
  void setX(int);
  void setY(int);
  void deplacerDe(int, int);
  void deplacerVers(int, int);
};

#endif