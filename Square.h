// This program calculates area based on user choices and inputs using classes.
#ifndef SQUARE_H_
#define SQUARE_H_
#include "Shape.h"
template <typename T>
class Square : public Shape<T>{
private:
	T side;
public:
    Square() = default;
    Square(T side); 
    T getArea();
};

template<typename T>
Square<T>::Square(T side) : Shape<T>{"Square"}, side{side}{}

template<typename T>
T Square<T>::getArea() {
	return side*side;
}

#endif