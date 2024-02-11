// Smallest and largest element in an array . 

#include<iostream> 
using namespace std;

void findMinMax(int arr[],int n)
{
    int mini=arr[0];
    int maxi=arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
        else if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    
    cout<<"Min : "<<mini<<endl;
    cout<<"Max : "<<maxi<<endl;
}

int main()
{
    int n;
    cout<<"Enter how many elements " ;
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter the elements : "<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int N = sizeof(arr)/sizeof(arr[0]);
    
    findMinMax(arr,N);
    
    return 0;
}
