#include<iostream>

using namespace std;

void pallindrome(int num)
{
    int n,rev=0,digit;
    
    n=num;
    
    do
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    while(num!=0);
    
    cout<<"The reverse of the input number is : "<<rev<<endl;
    
    if(rev==n)
    {
        cout<<"The number input by the user is Pallindrome.";
    }
    else
    {
        cout<<"The number input is not a Pallindome.";
    }
}

int main()
{
    int num;
    
    cout<<"Enter the number:";
    cin>>num;
    
    pallindrome(num);
    
    return 0;
    
}
