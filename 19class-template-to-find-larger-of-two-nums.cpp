//class template to find larger of two numbers
#include <iostream>
using namespace std;

template <class T>
class mypair
{
    T a, b;
public:
    mypair(T first, T second) {
        a = first; b = second;
}
    T getmax() {
        if (a > b) return a;
        else return b;
    }
};
int main() {
    mypair<int> obj(100, 75);
    cout << "larger = " << obj.getmax() << endl;
    mypair<double> obj2(90.80,98.56);
    cout << "larger = " << obj2.getmax() << endl;
    return 0;
}