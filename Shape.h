#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
using namespace std;

template <typename T>
class Shape 
{
    private:
        string name;
    public:
        Shape() = default;
        Shape(string name) {
            this->name = name;
        }
        virtual string printName() final {
            return name;
        }
        virtual T getArea() = 0;
};

#endif