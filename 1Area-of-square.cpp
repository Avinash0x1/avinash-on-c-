// Program to calculate area of square
#include <iostream>
using namespace std;

int main()
{
    int l, a;
    
    cout << "Enter length: ";
    cin >> l;
    
    a = l * l;
    
    cout << "Area = " << a;  // Fixed: Removed quotes around 'a'
    
    return 0;  // Fixed: Added space between 'return' and '0'
}