#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int seconds;

public:
    Time()
    {
        hour = 00;
        minute = 00;
        seconds = 00;
    }
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        seconds = s;
    }

    void setHour(int h)
    {
        this->hour = h;
    }

    void setMinute(int m)
    {
        this->minute = m;
    }

    void setSecond(int s)
    {
        this->seconds = s;
    }

    int getHour()
    {
        return hour;
    }

    int getMinute()
    {
        return minute;
    }

    int getSecond()
    {
        return seconds;
    }

    void acceptTime()
    {
        cout << "Enter the Hour : ";
        cin >> hour;
        // setHour(hour);
        cout << "Enter the Minute :";
        cin >> minute;
        // setMinute(minute);
        cout << "Enter the Second :";
        cin >> seconds;
        // setSecond(seconds);
    }

    void displayTime()
    {
        cout << "-------------------------------------" << endl;
        cout << "TIME : " << getHour() << ":" << getMinute() << ":" << getSecond() << endl;
        cout << "-------------------------------------" << endl;
    }
};

int main()
{
    Time **ptr = new Time *[5];
    // t1.setHour(3);
    /*
                                    for (int i = 0; i < 5; i++)
                                    {
                                        ptr[i] = new Time;
                                    }
    */
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = new Time;
        ptr[i]->acceptTime();
        ptr[i]->displayTime();
    }

    //-------------------------
    for (int i = 0; i < 3; i++)
    {
        delete ptr[i];
        ptr[i] = NULL;
    }

    delete[] ptr;
    ptr = NULL;

    return 0;
}

// for (int i = 0; i < 5; i++)
// {
//     ptr[i]->displayTime();
// }

// ptr[0]->acceptTime();
// ptr[0]->displayTime();

// t1.acceptTime();
// t1.displayTime();