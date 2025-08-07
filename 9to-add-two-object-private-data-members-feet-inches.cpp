// program to add two objects and having private data members,feet and inches
#include <iostream>
using namespace std;
class Distance1 {
private:
    int feet;
    int inches;
    
public:
    // Constructor to initialize values
    Distance1() {
        feet = 0;
        inches = 0;
    }
    
    // Constructor with parameters
    Distance1(int f, int i) {
        feet = f;
        inches = i;
        normalizeDistance(); // Ensure inches are in valid range
    }
    
    void getdata(int f, int i) {
        feet = f;
        inches = i;
    }
    void showdata() {
        cout << "Feet: " << feet << ", Inches: " << inches << endl;
    }
    void adddistance(Distance1 d1, Distance1 d2) {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        normalizeDistance(); // Handle overflow
    }
    
private:
    // Helper function to normalize inches (ensure 0-11 range)
    void normalizeDistance() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
        if (inches < 0) {
            feet -= 1;
            inches += 12;
        }
    }
};

int main() {
    Distance1 d1, d2, d3;
    
    cout << "=== Distance Addition Program ===" << endl;
    
    // Method 1: Using predefined values
    cout << "\n--- Using predefined values ---" << endl;
    cout << "Distance 1: ";
    d1.getdata(7, 8);
    d1.showdata();
    
    cout << "Distance 2: ";
    d2.getdata(9, 7);
    d2.showdata();
    
    d3.adddistance(d1, d2);
    cout << "Sum: ";
    d3.showdata();
    
    return 0;
}
