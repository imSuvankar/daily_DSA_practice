#include <bits/stdc++.h>
using namespace std;


string reverseString(string str) {
    int i = 0, j = str.length()-1;
    while(i < j) {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    return str;
}


string reverseString_Recursion(string str, int startIndex, int endIndex) {
    if(startIndex >= endIndex) return str;
    swap(str[startIndex], str[endIndex]);
    return reverseString_Recursion(str, ++startIndex, --endIndex);
}


bool checkPalindrome(string str) {
    int i = 0, j = str.length()-1;
    while(i < j) {
        if(str[i] != str[j]) return false;
        i++;
        j--;
    }
    return true;
}


bool checkPalindrome_Recursion(string str, int startIndex, int endIndex) {
    if(startIndex < endIndex) {
        if(str[startIndex] != str[endIndex]) return false;
        else return checkPalindrome_Recursion(str, ++startIndex, --endIndex);
    }
    return true;
}


bool checkPalindrome_Recursion(int n) {
    if(n > 9) {
        string temp = to_string(n);
        int mid = temp.length() / 2;

        if(temp.length() % 2 == 0 && temp[mid-1] != temp[mid]) return false;
        else if(temp.length() % 2 == 1 && temp[mid-1] != temp[mid+1]) return false;
        else return checkPalindrome_Recursion(stoi(temp.substr(0, mid) + temp.substr(mid+1)));
    }
    return true;
}


int power_Recursion(int n, int m) {
    static int ans = 1;
    if(m == 0) return ans;

    else {
        ans *= n;
        return power_Recursion(n, --m);
    }
}


int power_Optimized_Recursion(int n, int m) {
    static int ans = 1;
    if(m == 0) return ans;

    else {
        int temp = power_Optimized_Recursion(n, m/2);
        ans = m % 2 == 0 ? temp * temp : n * temp * temp;
        return ans;
    }
}




int main() {
    string str1 = "abcde";
    // cout << reverseString(str) << endl;
    // cout << reverseString_Recursion(str, 0, str.length()-1) << endl;

    string str2 = "abcdcba";
    // cout << checkPalindrome(str2);
    // cout << checkPalindrome_Recursion(str2, 0, str2.length()-1);

    int n = 12325;
    // cout << checkPalindrome_Recursion(n);

    int a = 2, b = 10;
    // cout << power_Recursion(a, b);
    cout << power_Optimized_Recursion(a, b);
}