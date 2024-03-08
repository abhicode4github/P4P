write a c++ program , to find a peak element in an array . An element is a peak if it is greater than or equal to its neighbours , 
Example , Input : [1,2,3,1] , Output : 2 (index of 3) , do not use any inbuilt functions , elements input by the user . 




#include <iostream>
#include <vector>

using namespace std;

int findPeakElement(const vector<int>& nums) {
    int n = nums.size();
    if (n == 1) {
        return 0; // If there's only one element, it's the peak
    }

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if mid is greater than its neighbors
        if (nums[mid] > nums[mid + 1]) {
            right = mid; // Move to the left side
        } else {
            left = mid + 1; // Move to the right side
        }
    }

    // At the end of the loop, left and right will be pointing to the same index, which is the peak element
    return left;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int peakIndex = findPeakElement(nums);
    cout << "Output: " << peakIndex << " (index of " << nums[peakIndex] << ")" << endl;

    return 0;
}
