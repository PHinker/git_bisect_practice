#!/bin/bash

for mod in $(seq 39 46)
do
   cat modification >> point.cpp
   cat modification >> sphere.cpp
   cat modification >> shape.cpp
   git commit -am"Modification $mod"
done
