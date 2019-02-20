/********************************************************************//**
 * @file
 ***********************************************************************/
#include "sphere.h"
#include <iostream>
using namespace std;

Sphere::Sphere(Point &p, double r) : Shape3d(p, "Sphere"), radius(r) {}

bool Sphere::contains(const Point &p) const
{
   if (abs(distance(p)) <= radius) return true;
   return false;
}

double Sphere::volume() const
{ 
   return 4.0 / 3.0 * M_PI * pow(radius,3.0);
}

std::vector<Point> Sphere::boundingBox()
{
   std::vector<Point> bb;

   double min_x = location.getX() - radius;
   double max_x = location.getX() + radius;
   double min_y = location.getY() - radius;
   double max_y = location.getY() + radius;
   double min_z = location.getZ() - radius;
   double max_z = location.getZ() + radius;

   bb.push_back(Point(min_x, min_y, min_z));
   bb.push_back(Point(max_x, min_y, min_z));
   bb.push_back(Point(min_x, max_y, min_z));
   bb.push_back(Point(max_x, max_y, min_z));
   bb.push_back(Point(min_x, min_y, max_z));
   bb.push_back(Point(max_x, min_y, max_z));
   bb.push_back(Point(min_x, max_y, max_z));
   bb.push_back(Point(max_x, max_y, max_z));

   return bb;
}

// Modification

// Modification

// Modification

// Modification

// Modification

// Modification

// Modification

// Modification

// Modification

// Modification

// Modification

// Modification

// Modification

// Modification

// Modification

// Modification
