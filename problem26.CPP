// Program to find the nth term of the fibonacci series 

#include<iostream>
using namespace std;

int Fibonacci(int n)
{
    int first=0,second=1,result;
    
    if(n==0)
    {
        return first;
    }
    
    for(int i=2;i<=n;i++)
    {
        result=first+second;
        first=second;
        second=result;
    }
    return second;
}

int main()
{
    int N;
    cout<<"Enter value of N :";
    cin>>N;
    
    cout<<"The "<<N<<"th term of the series is :"<<Fibonacci(N)<<endl;
    
    return 0;
}
