// This program calculates area based on user choices and inputs using classes.
#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Shape.h"
template <typename T>
class Rectangle : public Shape<T>{
private:
	T length, width;
public:
    Rectangle() = default;
    Rectangle(T length, T width); 
    T getArea();

};
template <typename T>
Rectangle<T>::Rectangle(T length, T width) : Shape<T>{"Rectangle"}, length{length}, width{width} {}

template <typename T>
T Rectangle<T>::getArea() {
	return length*width;
}
#endif