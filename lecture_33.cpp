#include <bits/stdc++.h>
using namespace std;


bool isSorted(int arr[], int size) {
    if(size <= 1) return true;
    else if(arr[0] > arr[1]) return false;
    else return isSorted(arr+1, size-1);
}


int sumOfArray(int arr[], int size, int ans) {
    if(size == 0) return ans;
    
    else if(size == 1) {
        ans += arr[0];
        return ans;
    }

    else {
        ans += arr[0];
        return sumOfArray(++arr, --size, ans);
    }
}


int linearSearch_Recursion(int arr[], int size, int index, int key) {
    if(size == 0) return -1;
    else if(arr[0] == key) return index;
    else return linearSearch_Recursion(++arr, --size, ++index, key);
}


int binarySearch(int arr[], int n, int key) {
    int l = 0;
    int r = n - 1;
    int mid = (l + r) / 2;

    while (l <= r) {
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) l = mid + 1;
        else r = mid - 1;
        mid = (l + r) / 2;
    }

    return -1;
}


int binarySearch_Recursion(int arr[], int key, int l, int r) {
    if(l > r) return -1;

    int mid = l + (r - l) / 2;
    if(arr[mid] == key) return mid;
    else if(arr[mid] < key) return binarySearch_Recursion(arr, key, mid+1, r);
    else return binarySearch_Recursion(arr, key, l, mid-1);
}



int main() {
    int arr[] = {1,3,7,9,11,12,45};

    // cout << (bool)isSorted(arr, size);
    // cout << sumOfArray(arr, sizeof(arr)/sizeof(arr[0]), 0);
    // cout << linearSearch_Recursion(arr, sizeof(arr)/sizeof(arr[0]), 0, 6);
    // cout << binarySearch(arr, sizeof(arr)/sizeof(arr[0]), 6);
    cout << binarySearch_Recursion(arr, 3, 0, sizeof(arr) / sizeof(arr[0]) -1);
}