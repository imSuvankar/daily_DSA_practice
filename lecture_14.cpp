#include <bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> arr, int start, int end, int key) {
    int mid = start + (end - start) / 2;

    while(start <= end) {
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) start = mid + 1;
        else end = mid - 1;
        mid = start + (end - start) / 2;
    }

    return -1;
}



// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
int findMinInRotatedSorted(vector<int> arr) {
    int start = 0;
    int end = arr.size()-1;
    
    if(arr[start] <= arr[end]) return start;
    
    int mid = start + (end - start) / 2;

    while(start < end) {
        if(arr[mid] >= arr[0]) start = mid + 1;
        else end = mid;
        mid = start + (end - start) / 2;
    }

    return mid;
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



// https://leetcode.com/problems/sqrtx/
int sqrtOfX(int x) {
    int start = 0;
    int end = x;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end) {
        if(mid * mid == x) return mid;
        else if(mid * mid > x) end = mid - 1;
        else {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}



double sqrtWithPrecision(int x, int decimalPlace) {

    // getting base(integer) value
    int start = 0;
    int end = x;
    int mid = start + (end - start) / 2;
    double ans = -1;

    while(start <= end) {
        if(mid * mid == x) {
            ans = mid;
            break;
        }
        else if(mid * mid > x) end = mid - 1;
        else {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }


    // getting decimal values
    double factor = 1;

    for(int i = 0; i < decimalPlace; i++) {
        factor /= 10;
        for(double j = ans; j*j < x; j+=factor) ans = j;
    }

    return ans;
}



// https://leetcode.com/problems/search-in-rotated-sorted-array/
int searchInRotatedSortedArray(vector<int> arr, int key) {

    if(arr.size() == 1) return (arr[0] == key) ? 0 : -1;

    int minEle = findMinInRotatedSorted(arr);
    return (arr[minEle] <= key && key <= arr[arr.size()-1]) ?
        binarySearch(arr, minEle, arr.size()-1, key) :
        binarySearch(arr, 0, minEle - 1, key) ;
}



int main() {
    vector<int> nums;

    // nums = {4,5,6,7,0,1,2};
    // cout << findMinInRotatedSorted(nums) << endl;

    // nums = {1,2,3,4,5,4,0};
    // cout << peakInAMountainArray(nums) << endl;

    // int n = 63;
    // cout << sqrtOfX(n) << endl;
    // cout << sqrtWithPrecision(n, 5) << endl;

    nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout << searchInRotatedSortedArray(nums, target);
}
