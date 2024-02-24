// Program to print check whether a character is an alphabet or not.

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<" Enter a character."<<endl;
    cin>>ch;
    
    if(isalpha(ch))
    {
        cout<<ch<<" is an alphabet."<<endl;
    }
    else
    {
        cout<<ch<<" is not an alphabet."<<endl;
    }
    
    return 0;
    
}
