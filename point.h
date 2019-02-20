/********************************************************************//**
 * @file
 ***********************************************************************/
#ifndef __point__
#define __point__

#include <iostream>

/********************************************************************//**
 * @class point
 **********************************************************************/
class Point
{
   double x_loc, y_loc, z_loc;
public:
   Point(double x = 0.0, double y = 0.0, double z = 0.0);
   Point(const Point &);

   double getX() const;
   double getY() const;
   double getZ() const;

   Point operator-(const Point&) const;
   friend std::ostream& operator<<(std::ostream&, const Point&);
};
#endif
