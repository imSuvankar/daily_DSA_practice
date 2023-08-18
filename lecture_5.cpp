#include <iostream>
using namespace std;

int main() {
    cout << "enter a number to check prime or not: ";
    int n; cin >> n;

    int flag = 1;
    for(int i = 2; i < n; i++) {
        if(n % i == 0){
            flag = 0;
            break;
        }
    }

    flag == 1 && n > 1 ? cout << "prime" : cout << "not prime";
}