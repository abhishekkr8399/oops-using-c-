#include <iostream>
#include <string.h>
using namespace std;
class enroll
{
    char name[25];
    int mobile;
    static int count;

public:
    void get_details()
    {
        cout << "Enter participant name:";
        cin.ignore(1, '\n');
        cin.getline(name, 20);
        cout << "Enter phone number:";
        cin >> mobile;
    }
    static void count_number()
    {
        count++;
    }
    static void display()
    {
        cout << "\nTotal enrollments are " << count << endl;
    }
};
int enroll::count;
int main()
{
    int n;
    cout << "Enter the maximum number of participants to be enrolled:";
    cin >> n;
    cout << endl;
    enroll E[n];
    for (int i = 0; i < n; i++)
    {
        E[i].get_details();
        enroll::count_number();
        cout << "\nDo you want to enroll new name? Types Yes/No\n";
        char s[5];
        cin >> s;
        if (strcmpi(s, "Yes") != 0)
            break;
    }
    enroll::display();
    return 0;
}
