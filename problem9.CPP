// Program to find the greatest of three numbers.

#include<iostream> 
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter three numbers ."<<endl;
    cin>>a>>b>>c;
    
    if(a>b && a>c)
    {
        cout<<a<<" is the greatest among the three. "<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is the greatest among the three . "<<endl;
    }
    else
    {
        cout<<c<<" is the greatest among the three ."<<endl;
    }
    
    return 0;
    
}
