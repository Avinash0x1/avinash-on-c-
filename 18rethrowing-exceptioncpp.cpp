//Rethrowing exceptions
#include <iostream>
using namespace std;

void divide(double x, double y) {
    try {
        if (y == 0)
            throw y;
        else
        cout << "division = " << x / y << endl;
    }
    catch (double)
    {
        cout << "Caught double inside function\n ";
        throw;
    }
    cout << "end of function\n\n";
    }
    int main() {
    cout << "inside main\n";
    try {
        divide(10.5,2.0);
    divide(20.0,0.0);
    }
    catch (double)
    {
        cout << "Caught double inside main\n ";
    }
    cout << "end of main\n";
    return 0;
}