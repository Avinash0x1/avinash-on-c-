//program to display class rectangle 
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;  // Data members

public:
    void getdata(int l, int b) {  // Corrected function name and parameters
        length = l;
        breadth = b;
    }

    int findarea() {  // Corrected function name
        return length * breadth;  // Area calculation
    }

    void display() {  // Display function
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
    }
};  // Semicolon after class declaration

int main() {
    Rectangle r;  // Object creation

    r.getdata(10, 5);  // Corrected function call
    int area = r.findarea();  // Corrected function call

    cout << "Area = " << area << endl;
    r.display();  // Display rectangle details

    return 0;
}