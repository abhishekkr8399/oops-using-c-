#include <iostream>
#include <conio.h>
using namespace std;
class student
{
protected:
    int reg_no;
    char name[25];

public:
    void get_data()
    {
        cout << "Enter Register Number : " << endl;
        cin >> reg_no;
        cout << "Enter Name:";
        cin.ignore(1, '\n');
        cin.getline(name, 20);
    }
};
class test : public student
{
protected:
    int marks[6];

public:
    void get_marks()
    {
        cout << "Enter 6 subject marks :\n";
        for (int i = 0; i < 6; i++)
            cin >> marks[i];
    }
};
class result : public test
{
    int total;
    float perc;

public:
    void compute_res()
    {
        for (int i = 0; i < 6; i++)
            total += marks[i];
        perc = total / 6.0;
    }
    void display()
    {
        cout << "\nRegister No. : " << reg_no << endl;
        cout << "Name : " << name << endl;
        cout << "Marks:\n";
        for (int i = 0; i < 6; i++)
            cout << " > Subject " << i + 1 << " : " << marks[i] << endl;
        cout << "Total : " << total << endl;
        cout << "Percentage : " << perc << endl;
        if (perc >= 35)
            cout << "Result = PASS";
        else
            cout << "Result = FAIL";
    }
};
int main()
{
    result R;
    R.get_data();
    R.get_marks();
    R.compute_res();
    R.display();
    return 0;
}
