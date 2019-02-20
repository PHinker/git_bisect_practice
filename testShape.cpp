#include "catch.hpp"
#include "sphere.h"

TEST_CASE("Make sure containment works")
{
   Point p(0.0, 0.0, 0.0);
   Point q(0.5, 0.5, 0.5);
   Sphere sphere(p, 1.0);

   REQUIRE(sphere.contains(q));
}
