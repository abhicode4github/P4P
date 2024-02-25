// program to remove spaces from a string 

#include<iostream>
using namespace std;

string remove_spaces(string str)
{
    string result = " ";
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=' ')
        {
            result = result + str[i];
        }
    }
    return result;
}

int main()
{
    string stringInput;
    cout<<"Enter a string with spaces in between: ";
    getline(cin,stringInput);
    
    cout<<"The string without spaces is: "<<remove_spaces(stringInput)<<endl;
    
    return 0;
    
}
