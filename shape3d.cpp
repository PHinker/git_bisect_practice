/********************************************************************//**
 * @file
 ***********************************************************************/
#include "shape3d.h"

Shape3d::Shape3d(Point &p, std::string str) : location(p), typeName(str) {}

std::string Shape3d::type() { return typeName ; }

double Shape3d::distance(const Point &p1) const
{
   return sqrt(pow(location.getX() - p1.getX(), 2) + 
               pow(location.getY() - p1.getY(), 2) +
               pow(location.getZ() - p1.getZ(), 2));
}
