#include <bits/stdc++.h>
using namespace std ;
 
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int lp = 0, rp = n, i = 0;
        vector<int> answer(2 * n, 0);

        while (lp < n and rp < 2 * n) {
            answer[i] = nums[lp];
            answer[i + 1] = nums[rp];
            i = i + 2;
            lp++, rp++;
        }

        return answer;
    }
};