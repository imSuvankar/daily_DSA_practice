#include <bits/stdc++.h>
using namespace std;


void linearSearch(int arr[][3], int row, int col, int x) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] == x) {
                cout << x << " found in row: " << i << " & column: " << j;
                return;
            }
        }
    }
    cout << "not found";
}


void rowSum(int arr[][3], int row, int col) {
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) sum += arr[i][j];
        cout << "row " << i << " sum: " << sum << endl;
    }
}


void largestRow(int arr[][3], int row, int col) {
    int maxSum = INT_MIN;
    int maxRow = 0;

    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) sum += arr[i][j];
        if(sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }

    cout << "largest row: " << maxRow << "(sum: " << maxSum << ")";
}



int main() {

    int x[3][3] = {{1,2,3},{4,5,6},{7,8,-9}};
    int target = 10;
    linearSearch(x, 3, 3, target);
    rowSum(x, 3, 3);
    largestRow(x, 3,3);
}
