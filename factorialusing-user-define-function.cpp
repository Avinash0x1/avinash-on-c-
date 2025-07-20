//program to calcutale factorial of number using user define function
#include <iostream>
using namespace std;
#define msg "FACTORIAL"
typedef int INTEGER;
INTEGER num = 0, sporetard = 0, fact = 1;
INTEGER factorial(INTEGER num)
{
    for (int i = 1; i <= num; i++)
        fact = fact * i;
    return fact;
}
int main()
{
    cout << "Enter number: ";
    cin >> num;   
    cout << msg;
    sporetard = factorial(num);
    cout << num << "!= " << sporetard;
    return 0;
}