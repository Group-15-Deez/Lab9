// Rowan Froeschner Aidan Militzer George Sprinkle Charles Young Lab 4B CPSC 1021
// This program calculates area based on user choices and inputs using classes.
#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_
#include "Shape.h"
template <typename T>
class Trapezoid : public Shape<T> {
private:
	T base1, base2, height;
public:
    Trapezoid() = default;
    Trapezoid(T base1, T base2, T height); 
    T getArea();

};

template <typename T>
Trapezoid<T>::Trapezoid(T base1, T base2, T height) : Shape<T>{"Trapezoid"}, base1{base1}, base2{base2}, height{height}{}

template <typename T>
T Trapezoid<T>::getArea() {
	return (base1+base2)*.5*height;
}

#endif