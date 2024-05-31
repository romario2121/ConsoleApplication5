include <iostream>

class SimpleCircle 
{
private:
    int itsRadius;

public:
    SimpleCircle(int rad = 0) : itsRadius (rad) {}
    SimpleCircle& operator++() 
    {
        itsRadius++;
        return *this;
    }

    SimpleCircle operator++(int) 
    {
        SimpleCircle temp = *this;
        itsRadius++;
        return temp;
    }

    int getRadius() const
    {
        return itsRadius;
    }
};

///////////////////////////////////////////////////////////////////
#include <iostream>

class SimpleCircle 
{
private:
    int* itsRadius;

public:
    SimpleCircle(int rad = 0)
    {
        itsRadius = new int(rad);
    }

  
    SimpleCircle(const SimpleCircle& other)
    {
        itsRadius = new int(*other.itsRadius);
    }
    ~SimpleCircle() {
        delete itsRadius;
    }

    
    SimpleCircle& operator=(const SimpleCircle& other)
    {
        if (this != &other) {
            *itsRadius = *other.itsRadius;
        }
        return *this;
    }

   
    SimpleCircle& operator++()
    {
        ++(*itsRadius);
        return *this;
    }

    SimpleCircle operator++(int) 
    {
        SimpleCircle temp(*this);
        ++(*itsRadius);
        return temp;
    }

    int getRadius() const 
    {
        return *itsRadius;
    }
};

/////////////////////////////////////////////////////////////////////
#include <iostream>

class SimpleCircle
{
private:
    int* itsRadius;

public:
    
    SimpleCircle(int rad = 0) : itsRadius(new int(rad)) {}

    SimpleCircle(const SimpleCircle& other) : itsRadius(new int(*other.itsRadius)) {}
    ~SimpleCircle() 
    {
        delete itsRadius;
    }

    SimpleCircle& operator=(const SimpleCircle& other)
    {
        if (this != &other) {
            *itsRadius = *other.itsRadius;
        }
        return *this;
    }

    SimpleCircle& operator++() 
    {
        ++(*itsRadius);
        return *this;
    }

   
    SimpleCircle operator++(int)
    {
        SimpleCircle temp(*this);
        ++(*itsRadius);
        return temp;
    }

    int getRadius() const
    {
        return *itsRadius;
    }
};

/////////////////////////////////////////////////////////////////////////////////
#include <iostream>

class SimpleCircle 
{
private:
    int* itsRadius;

public:
  
    SimpleCircle(int r = 0) : itsRadius(new int(r)) {}

   
    SimpleCircle(const SimpleCircle& other) : itsRadius(new int(*other.itsRadius)) {}
    ~SimpleCircle()
    {
        delete itsRadius;
    }

    SimpleCircle& operator=(const SimpleCircle& other) 
    {
        if (this != &other) {
            *itsRadius = *other.itsRadius;
        }
        return *this;
    }

   
    SimpleCircle& operator++() 
    {
        ++(*itsRadius);
        return *this;
    }

    SimpleCircle operator++(int) 
    {
        SimpleCircle temp(*this);
        ++(*itsRadius);
        return temp;
    }

    int getRadius() const
    {
        return *itsRadius;
    }
};

//////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
class SimpleCircle 
{
private:
    int radius;

public:
    
    SimpleCircle(int rad = 0) : radius(rad) {}

    
    SimpleCircle& operator++() 
    {
        ++radius;
        return *this;
    }

   
    SimpleCircle operator++(int)
    {
        SimpleCircle temp(*this);
        ++radius;
        return temp;
    }

    int getRadius() const
    {
        return radius;
    }
};

int main() {
    
    SimpleCircle circle1;
    SimpleCircle circle2(9); 

    ++circle1;
    circle2++;
    cout << "Object value circle1: " << circle1.getRadius() << endl;
    cout << "Object value circle2: " << circle2.getRadius() << endl;

    circle1 = circle2;
    cout << "After/Before circle2 ... circle1:" << endl;
    cout << "Object value circle1: " << circle1.getRadius() << endl;
    cout << "Object value circle2: " << circle2.getRadius() << endl;

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////

SQUARE SQUARE::operator=(const SQUARE &rhs). Тип который возвращает
(SQUARE), должен записан только в одном значении - Square Square::operator  = (const Square &rhs).


SQUARE SQUARE::operator=(const SQUARE& rhs)/
{
    itsSide = new int;
    *itsSide = rhs.GetSide();
    return *this:// ";"
}


////////////////////////////////////////////////////////////////////////
VeryShort VeryShort::operator+(const VeryShort& rhs)
{
    itsVal += rhs.GetItsVal();//Оператор +  добавления объектов должен возвращать новый объект, представляющий сумму двух операндов.
    return *this;
}

#include <iostream>

class Shape
{
public:
    virtual void draw() const = 0;
    virtual double area() const = 0;
};
/// ////////////

class Rectangle : public Shape 
{
protected:
    double width;
    double height;

public:
    Rectangle(double width = 0, double height = 0) : width(width), height(height) {}

    void draw() const override {}
   
  double area() const override 
    {
        return width * height;
    }
};

class Square : public Rectangle
{
public:
    Square(double side) : Rectangle(side, side) {}

    void draw() const override {}
};

///////////////////////////

class Square : public Rectangle
{
public:
   
  Square(double side) : Rectangle(side, side) {}

};
