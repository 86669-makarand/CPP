/*
        The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
        collected. Model this tollbooth with a class called tollbooth.
        The two data items are a type unsigned int to hold the total number of cars, and a type double to
        hold the total amount of money collected.
        A constructor initializes all data members to 0. A member function called payingCar() increments
        the car total and adds 0.50 to the cash total. An other function, called nopayCar()
        increments the car total but adds nothing to the cash total. Finally, a member function called
        printOnConsole() displays the two totals and number of paying as well as non paying cars total.
*/

#include <iostream>
using namespace std;

class Tollbooth
{
private:
    unsigned int payingcar;
    unsigned int nopaycar;
    double collectedmoney;

public:
    Tollbooth()
    {
        this->payingcar = 0;
        this->nopaycar = 0;
        this->collectedmoney = 0;
        // total_car = 0;
    }
    void paying_Car()
    {
        payingcar++;
        collectedmoney += 0.50;
        // total_car++;
    }
    void non_Paying_Cars()
    {
        nopaycar++;
    }
    void printOnConsole()
    {
        cout << " paying car" << payingcar << endl;
        cout << " no pay car " << nopaycar << endl;
        cout << "Total Revenue Collected : " << collectedmoney << endl;
        // cout << "+------------------------------------------+" << endl;
    }
    // void RevenueCount()
    // {
    //     cout << "+------------------------------------------+" << endl;
    //     cout << "Total Revenue Collected : " << this->collected_money << endl;
    //     cout << "+------------------------------------------+" << endl;
    // }
};
// int menu()
// {
//     int choice;
//     cout << "0. Exit" << endl;
//     cout << "1. Paying Car" << endl;
//     cout << "2. Non Paying Car" << endl;
//     cout << "3. Total Revenue" << endl;
//     cout << "Enter the choice :   ";
//     cin >> choice;
//     return choice;
// }
int main()
{
    Tollbooth t1;
    int choice;
    // while ((choice = menu()) != 0)
    // {

    do
    {
        // int choice;
        cout << "0. Exit" << endl;
        cout << "1. Paying Car" << endl;
        cout << "2. Non Paying Car" << endl;
        cout << "3. Total Revenue" << endl;
        cout << "Enter the choice :   ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            t1.paying_Car();

            break;
        }

        case 2:
        {
            t1.non_Paying_Cars();

            break;
        }

        case 3:
        {
            t1.printOnConsole();
            // t1.RevenueCount();
            break;
        }
        default:
            cout << "+---------------Invalid Input !!!------------------+" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}