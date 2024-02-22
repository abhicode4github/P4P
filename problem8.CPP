// check given number is a positive or a negative 

#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a number."<<endl;
    cin>>number;
    
    if(number >= 0)
    {
        cout<<number<<" is a positive number ."<<endl;
    }
    
    else
    {
        cout<<number<<" is a negative number ."<<endl;
    }
    
    return 0;
    
}
