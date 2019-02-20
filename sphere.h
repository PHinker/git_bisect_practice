/********************************************************************//**
 * @file
 ***********************************************************************/
#ifndef SPHERE_H
#define SPHERE_H
#include "shape3d.h"
#include "point.h"

/********************************************************************//**
 * @class Sphere
 **********************************************************************/
class Sphere : public Shape3d
{
   double radius;
public:
   Sphere(Point&, double r=1.0);
   bool contains(const Point&) const;
   double volume() const;
   std::vector<Point> boundingBox();

   friend std::ostream& operator<<(std::ostream&, const Sphere&);
};
#endif
