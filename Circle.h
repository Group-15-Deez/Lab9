// This program calculates area based on user choices and inputs using classes.
#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

template <typename T>
class Circle : public Shape<T> {
    private:
        T radius;
        const double PI = 3.14;
    public:
        Circle() = default;
        Circle(T radius);
        T getArea();
};

template <typename T>
Circle<T>::Circle(T radius) : Shape<T>("Circle"), radius(radius) {}

template <typename T>
T Circle<T>::getArea() {
    return PI * radius * radius;
}

#endif