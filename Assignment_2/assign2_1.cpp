#include <iostream>
using namespace std;
struct Date
{

    int day;
    int month;
    int year;

    void initDate()
    {
        this->day = 01;
        this->month = 01;
        this->year = 1900;
    }
    void printDateOnConsole()
    {
        cout << "+--------------------------------+" << endl;
        cout << "| DATE    :   " << this->day << "/" << this->month << "/" << this->year << "           |" << endl;
        cout << "+--------------------------------+" << endl;
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
    bool isLeapYear()
    {
        if (year % 4 == 0)
        {
            // return true;
            cout << this->year << " Is a Leap year" << endl;
        }
        else
            cout << this->year << " Not a Leap year" << endl;
        // return false;
    }
};
int menu()
{
    int choice;
    cout << "Enter the choice :" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Init Date" << endl;
    cout << "2. ADD DATE" << endl;
    cout << "3. DISPLAY DATE" << endl;
    cout << "4. CHECK LEAP YEAR" << endl;
    cin >> choice;
    return choice;
}
int main()
{
    int choice;
    Date d1;
    while ((choice = menu()) != 0)
    {
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
        case 4:
            d1.isLeapYear();
            break;

        default:
            cout << "Invalid Input !!!" << endl;
            break;
        }
    }
    return 0;
}

// before leapyr_check
/*
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
            this->year = 1900;
        }
        void printDateOnConsole()
        {
            cout << "+--------------------------------+" << endl;
            cout << "| DATE    :   " << this->day << "/" << this->month << "/" << this->year << "           |" << endl;
            cout << "+--------------------------------+" << endl;
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
        bool isLeapYear()
        {
        }
    };
    int menu()
    {
        int choice;
        cout << "Enter the choice :" << endl;
        cout << "0. Exit" << endl;
        cout << "1. Init Date" << endl;
        cout << "2. ADD DATE" << endl;
        cout << "3. DISPLAY DATE" << endl;
        cin >> choice;
        return choice;
    }
    int main()
    {
        int choice;
        Date d1;
        while ((choice = menu()) != 0)
        {
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
*/