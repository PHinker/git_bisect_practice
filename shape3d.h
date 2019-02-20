/********************************************************************//**
 * @file
 ***********************************************************************/
#ifndef SHAPE3D_H
#define SHAPE3D_H

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <vector>
#include "point.h"

/********************************************************************//**
 * @class Shape3d
 **********************************************************************/
class Shape3d
{
protected:
   Point location;
   std::string typeName;
public:
   Shape3d(Point &l, std::string);
   virtual bool contains(const Point&) const = 0;
   virtual double volume() const = 0;
   virtual std::vector<Point> boundingBox() = 0;
   std::string type();
   double distance(const Point &) const;

   friend std::ostream& operator<<(std::ostream& os, const Shape3d *obj);
};
#endif
