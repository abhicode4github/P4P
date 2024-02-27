// Program to find the second smallest element in an array 

#include<climits>
#include<iostream>
using namespace std;

void FindSecondSmallest(int arr[], int n) {
    int first, second;
    
    if (n < 2) {
        cout << "Invalid Input." << endl;
        return;
    }
    first = second = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }
    
    if (second == INT_MAX) {
        cout << "There is no second smallest element." << endl;
    }
    else {
        cout << "Second smallest element is: " << second << endl;
    }
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    FindSecondSmallest(arr, n);
    
    return 0;
}
