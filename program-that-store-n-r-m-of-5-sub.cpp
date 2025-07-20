//program that store name ,roll and make of 5 subjects
#include <iostream>
using namespace std;

class student {
private:
    string name;
    int roll;
    float marks[5];
public:
    void getdata();
    void showdata();
};

void student::getdata() {
    cout << "enter name: ";
    cin >> name;
    cout << "Enter roll no:";
    cin >> roll;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks";
        cin >> marks[i];
    }
}

void student::showdata() {
    cout << "Name = " << name << endl;
    cout << "Roll No = " << roll << endl;
    cout << "Marks in 5 subject=";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << "\t";
    }
}

int main() {
    student s;
    s.getdata();
    cout << "students Detail: " << endl;
    s.showdata();
    return 0;
}