//program to overloading binary plus operator
#include <iostream>
using namespace std;
class distance1 {
private:
    int feet;
    int inches;  // Fixed: consistent naming

public:
    void getdata() {
        cout << "Enter distance in feet and inches: " << endl;
        cin >> feet >> inches;
    }
    
    void display() {
        cout << "c" << feet << " feet and " << inches << " inches" << endl;
    }
    
    distance1 operator+(distance1 &d) {
        distance1 t;
        t.feet = feet + d.feet;
        t.inches = inches + d.inches;
        t.feet = t.feet + t.inches / 12; // convert inches to feet
        t.inches = t.inches % 12; // remaining inches
        return t;
    }
};
int main()
{
    distance1 d1, d2, d3;
    d1.getdata();
    d2.getdata();
    d3 = d1 + d2; // using overloaded operator
    cout << "d1: "; d1.display();
    cout << "d2: "; d2.display();
    cout << "d3: "; d3.display();
    return 0;
}