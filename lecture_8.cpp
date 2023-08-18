#include <iostream>
using namespace std;

/*
int main() {

    // // CALCULATIR USING SWITCH-CASE

    // cout << "enter first number: ";
    // int a; cin >> a;

    // cout << "enter second number: ";
    // int b; cin >> b;

    // cout << "enter operation: ";
    // char c; cin >> c;

    // switch(c) {
    //     case '+': cout << a + b; break;
    //     case '-': cout << a - b; break;
    //     case '*': cout << a * b; break;
    //     case '/': cout << a / b; break; 
    //     case '%': cout << a % b; break;
    //     default: cout << "choose among +, -, *, /, %";
    // }


    
    // NOTE COUNT PROGRAM

    cout << "enter total amount: ";
    int n; cin >> n;

    cout << "100 rupees note: " << n / 100 << endl;
    n %= 100;

    cout << "50 rupees note: " << n / 50 << endl;
    n %= 50;

    cout << "20 rupees note: " << n / 20 << endl;
    n %= 20;

    cout << "1 rupees note: " << n / 1 << endl;
    

}
*/



int factorial(int n) {
    int ans = 1;
    for(int i = n; i >= 1; i--) ans *= i;
    return ans;
}



int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n-r));
}



int isPrime() {
    cout << "enter number to check: ";
    int n; cin >> n;
    bool ans = 0;

    if(n < 2) return 0;

    else {
        for(int i = 2; i <= n/2; i++) {
            if(n % i == 0) return 0;
        }
        return 1;
    }
}



int AP() {
    cout << "enter n: ";
    int n; cin >> n;
    return 3 * n + 7;
}



int setBitCount() {
    cout << "enter first decimal number: ";
    int a; cin >> a;
    
    cout << "enter second decimal number: ";
    int b; cin >> b;

    int bits = 0;

    while(a || b) {
        int a_bit = a & 1;
        if(a_bit) bits++;
        a /= 2;

        int b_bit = b & 1;
        if(b_bit) bits++;
        b /= 2;
    }

    return bits; 
}



int fibonacci() {
    cout << "enter index number: ";
    int n; cin >> n;

    int fir = 0;
    int sec = 1;
    int temp;

    if(n == 1) return fir;

    else if(n == 2) return sec;

    else {
        for(int i = 2; i < n; i++) {
            temp = fir + sec;
            fir = sec;
            sec = temp;
        }
        return temp;
    }
}



int main() {
    
    // cout << nCr(8, 2);

    // isPrime() ? cout << "prime" : cout << "not prime";

    // cout << AP();

    // cout << setBitCount();

    cout << fibonacci();
    
}