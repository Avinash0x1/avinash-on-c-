//Program to exchange private value of two classes using friend function
#include <iostream>
using namespace std;
class class2; //
class class1
{
  private:
    int value1;
  public:
    void indata(int a){value1 = a;}
    void display()
    {cout << "Value1: " << value1 << endl;}
    friend void exchange(class1 &, class2 &); //friend function declaration 
};

class class2
{
  private:
    int value2;
  public:
    void indata(int b){value2 = b;}
    void display()
    {cout << "Value2: " << value2 << endl;}
    friend void exchange(class1 &, class2 &); //friend function declaration
};

void exchange(class1 &x, class2 &y)
{ int temp;
    temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}
int main()
{
    class1 c1;
    class2 c2;
    c1.indata(100);
    c2.indata(200);
    cout << "value before exchange" << endl;
    c1.display();
    c2.display();
    exchange(c1, c2);
    cout << "value after exchange" << endl;
    c1.display();
    c2.display();
    return 0;
}