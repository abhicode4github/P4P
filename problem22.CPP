// Program to find the year is a leap year or not 

#include<iostream>
using namespace std;

int LeapYear(int n)
{
    if(n%400 == 0)
    {
        cout<<"It is a leap year.";
    }
    else if(n%100 == 0)
    {
        cout<<"It is not a leap year.";
    }
    else if(n%4 == 0)
    {
        cout<<"It is a leap year.";
    }
    else
    {
        cout<<"It is not a leap year.";
    }
    
    return 0;
    
}

int main()
{
    int Year;
    cout<<"Enter a year:";
    cin>>Year;
    
    LeapYear(Year);
    
    return 0;
    
}
