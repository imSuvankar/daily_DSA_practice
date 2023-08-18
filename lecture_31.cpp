#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    // BASE CONDITION
    if(n == 0) return 1;

    // RECURSIVE RELATION
    return n * fact(n-1);
}

int power(int a, int b) {
    // BASE CONDITION
    if(b == 0) return 1;

    // RECURSIVE FUNCTION
    return a * power(a, b - 1);
}


int main() {
    // cout << "enter number: ";
    // int n; cin >> n;
    // cout << fact(n);


    cout << "enter numbers: ";
    int a, b; cin >> a >> b; 
    cout << power(a, b);
}