#include <bits/stdc++.h>
using namespace std;


void reachHome(int a, int b) {
    cout << a << " " << b << endl;

    if(a == b) {
        cout << "reached home" << endl;
        return;
    } 

    reachHome(++a, b);
}


int fibWithForLoop(int n) {
    int f = 0, s = 1;

    if(n == 0) return f;
    else if(n == 1) return s;
    else {
        for(int i = 2; i < n; i++) {
            int temp = f + s;
            f = s;
            s = temp;
        }
        return s;
    }
}


int fibWithRec(int n) {
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return fibWithRec(n-1) + fibWithRec(n-2);
}


void sayDigits(int n) {
    if(n == 0) return;
    else {
        // string digits[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        
        // map<int, string> digits = {
        //     {0, "Zero"}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        //     {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
        // };

        pair<int, string> digits[] = {
            {0, "Zero"}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
            {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
        };
        
        int dig = n % 10;
        n /= 10;
        sayDigits(n);
        cout << digits[dig].second << " ";
    }
}


int main() {
    // reachHome(1, 5);
    // cout << fibWithForLoop(5);
    // cout << fibWithRec(5);
    sayDigits(100);
}