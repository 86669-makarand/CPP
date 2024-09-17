/*
        Create a class Date with data memebrs day,month and year.
        Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
        type Date.
        Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
        be of type date.
        Employee class should be inherited from Person.
        Implement following classes. Test all functionalities in main().
        (Note - Perform the Association and Inheritance in the above case.)
*/

#include <iostream>
using namespace std;
class Date
{
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
        return this->day;
    }
    int getMonth()
    {
        return this->month;
    }
    int getYear()
    {
        return this->year;
    }

    void acceptDateOnConsole()
    {
        int dd;
        int mm;
        int yy;

        cout << "Enter the Day : ";
        cin >> dd;
        setDay(dd);
        cout << "Enter the Month : ";
        cin >> mm;
        setMonth(mm);
        cout << "Enter the Year : ";
        cin >> yy;
        setYear(yy);
    }
    void displayDateOnConsole()
    {
        cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
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
    }
    Person(string name, string address, int day, int month, int year)
    {
        this->name = name;
        this->address = address;
        this->dob.setDay(day);
        this->dob.setMonth(month);
        this->dob.setYear(year);
    }
    void acceptOnConsole()
    {
        cout << "Enter the Name : ";
        cin >> name;
        cout << "Enter the Address : ";
        cin >> address;
        cout << "Enter the DOB : " << endl;
        ;
        dob.acceptDateOnConsole();
    }
    void displayOnConsole()
    {
        cout << "NAME    : " << name << endl;
        cout << "ADDRESS : " << address << endl;
        cout << "DOB : " << endl;
        dob.displayDateOnConsole();
    }
};
class Employee : public Person
{
    int empid;
    int sal;
    string dept;
    Date doj;

public:
    Employee()
    {
    }
    Employee(int empid, int sal, string dept, int day, int month, int year)
    {
        this->empid = empid;
        this->sal = sal;
        this->dept = dept;
        this->doj.setDay(day);
        this->doj.setMonth(month);
        this->doj.setYear(year);
    }

    void acceptOnConsole()
    {
        cout << "Enter the Empid : ";
        cin >> empid;
        cout << "Enter the Salary : ";
        cin >> sal;
        cout << "Enter the Dept : ";
        cin >> dept;
        cout << "DOJ : " << endl;
        doj.acceptDateOnConsole();
        Person::acceptOnConsole();
    }
    void displayOnConsole()
    {
        cout << "-----------------------------------------------" << endl;
        cout << "EMPID  : " << empid << endl;
        cout << "SALARY : " << sal << endl;
        cout << "DEPT   : " << dept << endl;
        cout << "DOJ : " << endl;
        doj.displayDateOnConsole();
        Person::displayOnConsole();
        cout << "-----------------------------------------------" << endl;
    }
};
int main()
{
    Employee e1;
    e1.acceptOnConsole();
    e1.displayOnConsole();
    return 0;
}