#include <iostream>
using namespace std;
class Volume
{
    float v;

public:
    Volume()
    {
        v = 0.0;
    }
    void volume(float x)
    {
        v = (x * x * x);
    }
    void volume(float x, float y)
    {
        v = 3.142 * x * x * y;
    }
    void volume(float x, float y, float z)
    {
        v = x * y * z;
    }
    void display()
    {
        cout << v << endl;
    }
};
int main()
{
    int ch;
    Volume V;
    cout << "Enter your choice\n1.Volume of Cube\n2.Volume of cylinder\n3.Volume of cuboid\n";
    cin >> ch;
    switch (ch)
    {
    case 1:
        float x;
        cout << "Enter side of cube:";
        cin >> x;
        V.volume(x);
        cout << "Volume of cube is ";
        V.display();
        break;
    case 2:
    {
        float x, y;
        cout << "Enter radius:";
        cin >> x;
        cout << "Enter height:";
        cin >> y;
        V.volume(x, y);
        cout << "Volume of cylinder is ";
        V.display();
        break;
    }
    case 3:
    {
        float x, y, z;
        cout << "Enter length:";
        cin >> x;
        cout << "Enter breadth:";
        cin >> y;
        cout << "Enter height:";
        cin >> z;
        V.volume(x, y, z);
        cout << "Volume of cuboid is ";
        V.display();
        break;
    }
    default:
        cout << "Invalid choice.";
    }
    return 0;
}
