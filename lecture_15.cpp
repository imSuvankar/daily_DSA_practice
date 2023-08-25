#include <bits/stdc++.h>
using namespace std;


// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
class BookAllocationProblem {
private:
    bool isPossible(vector<int> arr, int days, int mid) {
        int currDay = 1;
        int load = 0;

        for(int i : arr) {
            if(load + i <= mid) load += i;
            else {
                currDay++;
                if(currDay > days || i > mid) return false;
                load = i;
            }
        }

        return true;
    }


public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(), weights.end());
        int end = accumulate(weights.begin(), weights.end(), 0);
        int mid = start + (end - start) / 2;
        int ans = -1;

        while (start <= end) {
            if(isPossible(weights, days, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else start = mid + 1;
            mid = start + (end - start) / 2;
        }

        return ans;
    }
};




int main() {
    vector<int> arr;

    arr = {3,2,2,4,1,4};
    int k = 3;
    cout << BookAllocationProblem().shipWithinDays(arr, k);
}