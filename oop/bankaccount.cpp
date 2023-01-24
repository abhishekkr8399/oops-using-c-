#include <iostream>
#include <iomanip>
using namespace std;
class BankAccount
{
    char name[25];
    int acc_no;
    float balance;

public:
    void initialize()
    {
        cout << "Enter name of the account holder:";
        cin.getline(name, 20);
        cout << "Enter account number:";
        cin >> acc_no;
        cout << "Enter current account balance:";
        cin >> balance;
    }
    void deposit()
    {
        float cre;
        cout << "Enter the amount to be deposited:";
        cin >> cre;
        balance += cre;
        cout << "Rs." << cre << " successfully debited to your account.\n";
    }
    void withdraw()
    {
        float deb;
        cout << "Enter the amount to be withdrawed:";
        cin >> deb;
        if (deb > balance)
            cout << "Sorry. Insufficient balance.\n";
        else
        {
            balance -= deb;
            cout << "Rs." << deb << " has been debited from your account.\n";
        }
    }
    void display()
    {
        cout << "\nAccount details\n";
        cout << "Name of the account holder : " << name << endl;
        cout << "Account No. : " << acc_no << endl;
        cout << "Balance : ";
        cout << fixed << setprecision(2) << balance << endl;
    }
};
int main()
{
    BankAccount B;
    int ch;
    B.initialize();
    B.display();
    cout << "\nDo you want to deposit/Withdraw:\n\t>1.Deposit\n\t>2.Withdraw\n"
         << endl;
    cin >> ch;
    if (ch == 1)
        B.deposit();
    else if (ch == 2)
        B.withdraw();
    else
        cout << "Invalid choice.\n";
    B.display();
    return 0;
}
