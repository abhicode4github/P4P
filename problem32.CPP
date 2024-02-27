// Program to calculate sum of elements in an array 

#include<iostream>
using namespace std;

int FindSum(int arr[],int n)
{
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter value of n :";
    cin>>n;
    
    int arr[n];
    
    cout<<"enter "<<n<<" elements.";
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"sum :"<<FindSum(arr,n);
    
    return 0;
    
    
    
}
