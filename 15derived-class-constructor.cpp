//deliver class constructor
#include <iostream>
using namespace std;

class A
{protected:
    int adata;
    public:
    A(int a) { adata = a; }
};
class B : public A
{
    int bdata;
    public:
    B(int a, int b) : A(a) { bdata = b; }
    void show_data() {
        cout << "adata = " << adata << endl;
        cout << "bdata = " << bdata << endl;
    }
};
int main()
{
    B b(5, 6);
    b.show_data();
    return 0;
}