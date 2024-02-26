// program to find the sum of the first N natural number

#include<iostream>
using namespace std;

int findSum(int n)
{
    int Sum = 0;
    
    for(int i=0;i<=n;i++)
    {
        Sum = Sum + i;
    }
    
    return Sum;
    
}

int main()
{
    int number;
    cout<<"Enter a number :";
    cin>>number;
    
    cout<<"The sum of first n natural numbers is :"<<findSum(number)<<endl;
    
    return 0;
    
}
