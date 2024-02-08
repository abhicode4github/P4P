#include<iostream> 

using namespace std;

void armstrong(int n)
{
    int secondNumber = 0;
    int temp = n;
    int elements;
    
    while(temp !=0)
    {
        elements = temp % 10;
        secondNumber = secondNumber + elements*elements*elements;
        temp = temp / 10;
    }
    
    cout<<" The number we got as a result is "<<secondNumber<<endl;
    
    if(secondNumber == n)
    cout<<" The number input by the user is an armstrong number ."<<endl;
    else 
    cout<<" The number input by the user is not an armstrong number."<<endl;
}

int main()
{
    int n;
    cout<<" user please enter a number to check for armstrong."<<endl;
    cin>>n;
    
    armstrong(n);
    
    return 0;
}
