#include <iostream>
#include <string.h>
using namespace std;

class bank
{
private:
    int accNum;
    double balance;

public:
    bank(int a, double b)
    {
        accNum = a;
        balance = b;
        cout << "Account Initialized with initial balance = " << balance << endl;
    }
    ~bank()
    {
        accNum = 0;
        balance = 0;
        cout << "Account destructed." << endl;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited $" << amount << " into account #" << accNum << endl;
    }
    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from account #" << accNum << endl;
        }
        else
            cout << "Insufficient funds in account #" << accNum << endl;
    }
    void display()
    {
        cout << "Account Number : #" << accNum << endl
             << "Balance: $" << balance << endl;
    }
};
int main()
{
    system("clear");
    bank a(101, 1000.0);
    int choice;
    double amount;
    while (true)
    {
        cout << "1. deposite " << endl;
        cout << "2. withdraw " << endl;
        cout << "3. display " << endl;
        cout << "4. exit " << endl;
        cout << "enter your choice " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter amount to deposit: " << endl;
            cin >> amount;
            a.deposit(amount);
            break;
        case 2:
            cout << "enter amout to withdraw: " << endl;
            cin >> amount;
            a.withdraw(amount);
            break;
        case 3:
            a.display();
            break;
        case 4:
            return 0;
        }
    }
}