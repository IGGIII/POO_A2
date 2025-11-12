//#include <cassert>
#include <iostream>
#include <math.h>


#include "Point2.h"
#include "Vector2.h"
#include "Segment2.h"

using namespace std;


//test()
int main() {
    Point2 A(2, 3);
    Point2 B(1, 4);
    Point2 C = A.add_Point(B);
    Point2 intersection;

    Vector2 v1(8,1);
    Vector2 AB(B.getX() - A.getX(), B.getY() - A.getY());

    Segment2 s1(A, AB);
    Segment2 s2(C, v1);

    IntersectionStatus status = s1.intersect(s2, intersection);
    

    float variab = 3;

    A.affichage();
    B.affichage();
    C.affichage();
    cout << v1.norm() <<endl;
    cout << v1.cross(AB) << endl;
    cout << v1.dot(AB) << endl;
    cout << "Résultat de l'intersection : ";
    Vector2 tmp = v1.dot_scalar(variab);
    cout << "(" << tmp.getX() << ", " << tmp.getY() << ")" << endl;
    
    Vector2 neg = v1.negate();
    cout << "(" << neg.getX() << ", " << neg.getY() << ")" << endl;


        switch (status) {
        case POINT:
            cout << "Les segments se coupent en un point." << endl;
            intersection.affichage();
            break;
        case COLINEAR_INTERSECTING:
            cout << "Les segments sont colinéaires et se croisent." << endl;
            break;
        case COLINEAR_NON_INTERSECTING:
            cout << "Les segments sont colinéaires mais disjoints." << endl;
            break;
        case PARALLEL_NON_INTERSECTING:
            cout << "Les segments sont parallèles et ne se coupent pas." << endl;
            break;
        case NON_INTERSECTING:
            cout << "Les segments ne se croisent pas." << endl;
            break;
    }

    cout << "Longueur du segment 1 : " << s1.length() << endl;
    cout << "Longueur du segment 2 : " << s2.length() << endl;
    return 0;
}