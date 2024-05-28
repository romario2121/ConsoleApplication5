#include <iostream>
using namespace std;


class SimpleCircle
{
private:

	double radius;

public:
	SimpleCircle();
	~SimpleCircle();
	void setRadius(double rad);
	double getRadius() const { return radius; }

};

#include <iostream>
using namespace std;

class SimpleCircle 
{
private:
    double Radius;

public:

    SimpleCircle() : Radius(5) {}

 
    ~SimpleCircle() = default;
    void setRadius(double r){}
 
    double getRadius() const { return Radius;}
};

int main() 
{

    SimpleCircle circle;

    cout << "Radius Circle: " << circle.getRadius() << endl;

    return 0;
}


#include <iostream>
using namespace std;

class SimpleCircle
{
private:
    double itsRadius;

public:
   
    SimpleCircle() : itsRadius(5) {}
    SimpleCircle(double radius) 
    {
        if (radius >= 0) 
        {
            itsRadius = radius;
        }
        else
        {
            cout << "Radius cannot be seen!" << endl;
            itsRadius = 0; 
        }
    }

   
    ~SimpleCircle() = default;

    
    void setRadius(double rad) 
    {
        if (rad >= 0) {
            itsRadius = rad;
        }
        else
        {
            cout << "Radius cannot be seen!" << endl;
        }
    }

    
    double getRadius() const { return itsRadius;}
};

int main()
{

    SimpleCircle circle1;
    cout << "Radius circle default: " << circle1.getRadius() << endl;

    SimpleCircle circle2(17.0);
    cout << "Radius circle parameter: " << circle2.getRadius() << endl;

    return 0;
}
