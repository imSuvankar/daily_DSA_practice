#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;

    while(start <= end) {
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) start = mid+1;
        else end = mid-1;
        mid = start + (end - start) / 2;
    }

    return -1;
}


int main() {
    int arr[] = {1,2,3,4,5,6,7};
    cout << binarySearch(arr, sizeof(arr)/sizeof(arr[0]), 5);
}