// Program to remove vowels from a string  . 

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int j=0;
    
    string str;
    cout<<"user please enter the string:";
    getline(cin,str);
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E'
        && str[i]!='I' && str[i]!='O' && str[i]!='U')
        {
            str[j++]=str[i];
        }
    }
    while(j<str.size())
    {
        str[j]='\0';
        j++;
    }
    cout<<"string without vowels is: "<<str<<endl;
}
