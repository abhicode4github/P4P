// Program to toggle each character in a string input by the user.

#include<iostream> 
using namespace std;

int main()
{
    string inputString;
    cout<<"Enter a string:"<<endl;
    getline(cin,inputString);
    
    for(int i=0;i<inputString.length();i++)
    {
        if(isalpha(inputString[i]))
        {
            if(islower(inputString[i]))
            {
                inputString[i]=toupper(inputString[i]);
            }
            else
            {
                inputString[i]=tolower(inputString[i]);
            }
        }
    }
    
    cout<<"Toggled string:"<<inputString<<endl;
    
    return 0;
    
}
