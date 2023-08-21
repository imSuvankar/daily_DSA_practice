#include <bits/stdc++.h>
using namespace std;


// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
int findMinInRotatedSorted(vector<int> arr) {

    int start = 0;
    int end = arr.size()-1;
    
    if(arr[start] <= arr[end]) return arr[start];
    
    int mid = start + (end - start) / 2;

    while(start < end) {
        if(arr[mid] >= arr[0]) start = mid + 1;
        else end = mid;
        mid = start + (end - start) / 2;
    }

    return arr[mid];
}



// https://leetcode.com/problems/peak-index-in-a-mountain-array/
int peakInAMountainArray(vector<int> arr) {
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start) / 2;

    while (start < end) {
        if (arr[mid] < arr[mid+1]) start = mid + 1;
        else end = mid;
        mid = start + (end - start) / 2;
    }

    return arr[mid];
}



int main() {
    vector<int> nums;

    // nums = {4,5,6,7,0,1,2};
    // cout << findMinInRotatedSorted(nums) << endl;

    nums = {1,2,3,4,5,4,0};
    cout << peakInAMountainArray(nums) << endl;
}
