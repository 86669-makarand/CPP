#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        day = 0;
        month = 0;
        year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void setDay(int day)
    {
        this->day = day;
    }

    void setMonth(int month)
    {
        this->month = month;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    int getDay()
    {
        return day;
    }
    int getMonth()
    {
        return month;
    }
    int getYear()
    {
        return year;
    }

    void acceptDateOnConsole()
    {
        cout << "Enter the Day :";
        cin >> day;
        cout << "Enter the Month :";
        cin >> month;
        cout << "Enter the Year :";
        cin >> year;
    }

    void displayDateOnConsole()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person
{
    string name;
    string address;
    Date dob;

public:
    Person()
    {
        this->name = " ";
        this->address = " ";
    }
    Person(string name, string address, int day, int month, int year)
    {
        this->name = name;
        this->address = address;
        this->dob.setDay(day);
        this->dob.setMonth(month);
        this->dob.setYear(year);
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    string getAddress()
    {
        return address;
    }
    void acceptOnConsole()
    {
        string add;
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the Address : ";
        // cin >> address;
        getchar();
        getline(cin, address);
        setAddress(address);
        cout << "Enter DOB : " << endl;
        dob.acceptDateOnConsole();
    }
    void displayOnConsole()
    {
        cout << name << endl;
        cout << getAddress() << endl;
        dob.displayDateOnConsole();
    }
};
int main()
{
    Person p1;
    p1.acceptOnConsole();
    p1.displayOnConsole();
    return 0;
}