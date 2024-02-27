// Program to calculate Greatest Common Divisor (GCD) of two numbers.

#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    int result=min(a,b);
    
    while(result>0)
    {
        if(a%result==0 && b%result==0)
        {
            break;
        }
        result--;
    }
    return result;
}

int main()
{
    int num1,num2;
    cout<<"Enter two numbers :";
    cin>>num1>>num2;
    
    cout<<"GCD :"<<gcd(num1,num2);
    
    return 0;
    
}
