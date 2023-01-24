#include <iostream>
#include <iomanip>
using namespace std;
class rectangle1
{
protected:
    float l, b;

public:
    rectangle1(float x, float y)
    {
        l = x;
        b = y;
        cout << "Rectangle-1 initialized.\n";
    }
    void show()
    {
        cout << "Rectangle 1 : Length=" << l << " Breadth=" << b << endl;
    }
};
class rectangle2
{
protected:
    float l, b;

public:
    rectangle2(float x, float y)
    {
        l = x;
        b = y;
        cout << "Rectangle-2 initialized.\n";
    }
    void show()
    {
        cout << "Rectangle 2 : Length=" << l << " Breadth=" << b << endl;
    }
};
class Area : public rectangle1, public rectangle2
{
    float area1, area2, area;

public:
    Area(float a, float p, float q, float r, float s) : rectangle1(p, q), rectangle2(r, s)
    {
        area = area1 = area2 = a;
        cout << "Area1,area2 and area pre-initialized to " << a << endl;
    }
    void compute()
    {
        area1 = rectangle1::l * rectangle1::b;
        area2 = rectangle2::l * rectangle2::b;
        area = area1 + area2;
    }
    void show()
    {
        rectangle1::show();
        rectangle2::show();
        cout << "Area of rectangle-1:" << area1 << endl;
        cout << "Area of rectangle-2:" << area2 << endl;
        cout << "Total Area:" << area << endl;
    }
};
int main()
{
    Area A(0, 3.0, 2.0, 5.5, 2.5);
    A.compute();
    A.show();
    return 0;
}
