// if you want to maintain customer bank account for the following information :
// Name
// Account Number 
// profession
// Adddress
// Street
// city
// state
// Pin code
#include<iostream>
#include<stdio.h>

using namespace std;
// structure declaration for address
struct addr{
    char street[20];
    char city[20];
    char state[20];
    long int pincode;
};

// Nested Structure declaration 

struct customer{
    char name[20];
    char account_no[10];
    char profession[20];
    addr address;
};

// Main Function 

int main()
{
   customer *list[40];
   int n;
   cout<<"\n Input number of record you wants to process: ";
   cin>>n;
   cout<<"\n Input the information of customer \n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n Name:";
        cin>>list[i]->name;
        cout<<"\nAccount Number :";
        cin>>list[i]->account_no;
        cout<<"\nProfession:";
        cin>>list[i]->profession;
        cout<<"\n***Address***";
        cout<<"\nStreet:";
        cin>>list[i]->address.street;
        cout<<"\nCity:";
        cin>>list[i]->address.city;
        cout<<"\nState:";
        cin>>list[i]->address.state;
        cout<<"\npin Code :";
        cin>>list[i]->address.pincode;
    }

    cout<<"\n List of the Customer ";
    cout<<"\n*******************\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n Name:";
        cout<<list[i]->name;
        cout<<"\nAccount Number :";
        cout<<list[i]->account_no;
        cout<<"\nProfession:";
        cout<<list[i]->profession;
        cout<<"\n***Address***";
        cout<<"\nStreet:";
        cout<<list[i]->address.street;
        cout<<"\nCity:";
        cout<<list[i]->address.city;
        cout<<"\nState:";
        cout<<list[i]->address.state;
        cout<<"\npin Code :";
        cout<<list[i]->address.pincode;
    }
    return 0;
}

