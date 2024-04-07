#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

class Library
{
    string name, cname;
    int cls;
    char yn;
    string pass, cpas, bknumstr;
    int booknum, i, c;
    string bookarr[5];

public:
    void header()
    {
        cout << "\tWelcome To RD Library " << endl;
        cout << "     ***************************" << endl;
    }
    void userDetail()
    {
        system("cls");
        header();
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Class : ";
        cin >> cls;
        cout << "Create PassWord : ";
        cin >> pass;
    }
    void bookList()
    {
        cout << "Book-1 : C" << endl;
        cout << "Book-2 : C++" << endl;
        cout << "Book-3 : Python" << endl;
        cout << "Book-4 : Java" << endl;
        cout << "Book-5 : Web Develop" << endl;
    }
    void bookIssue()
    {
        system("cls");
        header();
        cout << " Welcome " << name << endl;
        cout << "Enter Your Password : ";
        cin >> cpas;
        if (pass == cpas)
        {
            i = 0;
            while (1)
            {
                Sleep(300);
                system("cls");
                header();
                bookList();
                cout << "\nSelect Books (With Book Number) :";
                cin >> booknum;
                bknumstr += to_string(booknum);
                switch (booknum)
                {
                case 1:
                    bookarr[i] = "C";
                    cout << "\nSelected Book is Issued Successfully ." << endl;
                    break;
                case 2:
                    bookarr[i] = "C++";
                    cout << "\nSelected Book is Issued Successfully ." << endl;
                    break;
                case 3:
                    bookarr[i] = "Python";
                    cout << "\nSelected Book is Issued Successfully ." << endl;
                    break;
                case 4:
                    bookarr[i] = "Java";
                    cout << "\nSelected Book is Issued Successfully ." << endl;
                    break;
                case 5:
                    bookarr[i] = "Web Development";
                    cout << "\nSelected Book is Issued Successfully ." << endl;
                    break;
                default:
                    cout << "You have entered Wrong Book Number !! "<<endl;
                    break;
                }
                if (!bookarr->empty())
                {
                    cout << "Do You want to issue More Books ? \nIf Yes then Press 'Y' Otherwise Press 'N' :-" << endl;
                    cin >> yn;
                    if (yn == 'y' || yn == 'Y')
                    {
                        i++;
                        cout << "Loding ...";
                        Sleep(500);
                        // system("cls");
                        // cout<<"Book Numbers : "<<bknumstr;
                    }
                    else
                    {
                        break;
                    }
                } else{
                    break;
                }
            }
        }
        else
        {
            cout << "Your Password is Wrong !!" << endl;
        }
        if (i > 0)
        {
            returnBook();
        }
        else
        {
            cout << "You do not Select Any Book" << endl;
        }
    }

    void returnBook()
    {
        system("cls");
        header();
        cout << "Enter Name :";
        cin >> cname;
        cout << "Enter Password :";
        cin >> cpas;
        if (name == cname && pass == cpas)
        {
            cout << "\n\t\t***Welcome " << name << "***" << endl;
            cout << "Your Allocated Books :- " << endl;
            c = 0;
            while (i >= 0)
            {
                cout << "Book -" << c + 1 << " : " << bookarr[c] << endl;
                i--;
                c++;
            }

            cout << "\n\t\t Thank You " << endl;
        }
        else
        {
            cout << "\nWrong User Details" << endl;
        }
    }
};
int main()
{
    Library obj;
    obj.userDetail();
    obj.bookIssue();
    // obj.returnBook();

    return 0;
}