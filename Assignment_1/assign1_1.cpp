#include <iostream>
using namespace std;

struct Date
{
private:
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        this->day = 01;
        this->month = 01;
        this->year = 2000;
    }
    void printDateOnConsole()
    {
        cout << endl;
        cout << "DATE : " << this->day << "/" << this->month << "/" << this->year << endl;
        cout << endl;
    }
    void acceptDateFromConsole()
    {
        cout << "Enter the Day : ";
        cin >> this->day;
        cout << "Enter the Month : ";
        cin >> this->month;
        cout << "Enter the Year : ";
        cin >> this->year;
    }
};
int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. InitDate" << endl;
    cout << "2. ADD TIME" << endl;
    cout << "3. DISPLAY TIME" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    return choice;

    return 0;
}

int main()
{
    int choice;
    Date d1;
    // d1.initDate();
    while ((choice = menu()) != 0)
    {
        // d1.initDate(); // setted as default value
        switch (choice)
        {
        case 1:
            d1.initDate();
            break;

        case 2:
            d1.acceptDateFromConsole();
            break;
        case 3:
            d1.printDateOnConsole();
            break;

        default:
            cout << "Invalid Input !!!" << endl;
            break;
        }
    }
    return 0;
}