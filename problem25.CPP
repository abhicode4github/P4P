// Program to check ARMSTRONG number 

#include<iostream>
using namespace std;

int Armstrong(int n)
{
    int Rem=0;
    int temp=n;
    int Result=0;
    
    while(temp>0)
    {
        Rem=temp%10;
        temp=temp/10;
        Result=Result+(Rem*Rem*Rem);
    }
    if(Result == n)
    {
        cout<<"It is an armstrong number.";
    }
    else
    {
        cout<<"It is not an armstrong number.";
    }
    
    return 0;
    
}

int main()
{
    int NUM;
    cout<<"Enter a number :";
    cin>>NUM;
    
    Armstrong(NUM);
    
    return 0;
    
}
