#include <bits/stdc++.h>
using namespace std;


// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
class BookAllocation {
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



// https://www.codingninjas.com/studio/problems/painter-s-partition-problem_1089557
class PaintersPartition {
private:
    bool isPossible(vector<int> arr, int k, int mid) 
    {
        int painter = 1;
        int board = 0;

        for(int i : arr) {
            if(board + i <= mid) board += i;
            else {
                painter++;
                if(painter > k || i > mid) return false;
                board = i;
            }
        }

        return true;
    }

public:
    int findLargestMinDistance(vector<int> &boards, int k)
    {
        int start = 0;
        int end = accumulate(boards.begin(), boards.end(), 0);
        int mid = start + (end - start) / 2;
        int ans = -1;

        while(start <= end) {
            if(isPossible(boards, k, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else start = mid + 1;
            mid = start + (end - start) / 2;
        }

        return ans;
    }
};



// https://www.codingninjas.com/studio/problems/aggressive-cows_1082559
class AggresiveCows {
private:
    bool isPossible(vector<int> arr, int cows, int mid) 
    {
        int currCow = 1;
        int lastPos = arr[0];

        for(int i : arr) {
            if(i - lastPos >= mid) {
                currCow++;
                if(currCow == cows) return true;
                lastPos = i;
            }
        }

        return false;
    }

public:
    int aggressiveCows(vector<int> &stalls, int k)
    {
        sort(stalls.begin(), stalls.end());
        int start = 0;
        int end = *max_element(stalls.begin(), stalls.end()) - *min_element(stalls.begin(), stalls.end());
        int mid = start + (end - start) / 2;
        int ans = -1;

        while (start <= end) {
            if(isPossible(stalls, k, mid)) {
                ans = mid;
                start = mid + 1;
            }
            else end = mid - 1;
            mid = start + (end - start) / 2;
        }

        return ans;
    }
};



int main() {
    vector<int> arr; int k;

    // arr = {3,2,2,4,1,4};
    // k = 3;
    // cout << BookAllocation().shipWithinDays(arr, k) << endl;

    // arr = {2,1,5,6,2,3};
    // k = 2;
    // cout << PaintersPartition().findLargestMinDistance(arr, k) << endl;

    arr = {0,3,4,7,10,9};
    k = 4;
    cout << AggresiveCows().aggressiveCows(arr, k);
}