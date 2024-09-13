#include <iostream>
using namespace std;
class Volume
{
private:
    double length;
    double width;
    double height;

public:
    Volume()
    {
        // cout << "Inside parameterless ctor" << endl;
        // default values
        length = 1;
        width = 1;
        height = 1;
    }
    Volume(double a)
    {
        // cout << "Inside parameterized ctor" << endl;
        cout << "Enter the Value : " << endl;
        cin >> a;
        length = a;
        width = a;
        height = a;
        cout << "Volume of CUBE : " << a * a * a << endl;
    }

    Volume(double l, double w, double h)
    {
        // cout << "Inside parameterized ctor" << endl;
        length = l;
        width = w;
        height = h;
    }
    void printStudentOnConsole()
    {
        cout << "+------------------------------------------+" << endl;
        cout << "VOLUME : " << length * width * height << endl;
        cout << "+------------------------------------------+" << endl;
    }

    void acceptStudentFromConsole()
    {
        cout << "Enter the Length : ";
        cin >> length;
        cout << "Enter the Width : ";
        cin >> width;
        cout << "Enter the Height : ";
        cin >> height;
    }
};
int menu()
{
    int choice;
    cout << "Enter the choice :" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Defalult Volume" << endl;
    cout << "2. Volume of CUBE" << endl;
    cout << "3. Volume of CONTAINER" << endl;
    cin >> choice;
    return choice;
}
int main()
{
    int choice;

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
        {
            Volume v1;
            v1.printStudentOnConsole();
            break;
        }
        case 2:
        {
            Volume v2(int n);
            int n;

            cout << "Enter the value : " << endl;
            cin >> n;
            cout << "+------------------------------------------+" << endl;
            cout << "CUBE :" << n * n * n << endl;
            cout << "+------------------------------------------+" << endl;

            break;
        }
        case 3:
        {
            Volume v3;
            v3.acceptStudentFromConsole();
            v3.printStudentOnConsole();

            break;
        }
        default:
            cout << "Invalid Input !!!" << endl;
            break;
        }
    }

    return 0;
}