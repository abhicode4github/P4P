// Program to find the length of string without using strlen() function

#include<iostream> 
using namespace std;

int main()
{
    string inputString;
    cout<<"Enter a string: "<<endl;
    getline(cin,inputString);
    
    int length=0;
    
    for(int i=0;inputString[i]!='\0';i++)
    {
        length++;
    }
    
    cout<<"The length of the string is "<<length<<endl;
    
    return 0;
    
}
