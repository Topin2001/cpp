#ifndef __POINT_HPP__
#define __POINT_HPP__

class Point
{

  static int compteur;
  int x;
  int y;

public:
  Point();
  Point(int, int);

  int getX();
  int getY();
  static int getCompteur();
  void setX(int);
  void setY(int);
  void deplacerDe(int, int);
  void deplacerVers(int, int);
};



#endif