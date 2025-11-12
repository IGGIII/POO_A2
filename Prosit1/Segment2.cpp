// Segment2.cpp
#include "Segment2.h"
#include <cmath>
#include <iostream>

// Constructeurs
Segment2::Segment2() : origin(Point2(0,0)), direction(Vector2(0,0)) {}

Segment2::Segment2(Point2 origin, Vector2 direction)
    : origin(origin), direction(direction) {}

// Getters
Point2 Segment2::getOrigin() { return origin; }
Vector2 Segment2::getDirection() { return direction; }

// Setters
void Segment2::setOrigin(Point2 o) { origin = o; }
void Segment2::setDirection(Vector2 d) { direction = d; }

// Longueur du segment (norme du vecteur direction)
float Segment2::length() {
    return direction.norm();
}

// Intersect : reprend la logique de ton Segment.c mais en C++
IntersectionStatus Segment2::intersect(Segment2 r, Point2 &p) {
    Point2 oa = this->origin;
    Point2 ob = r.getOrigin();
    Vector2 da = this->direction;
    Vector2 db = r.getDirection();

    // dc = ob - oa  -> on le calcule en tant que Vector2
    Vector2 dc(ob.getX() - oa.getX(), ob.getY() - oa.getY());

    IntersectionStatus status = NON_INTERSECTING;

    float det = da.cross(db); // cross produit scalaire en 2D (da x db)

    if (det != 0.0f) {
        float u = (dc.cross(db)) / det;
        float v = (dc.cross(da)) / det;
        if ((u >= 0.0f && u <= 1.0f) && (v >= 0.0f && v <= 1.0f)) {
            // point d'intersection = oa + da * u
            Vector2 tmp = da.dot_scalar(u);              // Vector2
            Point2 tmpP(tmp.getX(), tmp.getY());        // convertir en Point2 pour add_Point
            p = oa.add_Point(tmpP);
            status = POINT;
        } else {
            status = NON_INTERSECTING;
        }
    } else {
        // si det == 0 alors segments parallèles ou colinéaires
        float st = dc.cross(da);
        if (det == 0.0f && st == 0.0f) {
            // collinear : vérifier recouvrement
            float pj = da.dot(da); // da ⋅ da
            float d1 = (dc.dot(da)) / pj;
            float d2 = d1 + (db.dot(da)) / pj;

            if (d1 >= 0.0f && d1 <= 1.0f) {
                p = ob;
                status = COLINEAR_INTERSECTING;
            } else if (d2 >= 0.0f && d2 <= 1.0f) {
                // point ob + db
                Point2 tmpP(ob.getX() + db.getX(), ob.getY() + db.getY());
                p = tmpP;
                status = COLINEAR_INTERSECTING;
            } else {
                status = COLINEAR_NON_INTERSECTING;
            }
        } else if (det == 0.0f && st != 0.0f) {
            status = PARALLEL_NON_INTERSECTING;
        }
    }

    return status;
}
