// Program to find the factorial of a number using loop

#include<iostream>
using namespace std;

int Factorial(int n)
{
    int Fact = 1;
    
    while(n>1)
    {
        Fact = Fact * n;
        n--;
    }
    
    return Fact;
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    cout<<"The Factorial of "<<num<<" is :"<<Factorial(num)<<endl;
    
    return 0;
    
}
