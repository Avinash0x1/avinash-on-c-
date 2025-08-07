//program to calculate the average of 5 numbers
#include <iostream>  // Use this instead of iostream.h
using namespace std;

int main()
{
    float x;
    float sum = 0;
    
    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << (i+1) << ": ";
        cin >> x;
        sum += x;
    }
    float avg = sum / 5;
    cout << "Average = " << avg << endl;
    return 0;
}