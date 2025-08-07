//object to object conversion (using source class)
#include <iostream>
using namespace std;

class distance {
private:
    int feet;
    int inch;
    
public:
    // Default constructor
    distance() {
        feet = 0; 
        inch = 0;
    }
    
    // Parameterized constructor
    distance(int f, int i) {
        feet = f; 
        inch = i;
    }
    
    void display() {
        cout << feet << " ft " << inch << " in" << endl;
    }
};
class dist {
private:
    int meter, centimeter;
    
public:
    dist(int m, int c) { 
        meter = m; 
        centimeter = c; 
    }
    
    // Conversion operator to convert dist to distance
    operator ::distance() {
        int f, i;
        f = meter * 3.3;           // Convert meters to feet (approximate)
        i = centimeter * 0.4;      // Convert centimeters to inches (approximate)
        f = f + i / 12;            // Add extra feet from inches
        i = i % 12;                // Remaining inches
        return ::distance(f, i);
    }
};
int main() {
    ::distance d1;              // Use :: to specify our distance class
    ::distance d2(4, 50);       // Create distance with 4 feet, 50 inches
    
    cout << "Initial distances:" << endl;
    cout << "d1: "; d1.display();
    cout << "d2: "; d2.display();
    
    d1 = d2; // object to object assignment
    cout << "\nAfter assignment d1 = d2:" << endl;
    cout << "d1: "; d1.display();
    
    // Demonstrating conversion from dist to distance
    dist metric_dist(3, 150);   // 3 meters, 150 centimeters
    ::distance converted = metric_dist;  // Automatic conversion
    cout << "\nConverted from metric (3m, 150cm) to imperial:" << endl;
    cout << "Result: "; converted.display();
    
    return 0;
}
 