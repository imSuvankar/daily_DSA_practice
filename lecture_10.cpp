// python code for PAIR-SUM


// # def pairSum(arr, s):
// #     ans = []
// #     indexes = []
// #     for i in range(len(arr)-1):
// #         for j in range(i+1, len(arr)):
// #             if arr[i] + arr[j] == s: 
// #                 if f"{i}{j}" not in indexes:
// #                     ans.append([min(arr[i], arr[j]), max(arr[i], arr[j])])
// #                     indexes.append(f"{i}{j}")    
// #     ans.sort()
// #     return ans


// # print(pairSum([2, -3, 3, 3, -2], 0))



#include <iostream>
using namespace std;


void sortZeroOne(int arr[], int n) {

    int i = 0, j = n-1;

    while(i < j) {
        if(arr[i] == 0) i++;
        else if(arr[j] == 1) j--;
        else if(arr[i] == 1 && arr[j] == 0) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        } 
    }

    for(int _ = 0; _ < n; _++) cout << arr[_] << " ";
}



void sortZeroOneTwo(int arr[], int n) {

    int i = 0, j = n-1;

    while(i < j) {
        if(arr[i] == 0) i++;
        else if(arr[j] == 1) j--;
        else if(arr[i] == 1 && arr[j] == 0) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        } 
    }

    for(int _ = 0; _ < n; _++) cout << arr[_] << " ";
}




int main() {

    // int arr[] = {0,1,1,0,1,0,1,1,0};
    int arr[] = {0,1,1,0,1,2,0,2,1,1,0};

    int n = sizeof(arr)/sizeof(arr[0]);

    sortZeroOne(arr, n);
    // sortZeroOneTwo();

}