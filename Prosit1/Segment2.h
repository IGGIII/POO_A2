#pragma once

#include "Point2.h"
#include "Vector2.h"
#include <iostream>

enum IntersectionStatus {
  POINT,
  COLINEAR_INTERSECTING,
  COLINEAR_NON_INTERSECTING,
  PARALLEL_NON_INTERSECTING,
  NON_INTERSECTING
};

class Segment2 {
private:
    Point2 origin;
    Vector2 direction;
public:
  Segment2();  // segment nul (origin=(0,0), direction=(0,0))
  Segment2(Point2 origin, Vector2 direction);
  
  Point2 getOrigin();
  Vector2 getDirection();

  void setOrigin(Point2 o);
  void setDirection(Vector2 d);

  float length();
  IntersectionStatus intersect(Segment2 r, Point2 &p);
};

/*
❌ Dans le .h → pas de Segment2::
✅ Dans le .cpp → oui, il faut Segment2::
*/