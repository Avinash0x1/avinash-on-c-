// Program to calculate average age of n student
// Using DMA
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many students?" << endl;
    cin >> n;

    int *age = new int[n];
    int *original_age = age;  // Store original pointer
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter age " << endl;
        cin >> *age;
        sum += *age;
        age++;
    }

    float avg = float(sum)/n;
    cout << "Average age = " << avg;

    delete[] original_age;  // Delete using the original pointer
    return 0;
}