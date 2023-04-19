#include <iostream>
#include <iomanip>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include <vector>
using namespace std;
int main()
{
    Circle circ(2.0);
    Square sqr(2.0);
    Rectangle rec(2.5, 3.0);
    Trapezoid trap(2.5, 3.5, 4.0);
    Circle circ2(2);
    Square sqr2(2);
    Rectangle rec2(2, 3);
    Trapezoid trap2(2, 6, 5);
    vector<Shape<double>*> shapeVect {&circ, &sqr, &rec, &trap};
    vector<Shape<int>*> shapeVect2 {&circ2, &sqr2, &rec2, &trap2};
    for (auto x : shapeVect) {
        cout << "Area of " << x->printName() << " is: " << fixed << setprecision(1) << x->getArea() << "\n";
    }
    for (auto x : shapeVect2) {
        cout << "Area of " << x->printName() << " is: " << x->getArea() << "\n";
    }
}