#include <iostream>
// using std::cin, std::cout, std::endl;
using namespace std;

int main() {
    
    cout << "enter limit: ";
    int n; cin >> n;
    
    /*
    int i = 0;
    while(i < n) {
        int j = 0;
        while (j < n) {
            cout << j+1 << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    */


    /*
    int i = 0;
    while(i < n) {
        int j = n;
        while(j > 0) {
            cout << j << " ";
            j -= 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        int j = 0;
        while(j < n) {
            cout << i+1 << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0, x = 1;
    while(i < n) {
        int j = 0;
        while(j < n) {
            cout << x << " ";
            x += 1;
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        int j = 0;
        while(j <= i) {
            cout << "* ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        int j = 0;
        while(j <= i) {
            cout << i+1 << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0, x = 1;
    while(i < n) {
        int j = 0;
        while(j <= i) {
            cout << x << " ";
            j += 1;
            x += 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        int j = 0, x = i+1;
        while(j <= i) {
            cout << x << " ";
            x += 1;
            j += 1;
        }
        i += 1;
        cout << endl;
    }


    cout << endl;


    i = n;
    while(i > 0) {
        int j = 0;
        while(j <= n-i) {
            cout << n-i+j+1 << " ";
            j += 1;
        }
        i -= 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        int j = i+1;
        while(j > 0) {
            cout << j << " ";
            j -= 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        int j = 0;
        while(j < n) {
            cout << char(65 + j) << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        int j = 0;
        while(j < n) {
            cout << char(65 + j) << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0, t = 0;
    while(i < n) {
        int j = 0;
        while(j < n) {
            cout << char(65 + t) << " ";
            t += 1;
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        int j = i;
        while(j < n+i) {
            cout << char(65+j) << " ";
            j += 1;
        }
        i+= 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        int j = 0;
        while(j <= i) {
            cout << char(65 + i) << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0, x = 0;
    while(i < n) {
        int j = 0;
        while(j <= i) {
            cout << char(65 + x) << " ";
            x += 1;
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        int j = 0;
        while(j <= i) {
            cout << char(65 + i + j) << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    */



    /*
    int i = n;
    while(i > 0) {
        int j = 0;
        while(j <= n-i) {
            cout << char(65 + i + j - 1) << " ";
            j += 1;
        }
        i -= 1;
        cout << endl;
    }
    */


    /*
    int i = 0;
    while(i < n) {

        int j = n-i-1;
        while(j > 0) {
            cout << " " << " ";
            j -= 1;
        }

        int k = 0;
        while(k <= i) {
            cout << "*" << " ";
            k += 1;
        }

        i += 1;
        cout << endl;
    }
    */



    /*
    int i = n;
    while(i) {
        int j = i;
        while(j) {
            cout << "*" << " ";
            j -= 1;
        }
        i -= 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        
        int j = i;
        while(j > 0) {
            cout << " " << " ";
            j -= 1;
        }

        int k = n - i;
        while(k) {
            cout << "*" << " ";
            k -= 1;
        }

        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        
        int j = i;
        while(j) {
            cout << " " << " ";
            j -= 1;
        }

        int k = n - i;
        while(k) {
            cout << i+1 << " ";
            k -= 1;
        }

        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {

        int j = n-i-1;
        while(j) {
            cout << " " << " ";
            j -= 1;
        }

        int k = 0;
        while(k <= i) {
            cout << i+1 << " ";
            k += 1;
        }

        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {
        
        int j = i;
        while(j) {
            cout << " " << " ";
            j -= 1;
        }

        int k = 0;
        while(k < n-i) {
            cout << k + i + 1 << " ";
            k += 1;
        }

        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0, x = 1;
    while(i < n) {

        int j = n-i-1;
        while(j) {
            cout << " " << " ";
            j -= 1;
        }

        int k = 0;
        while(k <= i) {
            cout << x << " ";
            k += 1;
            x += 1;
        }

        i += 1;
        cout << endl;
    }
    */



    /*
    int i = 0;
    while(i < n) {

        int j = n-i-1;
        while(j) {
            cout << " " << " ";
            j -= 1;
        }

        int k = 0;
        while(k <= i) {
            cout << k+1 << " ";
            k += 1;
        }

        int l = i;
        while(l) {
            cout << l << " ";
            l -= 1;
        }

        i += 1;
        cout << endl;
    }
    */



    // DABANGG PATTERN
    
    int i = 0;
    while(i < n) {

        int j = 0;
        while(j < n-i) {
            cout << j+1 << " ";
            j += 1;
        }

        int k = i;
        while(k) {
            cout << "*" << " ";
            k -= 1;
        }

        int l = i;
        while(l) {
            cout << "*" << " ";
            l -= 1;
        }

        int m = n-i;
        while(m) {
            cout << m << " ";
            m -= 1;
        }

        i += 1;
        cout << endl;
    }
}