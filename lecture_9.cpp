#include <iostream>
using namespace std;



void sumOfArray() {
    cout << "enter the size of array: ";
    int size; cin >> size;

    int arr[size];
    cout << "enter " << size << " elements in array:";
    for(int i = 0; i < size; i++) cin >> arr[i];

    int sum = 0;
    for(int i = 0; i < size; i++) sum += arr[i];
    
    cout << "sum of array is: " << sum << endl;
}



void linearSearch() {
    cout << "enter the size of array: ";
    int n; cin >> n;

    cout << "enter " << n << " elements in array: ";
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "enter the key: ";
    int key; cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "found at index number: " << i;
            return;

        }
    }
    cout << "key not present";
}



void reverseArray() {
    cout << "enter the size of array: ";
    int n; cin >> n;

    cout << "enter " << n << " elements in array: ";
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    cout << "reversed array is:\n";
    for(int i: arr) cout << i << " ";
}



void swapAlternate() {
    cout << "enter the size of array: ";
    int n; cin >> n;

    cout << "enter " << n << " elements in array: ";
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n-1; i+=2) {
        // int temp = arr[i];
        // arr[i] = arr[i+1];
        // arr[i+1] = temp;
        swap(arr[i], arr[i+1]);
    }

    cout << "new array is:\n";
    for(int i: arr) cout << i << " ";
}



void findUnique() {
    cout << "enter the size of array: ";
    int n; cin >> n;

    cout << "enter " << n << " elements in array: ";
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];


    for(int i = 0; i < n; i++) {
        bool flag = true;

        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            else {
                if (arr[j] == arr[i]) {
                    flag = false;
                    break;
                }
            }
        }

        if(flag == true) cout << arr[i] << " is an unique element\n"; 
    }   
}



void findDuplicate() {
    cout << "enter the size of array: ";
    int n; cin >> n;

    cout << "enter " << n << " elements in array: ";
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];


    for(int i = 0; i < n; i++) {
        bool flag = false;

        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            else {
                if (arr[j] == arr[i]) {
                    flag = true;
                    break;
                }
            }
        }

        if(flag == true) {
            cout << arr[i] << " is a duplicate element\n"; 
            return;
        }
    }
}



// void arrayIntersection() {
//     cout << "enter the size of array 1: ";
//     int n1; cin >> n1;

//     cout << "enter " << n1 << " elements in array 1: ";
//     int arr1[n1];
//     for(int i = 0; i < n1; i++) cin >> arr1[i];

//     cout << "enter the size of array 2: ";
//     int n2; cin >> n2;

//     cout << "enter " << n2 << " elements in array 1: ";
//     int arr2[n2];
//     for(int i = 0; i < n2; i++) cin >> arr2[i];


//     for(int i = 0; i < n1; i++) {
//         bool flag = false;
        
//         for(int j = 0; j < n2; j++) {
//             if(arr1[i] == arr2[j]) {
//                 flag = true;
//                 break;
//             }
//         }
//         if(flag == true) cout << arr1[i] << " is a common element\n"; 
//     }
// }



void pairSum() {
    cout << "enter the size of array: ";
    int n; cin >> n;

    cout << "enter " << n << " elements in array: ";
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n-1; i+=2) cout << arr[i] + arr[i+1] << " ";
}



void tripletSum() {
    cout << "enter the size of array: ";
    int n; cin >> n;

    cout << "enter " << n << " elements in array: ";
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 2; i < n; i+=3) cout << arr[i] + arr[i-1]  + arr[i-2] << " ";
}



void sortZeroAndOne() {
    cout << "enter the size of array: ";
    int n; cin >> n;

    cout << "enter " << n << " elements in array (only 0s & 1s): ";
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];


    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i : arr) cout << i << " ";
}




void arrayIntersection() {
    cout << "enter the size of array 1: ";
    int n1; cin >> n1;

    cout << "enter " << n1 << " elements in array 1: ";
    int arr1[n1];
    for(int i = 0; i < n1; i++) cin >> arr1[i];

    cout << "enter the size of array 2: ";
    int n2; cin >> n2;

    cout << "enter " << n2 << " elements in array 1: ";
    int arr2[n2];
    for(int i = 0; i < n2; i++) cin >> arr2[i];
   
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr2[j] << " ";
                arr2[j] = INT8_MIN;
                break;
            }
        }
    }
}








int main() {
    // sumOfArray();
    // linearSearch();
    // reverseArray();
    // swapAlternate();
    // findUnique();
    // findDuplicate();
    arrayIntersection();
    // pairSum();
    // tripletSum();
    // sortZeroAndOne();
}
