#include <iostream>
using namespace std;

class Shape 
{
public:
    virtual ~Shape() = default; 
    virtual Shape* cop() const = 0; 
};


class Rectangle : public Shape
{
public:
    Rectangle(double width, double height) : width(width), height(height) {}
    Rectangle* cop() const override
    {
        return new Rectangle(*this);
    }

    double getWidth() const 
    {
        return width;
    }

    double getHeight() const {
        return height;
    }

    void setWidth(double width) {
        this->width = width;
    }

    void setHeight(double height) {
        this->height = height;
    }

protected:
    double width;
    double height;
};

class Square : public Rectangle {
public:
    Square(double sideLength) : Rectangle(sideLength, sideLength) {}

    Square* cop() const override {
        return new Square(*this);
    }

  
    double getSideLength() const {
        return width; 
    }

    void setSideLength(double sideLength) {
        width = height = sideLength;
    }
};



void SomeFunction(Shape);//не коректный вызов функции SomeFunction принимает тип Shape по уполчанию,копирует базовый класс,вся работа будет с Shape,но не с Rectangle 
Shape* pRect = new Rectangle;// произойдет утечка памяти,нужно освобдить память с помощью delete pRect;
SomeFunction(*pRect);


class Shape
{
public:
    Shape();
    virtual ~Shape();
    virtual Shape(const Shape&);//конструктор копирования не может быть virtual,конструктор копирования не определен
};
