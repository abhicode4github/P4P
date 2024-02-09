#include<iostream> 

using namespace std;

void Fibonacci(int n)
{
    int first =0;
    int second = 1;
    int fibS=0;
    
    if(n==0)
    {
        cout<<first;
    }
    for(int i=2;i<=n;i++)
    {
        fibS=first + second;
        first = second;
        second = fibS;
    }
    cout<<fibS;
}

int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    
    Fibonacci(n);
    
    return 0;
}
