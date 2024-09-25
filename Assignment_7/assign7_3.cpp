#include <iostream>
using namespace std;
enum EAccountType
{
    Savings = 1,
    Current,
    Dmat
};
class InSufficientFundsException
{
    string message;

public:
    InSufficientFundsException()
    {
    }
    InSufficientFundsException(string message)
    {
        this->message = message;
    }

    void display()
    {
        cout << message;
    }
};
class Account
{
    int accno;
    // double balance;
    EAccountType type;
    // static int generate_accno;
    double balance;

public:
    Account() //: accno(++generate_accno)
    {
    }

    void accept()
    {
        cout << "********************************" << endl;
        cout << "Enter the Account no :";
        cin >> accno;
        cout << "Enter the Account Type :" << endl;
        cout << "1. Savings" << endl;
        cout << "2. Current" << endl;
        cout << "3. Dmat" << endl;
        int choice;
        type = EAccountType(choice);
        cout << "Enter the Initial Balance :";
        cin >> balance;
        cout << "********************************" << endl;
    }
    void display()
    {
        cout << "Account Number :" << accno << endl;
        switch (type)
        {
        case Savings:
            cout << "Account Type  = Savings " << endl;
            break;
        case Current:
            cout << "Account Type  = Current " << endl;
            break;
        case Dmat:
            cout << "Account Type  = Dmat " << endl;
            break;
            cout << "********************************" << endl;
        }
    }
    void deposit(double amount)
    {

        if (amount < 0)
        {
            throw InSufficientFundsException("Deposit Amount cannot be negative");
        }
        balance += amount;
        cout << "Amount Deposited Successfully!" << endl;
    }
    void withdraw(double amount)
    {
        if (amount > balance)
        {
            throw InSufficientFundsException("Insufficient Funds in the Account.");
        }
        else if (amount < 0)
        {
            throw InSufficientFundsException("Amount value should be greater than zero.");
        }
        balance -= amount;
        cout << "Amount Withdrawn Successfully! " << endl;
    }
    int getAccoNo()
    {
        return accno;
    }
};
int findAccountByNumber(Account accounts[], int numAccounts, int accNo)
{
    for (int i = 0; i < numAccounts; i++)
    {
        if (accounts[i].getAccoNo() == accNo)
        {
            return i;
        }
    }
    return -1;
}

// int Account::generate_accno = 0;

int menu()
{
    cout << "0. Nikal ja " << endl;
    cout << "1. Diposit Money" << endl;
    cout << "2. Withdraw Money" << endl;
    int option;
    return option;
}

int main1()
{
    Account accounts[5];
    int index = 0;
    int numAccounts = 0;
    int choice;

    do
    {
        cout << "0. Exit :" << endl;
        cout << "1. Add Account :" << endl;
        cout << "2. Display Account :" << endl;
        cout << "3. Diposit Money :" << endl;
        cout << "4. Withdraw Money :" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (numAccounts > 5)
            {
                accounts[numAccounts].accept();
                numAccounts++;
            }
            else
            {
                cout << "Maximum Account limit Reached" << endl;
            }
            break;

        case 2:
        {
            int accNo;
            cout << "Enter the account number to display details: ";
            cin >> accNo;
            int index = findAccountByNumber(accounts, numAccounts, accNo);
            if (index != -1)
            {
                accounts[index].display();
            }
            else
            {
                cout << "Account not found!" << endl;
            }
            break;
        }
        case 3:
        {
            int accNo;
            double amt;
            cout << "Enter the account number for deposit: ";
            cin >> accNo;
            int index = findAccountByNumber(accounts, numAccounts, accNo);
            if (index != -1)
            {
                try
                {
                    cout << "Enter the amount to deposit: ";
                    cin >> amt;
                    accounts[index].deposit(amt);
                }
                catch (InSufficientFundsException &e)
                {
                    e.display();
                }
            }
            else
            {
                cout << "Account not found!" << endl;
            }
            break;
        }
        }
    } while (choice != 0);

    return 0;
}
/*
    Account *ptr[5];
    int option;
    int amount = 0;
    int balance = 0;
    int index = 0;
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = new Account;
        ptr[i]->accept();
        switch ((option == menu()) != 0)
        {
        case 1:
            do
            {
                switch (option)
                {
                case 1:
                    cout << "Enter Amount to Deposit : " << endl;
                    balance = balance + amount;
                }

            } while ((menu()) != 0);
            break;

        default:
            break;
        }
    }
    */