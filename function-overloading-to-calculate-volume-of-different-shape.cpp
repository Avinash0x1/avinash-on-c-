//function overloading to calculate volume of different shape
#include <iostream>
using namespace std;

int volume(int);
double volume(double, int);
long volume(long, int, int);

int main()
{
    cout << "volume of cube = " << volume(10) << endl;
    cout << "volume of cylinder = " << volume(4.5, 10) << endl;
    cout << "volume of box = " << volume(100, 75, 15) << endl;
    
    return 0;
}

int volume(int l)
{
    return l * l * l;
}

double volume(double r, int h)
{
    return 3.14 * r * r * h;
}

long volume(long l, int b, int h)
{
    return l * b * h;
}