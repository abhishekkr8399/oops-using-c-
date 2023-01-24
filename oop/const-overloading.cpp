#include <iostream>
using namespace std;
class Box
{
    float length, breadth, height, volume;

public:
    Box()
    {
        length = breadth = height = 0;
    }
    Box(float x)
    {
        length = breadth = height = x;
    }
    Box(float x, float y, float z)
    {
        length = x;
        breadth = y;
        height = z;
    }
    void compute()
    {
        volume = length * breadth * height;
    }
    void display()
    {
        cout << "Volume of the box is " << volume << endl;
    }
};
int main()
{
    Box B1;
    Box B2(5.0);
    Box B3(2.0, 3.0, 5.0);
    B1.compute();
    B2.compute();
    B3.compute();
    B1.display();
    B2.display();
    B3.display();
    return 0;
