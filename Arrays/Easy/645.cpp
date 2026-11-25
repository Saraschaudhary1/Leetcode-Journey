#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size() , start = 0 , end = 0 ;
        int missing = n * (n+1) / 2 ;
        vector<int>ans ;

        //Finding the start indx and end indx of the repeated num  .
        for(int i = 0 ; i < n-1 ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(nums[i] == nums[j]){
                    start = i , end = j ;
                    break ;
                }
            }
            
        }
        
        // Finding the missing num.
        for(int i = 0 ; i < n ; i++){
            if(i != end){
                missing -= nums[i] ;
            }
        }

        ans.push_back(nums[start]) ;
        ans.push_back(missing) ;

        return ans ;

    }
};