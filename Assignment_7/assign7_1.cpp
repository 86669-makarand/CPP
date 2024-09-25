/*
    Q1. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
    holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
    Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
    should be menu driven and should not cause memory leakage.
    Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]
*/

#include <iostream>
#include <typeinfo>
using namespace std;

class Product
{
    int id;
    string title;
    double price;

public:
    Product()
    {
    }
    Product(int id, string title, double price)
    {
        this->id = id;
        this->title = title;
        this->price = price;
    }
    virtual void accept()
    {
        cout << "Enter the Product Id : ";
        cin >> id;
        cout << "Enter the Title : ";
        getchar();
        // cin >> title;
        getline(cin, title);
        cout << "Enter the Price : ";
        cin >> price;
    }

    virtual void display()
    {
        cout << "---------------------------------------" << endl;
        cout << "Id    : " << id << endl;
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
    }
    double getPrice()
    {
        return price;
    }
};

class Book : public Product
{
    string author;
    // Product prod;

public:
    Book()
    {
        author = " ";
    }
    Book(string author, int id, string title, double price) : Product(id, title, price)
    {
        author = author;
    }
    void accept()
    {
        Product::accept();
        cout << "Enter the Author : " << endl;
        cin >> author;
    }

    void display()
    {
        Product::display();
        cout << "Author : " << author << endl;
        cout << "---------------------------------------" << endl;
    }
};

class Tape : public Product
{
    string artist;
    // Product prod;

public:
    Tape()
    {
        artist = " ";
    }
    Tape(string artist)
    {
        this->artist = artist;
    }

    void acceptTape()
    {
        Product::accept();
        cout << "Enter the Artist : ";
        cin >> artist;
        getline(cin, artist);
    }

    void desplayTape()
    {
        Product::display();
        cout << "Artist : " << artist << endl;
    }
};
int menu()
{
    int choice;
    cout << "0. Exit" << endl;
    cout << "1. ADD PRODUCT" << endl;
    cout << "2. DISPLAY PRODUCT" << endl;
    cout << "3. GENERATE BILL" << endl;
    cout << endl;
    cout << "Enter your choice : " << endl;
    cin >> choice;

    return choice;
}
int main()
{

    Product *arr[3];
    int choice;

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                int option;
                cout << "1. ADD BOOK" << endl;
                cout << "2. ADD TAPE" << endl;
                cout << "Enter the Choice : ";
                cin >> option;
                if (option == 1)
                {
                    arr[i] = new Book;
                }
                else
                {
                    arr[i] = new Tape;
                }
                arr[i]->accept();
            }
            break;

        case 2:
            for (int i = 0; i < 3; i++)
            {
                cout << "-----------------------------" << endl;
                arr[i]->display();
                cout << "-----------------------------" << endl;
            }
            break;

        case 3:
        {
            double total = 0;
            double discount = 0;
            for (int i = 0; i < 3; i++)
            {
                if (typeid(*arr[i]) == typeid(Book))
                {
                    //                      10       0           100
                    discount = discount + arr[i]->getPrice() * 0.1;
                }

                else
                {
                    discount = discount + arr[i]->getPrice() * 0.05;
                }

                total = total + arr[i]->getPrice();
            }
            cout << " Total amount : " << total << endl;
            cout << " Discount amount : " << discount << endl;
            cout << " Total payable amount : " << total - discount << endl;
        }
        default:
            cout << "Invalid Input !!!! " << endl;
            break;
        }
    }

    return 0;
}
