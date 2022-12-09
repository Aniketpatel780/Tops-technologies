#include <iostream>
using namespace std;

class bankAccount
{
    char * nameOfDepositer;
    int accountNumber;
    char * typeOfAccount;
    double balance;

    public:
    bankAccount( int AccountNumber, char Name[], char AccountType[], double Balance)
    {   
        nameOfDepositer = Name;
        accountNumber = AccountNumber;
        typeOfAccount = AccountType;
        balance = Balance;
    }

    void amountDeposite(int amount)
    {
        balance += amount;
    }

    void amountWithdraw(int amount)
    {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient Funds in Your Account." << endl;
    }

    void getNameBalance(void)
    {
        cout << "Account Holder Name: " << nameOfDepositer << endl;
        cout << "Balance: " << balance << endl;
    }

    void setName(char name[])
    {
        nameOfDepositer = name;
    }
};

int main(void)
{
    bankAccount Aniket = bankAccount(1234567, "Aniket Patel", "Savings", 20000);
    Aniket.amountDeposite(2000);
    Aniket.amountWithdraw(5000);
    Aniket.getNameBalance();
}