#include<iostream> 

using namespace std;

void Pallindrome(int n)
{
    int reverse = 0;
    int temp = n;
    int rem;
    
    while(temp!=0)
    {
        rem = temp % 10;
        reverse = (reverse * 10) + rem;
        temp = temp/10;
    }
    
    cout<<" Reverse of the  given number is "<<reverse<<endl;
    
    if(reverse == n)
    {
        cout<<" The given number input by the user is Pallindrome . "<<endl;
    }
    
    else 
    cout<<" The number input is not a Pallindome ."<<endl;
}

int main()
{
    int a;
    cout<<" Enter the number to check for pallindrome."<<endl;
    cin>>a;
    
    Pallindrome(a);
    
    return 0;
    
    
}
