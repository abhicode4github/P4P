// Program to check a number is Prime or not 

#include<iostream>
using namespace std;

int isPrime(int n)
{
    if (n < 2)
    {
        return 0; 
    }
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1; 
}

int main()
{
    int Num;
    cout << "Enter a number: ";
    cin >> Num;
    
    if (isPrime(Num))
    {
        cout << "It is a Prime number." << endl;
    }
    else
    {
        cout << "It is not a prime number." << endl;
    }
    
    return 0;
}
