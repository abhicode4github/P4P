// program to remove all characters from a string except alphabets 

#include<iostream>
using namespace std;

string remove_non_alphabets(string str)
{
    string result =" ";
    
    int length=str.length();
    
    for(int i=0;i<length;i++)
    {
        char c=str[i];
        if(isalpha(c) || c==' ')
        {
            result = result + c;
        }
    }
    return result;
}

int main()
{
    string str;
    cout<<"Enter the string :";
    getline(cin,str);
    
    cout<<"Alphabets only:"<<remove_non_alphabets(str)<<endl;
    
    return 0;
}
