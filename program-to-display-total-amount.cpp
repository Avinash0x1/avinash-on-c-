//program to display total amount 
#include <iostream>
using namespace std;

class total {
private:
    float principle, time, rate;
    float findinterest() {
        return principle * time * rate / 100;
    }

public:
    void setdata(float P, float t, float r) {
        principle = P; time = t; rate = r;
    }

    float findtotal() {
        return principle + findinterest();
    }
};

int main() {
    total ta;
    float P, t, r;

    cout << "Enter principle, time and rate: " << endl;
    cin >> P >> t >> r;

    ta.setdata(P, t, r);
    float a = ta.findtotal();
    cout << "total amount= " << a;
    return 0;
}