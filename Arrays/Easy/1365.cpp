#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size() , count = 0 ;
        vector<int>ans ;

        for(int i = 0 ; i < n ; i++){
            count = 0 ;
            for(int j = 0 ; j < n ; j++){
                if(i != j and nums[j] < nums[i]){
                    count++ ;
                }
            }
            ans.push_back(count) ;
        }


        return ans ;

    }
};