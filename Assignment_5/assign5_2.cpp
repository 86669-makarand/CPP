/*
    Q2. Write a menu driven program for Student management.
    Create a class student with data members name, gender, rollNumber(Auto generated) and marksay to
    keep marks of three subjects.
    Accept every thing from user and Print name, rollNumber, gender and percentage.
    In main(), create Student* arr[5] and provide facility for accept, print, search.
    Search function returns index of found Student, otherwise returns -1.
*/

#include <iostream>
using namespace std;

class Student
{
    string name;
    string gender;
    const int rollNumber;
    static int generate_rollNumber;
    int marks[2];

public:
    Student() : rollNumber(++generate_rollNumber)
    {
        name = " ";
        gender = " ";
    }
    Student(string name, string gender) : rollNumber(++generate_rollNumber)
    {
        this->name = name;
        this->gender = gender;
        this->marks[2] = marks[2];
    }
    void acceptOnConsole()
    {
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the gender : ";
        cin >> gender;

        for (int i = 0; i < 3; i++)
        {
            cout << "Enter the marks : ";
            cin >> marks[i];
        }
    }
    void displayOnConsole()
    {
        cout << "------------------------------------------" << endl;
        cout << "Rollno : " << rollNumber << endl;
        cout << "NAME   : " << name << endl;
        cout << "GENDER : " << gender << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "MARKS  : " << marks[i] << endl;
        }
        cout << "PERCENTAGE : " << this->getPercentage() << endl;
        cout << "------------------------------------------" << endl;
    }

    float getPercentage()
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }

        return (sum / 300) * 100;
    }
    int getRollNumber()
    {
        return this->rollNumber;
    }
};
int Student::generate_rollNumber = 0;
int search(Student **arr, int count)
{
    int rollno;
    cout << "Enter Rollno to search ";
    cin >> rollno;
    for (int i = 0; i < count; i++)
    {
        if (rollno == arr[i]->getRollNumber())
            return i;
    }
    return -1;
}
int main()
{
    Student *s[5];
    int choice;
    int count = 0;
    do
    {
        cout << "\nMenu:" << endl;
        cout << "1.Add Student" << endl;
        cout << "2.Display the details " << endl;
        cout << "3.Search the student" << endl;
        cout << "4.Exit" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            s[count] = new Student();
            s[count]->acceptOnConsole();
            count++;
        }
        break;
        case 2:
        {

            cout << "\nDetails of students you entered " << endl;
            for (int k = 0; k < count; k++)
            {
                s[k]->displayOnConsole();
            }
        }
        break;
        case 3:
        {
            int index = search(s, count);
            if (index != -1)
                s[index]->displayOnConsole();
            else
                cout << "Student Not Found";
        }
        break;
        case 4:
        {
            cout << "Exiting program........";
            for (int k = 0; k < count; k++)
            {
                delete s[k];
            }
        }
        break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
}

int main1()
{
    Student **ptr = new Student *[2];

    for (int i = 0; i < 2; i++)
    {
        ptr[i] = new Student();
        ptr[i]->acceptOnConsole();
        ptr[i]->displayOnConsole();
    };

    return 0;
}
