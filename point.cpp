/********************************************************************//**
 * @file
 ***********************************************************************/
#include "point.h"

Point::Point(double x, double y, double z) : x_loc(x), y_loc(y), z_loc(z) {}

Point::Point(const Point &p) : x_loc(p.x_loc), y_loc(p.y_loc), z_loc(p.z_loc){}

double Point::getX() const { return x_loc ; }
double Point::getY() const { return y_loc ; }
double Point::getZ() const { return z_loc ; }

Point Point::operator- (const Point& rhs) const
{
      Point result(x_loc - rhs.x_loc,
                   y_loc - rhs.y_loc,
                   z_loc - rhs.z_loc);

      return result;
}
