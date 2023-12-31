#include <bits/stdc++.h>
using namespace std;

// https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {

    // FIRST OCC.
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int first = -1;

    while(start <= end) {
        if(arr[mid] == k) {
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid] < k) start = mid + 1;
        else end = mid - 1;
        mid = start + (end - start) / 2;
    }
    
    
    // LAST OCC.
    start = 0;
    end = n-1;
    mid = start + (end - start) / 2;
    int last = -1;

    while(start <= end) {
        if(arr[mid] == k) {
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid] < k) start = mid + 1;
        else end = mid - 1;
        mid = start + (end - start) / 2;
    }


    return {first, last};
}


// https://leetcode.com/problems/peak-index-in-a-mountain-array/
int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size();
    int mid = start + (end - start) / 2;

    while(start < end) {
        if(arr[mid] < arr[mid+1]) start = mid + 1;
        else end = mid;
        mid = start + (end - start) / 2;
    }

    return mid;
}


int main() {
    vector<int> nums;
    
    nums = {0, 0, 1, 1, 2, 2, 2, 2};
    cout << firstAndLastPosition(nums, nums.size(), 2).first << " " << firstAndLastPosition(nums, nums.size(), 2).second << endl;
    cout << "Total number of occurrence: " << firstAndLastPosition(nums, nums.size(), 2).second - firstAndLastPosition(nums, nums.size(), 2).first + 1 << endl;

    nums = {3, 5, 9, 6, 2, 1};
    cout << "Peak index is: " << peakIndexInMountainArray(nums);
}