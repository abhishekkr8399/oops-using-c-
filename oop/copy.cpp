#include <iostream>
using namespace std;
class copy_constructor
{
    int a, b;

public:
    copy_constructor(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a=" << a << "\tb=" << b << endl;
    }
};
int main()
{
    copy_constructor obj1(10, 20);
    cout << "Contents of Object-1 :\n"
         << endl;
    obj1.display();
    copy_constructor obj2 = obj1;
    cout << "\nContents of Object-2 copied from object-1 :\n";
    obj2.display();
    return 0;
}