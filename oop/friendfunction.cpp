#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    void get_a()
    {
        cout << "Enter the value of a:";
        cin >> a;
    }
    friend int max(A, B);
};
class B
{
    int b;

public:
    void get_b()
    {
        cout << "Enter the value of b:";
        cin >> b;
    }
    friend int max(A, B);
};
int max(A ob1, B ob2)
{
    if (ob1.a > ob2.b)
        return ob1.a;
    else
        return ob2.b;
}
int main()
{
    int m;
    A ob1;
    B ob2;
    ob1.get_a();
    ob2.get_b();
    m = max(ob1, ob2);
    cout << "The maximum value is " << m << endl;
    return 0;
}
