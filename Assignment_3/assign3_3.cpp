#include <iostream>
using namespace std;

class Address
{
    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
        this->building = "";
        this->street = " ";
        this->city = " ";
        this->pin = 0;
    }
    void setBuilding(string s)
    {
        this->building = s;
    }

    void setStreet(string s)
    {
        this->street = s;
    }

    void setCity(string s)
    {
        this->city = s;
    }

    void setPin(int p)
    {
        this->pin = p;
    }
    string getBuilding()
    {
        return this->building;
    }
    string getStreet()
    {
        return this->street;
    }
    string getCity()
    {
        return this->city;
    }

    int getPin()
    {
        return this->pin;
    }
    void acceptAddress()
    {
        string bld;
        string strt;
        string cty;
        int pn;

        cout << "Enter bulding : " << endl;
        getline(cin, bld);
        setBuilding(bld);
        cout << "Enter street : " << endl;
        getline(cin, strt);
        setStreet(strt);
        cout << "Enter city : " << endl;
        getline(cin, cty);
        setCity(cty);
        cout << "enter Pin : " << endl;
        cin >> pn;
        setPin(pn);
    }

    // void acceptAddressFromConsole()
    // {
    //     string bld;
    //     string strt;
    //     string cty;
    //     int pin;
    //     cout << "Enter the Building : " << endl;
    //     // cin >> bldg;
    //     getline(cin, bld);
    //     setBuilding(bld);
    //     cout << "Enter the Street : " << endl;
    //     // cin >> strt;
    //     getline(cin, strt);
    //     setBuilding(strt);
    //     cout << "Enter the City : ";
    //     // cin >> cty;
    //     getline(cin, cty);
    //     setBuilding(cty);
    //     cout << "Enter the Pin :";
    //     cin >> pin;
    //     setPin(pin);
    // }

    void displayAddressOnConsole()
    {
        cout << getBuilding() << " ," << getStreet() << ", " << getCity() << ", " << getPin() << endl;
    }
};
int main()
{
    Address ad1;
    ad1.acceptAddress();
    ad1.displayAddressOnConsole();
    return 0;
}