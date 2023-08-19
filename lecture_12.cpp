#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) start = mid+1;
        else end = mid-1;
        mid = start + (end - start) / 2;
    }

    return -1;
}



int binarySearch(vector<int> vect, int key) {
    int start = 0;
    int end = vect.size();
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (vect[mid] == key) return mid;
        else if (vect[mid] < key) start = mid + 1;
        else end = mid - 1;
        mid = start + (end - start) / 2;
    }
    
    return -1;
}



int main() {
    int arr[] = {1,2,3,4,5,6,7};
    cout << binarySearch(arr, sizeof(arr)/sizeof(arr[0]), 4) << endl;

    vector<int> vect = {1,2,3,4,5,6,7};
    cout << binarySearch(vect, 6) << endl;
}