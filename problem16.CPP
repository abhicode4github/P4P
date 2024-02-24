// Program to count the number of vowels

#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    
    int vowelsCount=0;
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'
        ||str[i]=='O'||str[i]=='U')
        {
            vowelsCount++;
        }
    }
    
    cout<<"The number of vowels in the string is :"<<vowelsCount<<endl;
    
    return 0;

    
}
