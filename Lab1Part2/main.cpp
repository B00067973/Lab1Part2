#include <iostream>

using namespace std;

// Base class
class Shape
{
    public:
 // pure virtual function providing interface framework.
 virtual int getArea() = 0;

 void setWidth(int w)
 {

    width = w;

 }

 void setHeight(int h)
 {

    height = h;

 }

 void setRadius(int r)
 {

     radius = r;

 }

protected:
 int width;
 int height;
 int radius;
};

class Triangle: public Shape
{

public:
 int getArea()
 {

    return (width * height)/2;

 }
};

class Rectangle: public Shape
{

public:
 int getArea()
 {

    return (width * height);

 }
};

class Circle: public Shape
{
public:
    int getArea()
    {

      return (3.141592653 * (radius*radius));

    }
};

int main(void)
{

 Triangle Tri;
 Rectangle Rect;
 Circle Circ;
 Tri.setWidth(5);
 Tri.setHeight(7);
 Rect.setHeight(4);
 Rect.setWidth(6);
 Circ.setRadius(5);

 // Print the area of the object.
 cout << "Total Triangle area: " << Tri.getArea() << endl;
 cout << "Total Rectangle Area: "<< Rect.getArea() <<endl;
 cout << "Total Circle Area: "<< Circ.getArea() <<endl;
 return 0;

}
