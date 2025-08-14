// containership
#include <iostream>
using namespace std;

class employee
{
    int id,salary;
    public:
    void getdata()
    {
        cout << "Enter ID:and salary: ";
        cin >> id  >> salary;
    }
    void display()
    {
        cout << "Emp ID: " << id << " Salary: " << salary << endl;
    }
};
class Company
{
    int cid;
    char cname[20];
    employee e;
public:
    void getdata()
    {
        cout << "Enter Company ID and Name: ";
        cin >> cid >> cname;
        e.getdata();
    }
    void display()
    {
        cout << "Company ID: " << cid << " Company Name: " << cname << endl;
        e.display();
    }
};
int main()
{
    Company c;
    c.getdata();
    c.display();
    cout << "====Company Details:====" << endl;
    return 0;
}