// Program to check whether a character is a vowel or consonant. 

#include<cctype> 
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character ."<<endl;
    cin>>ch;
    
    if(isalpha(ch))
    {
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O'
    || ch=='U')
    {
        cout<<ch<<" is a vowel."<<endl;
    }
    else
    {
        cout<<ch<<" is a consonant."<<endl;
    }
    
    }
    
    else
    {
        cout<<ch<<" is not an alphabet."<<endl;
    }
    
    return 0;
    
}
