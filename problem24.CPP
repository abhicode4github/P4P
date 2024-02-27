// program to check Pallindrome 

#include<iostream>
using namespace std;

int Pallindrome(int n)
{
    int Result = 0;
    int Rem = 0;
    int temp=n;
    
    while(temp>0)
    {
        Rem=temp%10;
        temp=temp/10;
        Result = Result*10 + Rem;
    }
    
    if(Result == n)
    {
        cout<<"It is a pallindrome number.";
    }
    else
    {
        cout<<"It is not a pallindrome number.";
    }
    
    return 0;
    
}

int main()
{
    int NUM;
    cout<<"Enter a number :";
    cin>>NUM;
    
    Pallindrome(NUM);
    
    return 0;
    
}
