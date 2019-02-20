#!/bin/bash

for mod in $(seq 1 37)
do
   cat modification >> point.cpp
   cat modification >> sphere.cpp
   cat modification >> shape.cpp
   git commit -am"Modification $mod"
done
