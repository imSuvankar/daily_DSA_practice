#include <iostream>
using std::cin, std::cout, std::endl;

int main() {

    /*
    std::cout << "Input your character: ";
    char a; std::cin >> a;

    if(48 <= a && a <= 57) std::cout << "number";
    else if (65 <= a && a <= 90) std::cout << "caps";
    else if (97 <= a && a <= 122) std::cout << "small";
    else std::cout << "others";
    */



    /*
    cout << "enter number: ";
    int n; cin >> n;

    if (n < 0) cout << "enter positive number" << endl;

    else if (n < 2) cout << "not prime" << endl;

    else {
        int i = 2, flag = 0;
        while (i < n) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
            i += 1;
        }
        flag == 1 ? cout << "not prime" << endl : cout << "prime" << endl;
    }
    */



    /*
    cout << "enter row & col number: ";
    int n; cin >> n;

    int i = 0;
    while(i < n) {
        int j = 0;
        while (j < n) {
            cout << "* ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    */




    cout << "enter limit: ";
    int n; cin >> n;

    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            cout << j+1 << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
}
