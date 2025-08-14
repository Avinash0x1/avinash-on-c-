//abstract base classes  and virtual functions
#include <iostream>
using namespace std;

class polygon 
{
    protected:
        int width, height;
    public:
         void set_values(int a, int b); // pure virtual function
         {
            width = a;
            height = b;
         }
         virtual int area() = 0; // pure virtual function
};
class rectangle: public polygon 
{
    public:
        int area(void) 
        {return width * height;}
};
class triangle: public polygon 
{
    public:
        int area(void) {return (width * height)/2;}
};
int main() 
{
    rectangle rect;
    triangle trgl;
    
    polygon *p1 = &rect; // base class pointer to derived class object
    polygon *p2 = &trgl; // base class pointer to another derived class object
    
    p1->set_values(4, 5);
    cout << "Area of rectangle: " << p1->area() << endl;
    p2->set_values(4, 5);
    cout << "Area of triangle: " << p2->area() << endl;
    return 0;
}