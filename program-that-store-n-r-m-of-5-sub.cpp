//program that store name ,roll and marks of 5 subjects
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
    cout << "Enter name: ";
    getline(cin, name);  // Use getline to handle names with spaces
    cout << "Enter roll no: ";
    cin >> roll;
    cout << "Enter marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
    }
}

void student::showdata() {
    cout << "Name = " << name << endl;
    cout << "Roll No = " << roll << endl;
    cout << "Marks in 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cout << marks[i];
        if (i < 4) cout << ", ";  // Add comma separator except for last mark
    }
    cout << endl;  // Add newline at the end
}

int main() {
    student s;
    cout << "=== Student Information System ===" << endl;
    s.getdata();
    cout << "\n=== Student Details ===" << endl;
    s.showdata();
    return 0;
}