#include <iostream>
using namespace std;
class complex_1
{
protected:
    int real1, img1;

public:
    void get_complex_1()
    {
        cout << "Enter Complex No-1:" << endl;
        cout << "Enter real part : ";
        cin >> real1;
        cout << "Enter imaginary part : ";
        cin >> img1;
    }
    void display()
    {
        cout << "Complex No-1 : " << real1;
        if (img1 > 0)
            cout << "+";
        cout << img1 << "i" << endl;
    }
};
class complex_2
{
protected:
    int real2, img2;

public:
    void get_complex_2()
    {
        cout << "Enter Complex No-2:" << endl;
        cout << "Enter real part : ";
        cin >> real2;
        cout << "Enter imaginary part : ";
        cin >> img2;
    }
    void display()
    {
        cout << "Complex No-2 : " << real2;
        if (img2 > 0)
            cout << "+";
        cout << img2 << "i" << endl;
    }
};
class sum : public complex_1, public complex_2
{
    int real, img;

public:
    void add()
    {
        real = real1 + real2;
        img = img1 + img2;
    }
    void display()
    {
        complex_1::display();
        complex_2::display();
        cout << "Sum : " << real;
        if (img > 0)
            cout << "+";
        cout << img << "i";
    }
};
int main()
{
    sum s;
    s.get_complex_1();
    cout << endl;
    s.get_complex_2();
    s.add();
    cout << endl;
    s.display();
    return 0;
}
