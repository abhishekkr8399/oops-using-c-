#include <iostream>
using namespace std;
class student
{
protected:
    int reg_no;
    char name[25];

public:
    void get_student()
    {
        cout << "Enter Register Number:";
        cin >> reg_no;
        cout << "Enter name:";
        cin.ignore(1, '\n');
        cin.getline(name, 20);
    }
};
class test : public student
{
protected:
    int m[6];

public:
    void get_marks()
    {
        cout << "Enter 6 subject marks:\n";
        for (int i = 0; i < 6; i++)
        {
            cin >> m[i];
        }
    }
};
class sports
{
protected:
    int sports_marks;

public:
    void get_sports_mark()
    {
        cout << "Enter sports marks of student:";
        cin >> sports_marks;
    }
};
class result : public test, public sports
{
    int total;
    float perc;

public:
    result()
    {
        total = 0;
        perc = 0.0;
    }
    void compute()
    {
        for (int i = 0; i < 6; i++)
            total += m[i];
        total = total + sports_marks;
        perc = total / 6.0;
    }
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Registration No:" << reg_no << endl;
        cout << "Subject Marks:\n";
        for (int i = 0; i < 6; i++)
        {
            cout << " >Subject " << i + 1 << ":" << m[i] << endl;
        }
        cout << "Sports Marks:" << sports_marks << endl;
        cout << "Total:" << total << endl;
        cout << "Percentage:" << perc << endl;
        if (perc >= 35)
            cout << "Result=PASS";
        else
            cout << "Result=FAIL";
    }
};
int main()
{
    result R;
    R.get_student();
    R.get_marks();
    R.get_sports_mark();
    R.compute();
    R.display();
    return 0;
}