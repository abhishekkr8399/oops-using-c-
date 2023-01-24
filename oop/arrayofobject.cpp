#include <iostream>
#include <conio.h>
using namespace std;
class employee
{
    int Eno;
    char Ename[25];
    float salary;

public:
    void getdata()
    {
        cout << "Enter employee number:";
        cin >> Eno;
        cout << "Enter employee name:";
        cin.ignore(1, '\n');
        cin.getline(Ename, 20);
        cout << "Enter salaray:";
        cin >> salary;
    }
    void display()
    {
        cout << "Employee Number:" << Eno << endl;
        cout << "Employee Name:" << Ename << endl;
        cout << "Salary:" << salary << endl
             << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the total number of employees:";
    cin >> n;
    employee E[n];
    cout << "Enter employee details:\n";
    for (int i = 0; i < n; i++)
    {
        E[i].getdata();
    }
    clrscr();
    cout << "EMPLOYEE DETAILS:\n";
    for (int i = 0; i < n; i++)
    {
        E[i].display();
    }
    return 0;
}