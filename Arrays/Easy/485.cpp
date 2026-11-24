#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), current_max_ones = 0, max_ones = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                current_max_ones++;
                max_ones = max(max_ones, current_max_ones);
            }
            else{
                current_max_ones = 0 ;
            }
        }

        return max_ones;
    }
};