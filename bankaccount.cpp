/*Write a C++ program to implement a class called BankAccount that has 
private member variables for account number and balance. Include member 
functions to deposit and withdraw money from the account.*/

#include <iostream>
using namespace std;
class BankAccount 
{
    private:
        int accountNumber;
        double balance;
    public:
        BankAccount(int accNum, double initialBalance) 
        {
            accountNumber = accNum;
            balance = initialBalance;
            cout<<"I am"<<endl;
        }
        void deposit(double amount) 
        {
            balance += amount;
            //cout<<balance;//<<endl<<accountNumber<<endl;
            // cout << "Deposited $" << amount << " into account #" << accountNumber << endl;
        }
        /*
        void withdraw(double amount) 
        {
            if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from account #" << accountNumber << endl;
        } else 
        {
            cout << "Insufficient funds in account #" << accountNumber << endl;
        }
        }
        void display() 
        {
            cout << "Account #" << accountNumber << " Balance: $" << balance << endl;
        }
        */
};

int main() 
{
    BankAccount account1(123456, 1000.0);
    
 //   account1.deposit(500.0);
    /*
    account1.display();
    account1.withdraw(200.0);
    account1.display();
    account1.withdraw(1500.0); // Should display "Insufficient funds"
    account1.display();
*/
    return 0;
}