//single inheritance : public inheritance
#include <iostream>
using namespace std;

class B {
private:
    int a, b;  // Keep only one declaration of b
    
public:
    void get_ab() {
        cout << "Enter value for a and b: ";
        cin >> a >> b;
    }
    
    int get_a(void) { return a; }
    int get_b(void) { return b; }  // Add getter for b
    void show_a(void) { cout << "a = " << a << endl; }
};
class D : public B {  // Changed to public inheritance
private:
    int c;
    
public:
    void mul(void) {
        get_ab(); // calling base class method
        c = get_b() * get_a();  // Use getter methods instead of direct access
    }
    
    void display(void) {
        show_a(); // calling base class method
        cout << "b = " << get_b() << endl;  // Use getter method
        cout << "c = " << c << endl;
    }
};
int main() {
    D d;
    
    cout << "Single Inheritance Demo (Public)" << endl;
    
    cout << "\nFirst calculation:" << endl;
    d.mul();
    d.display();
    
    cout << "\nSecond calculation:" << endl;
    d.mul();
    d.display();
    
    // Demonstrating public inheritance - can access base class methods directly
    cout << "\nDirect access to base class method (public inheritance):" << endl;
    d.show_a();
    
    return 0;
}