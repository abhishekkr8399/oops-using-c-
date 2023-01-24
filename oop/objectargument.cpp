#include <iostream>
using namespace std;
class time
{
    int hours, minutes;

public:
    void get_time()
    {
        cout << "Enter hours:";
        cin >> hours;
        cout << "Enter Minutes:";
        cin >> minutes;
        cout << endl;
    }
    void show_time()
    {
        cout << hours << "hours " << minutes << "minutes" << endl;
    }
    friend void total_time(time, time);
};
void total_time(time ob1, time ob2)
{
    int h, m;
    cout << "Time 1 : ";
    ob1.show_time();
    cout << "Time 2 : ";
    ob2.show_time();
    m = ob1.minutes + ob2.minutes;
    h = ob1.hours + ob2.hours;
    if (m >= 60)
    {
        h = h + (m / 60);
        m = m % 60;
    }
    cout << "Total time : " << h << "hours " << m << "minutes" << endl;
}
int main()
{
    time t1, t2;
    t1.get_time();
    t2.get_time();
    total_time(t1, t2);
    return 0;
}