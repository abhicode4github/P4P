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


/////////////////////////////////////////////////////

The condition i*i <= n is checked in the loop for (int i = 2; i*i <= n; i++) for efficiency reasons when determining if a number is prime.

When checking if a number n is prime, you only need to check divisibility up to the square root of n. This is because if n has a divisor greater than its square root, then it must also have a corresponding divisor smaller than its square root.

For example, if n = a * b, and both a and b are greater than the square root of n, then their product a * b would be greater than n, which is not possible.

So, by checking up to the square root of n, you can efficiently determine if n is prime or not without unnecessary iterations beyond that point, which improves the performance of the code.
