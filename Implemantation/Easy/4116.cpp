#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size() , c_a = 0 , c_b = 0 ;
        vector<string>answer(n);


        // Conditions .
        for(int i = 0 ; i < n ; i++){
            // Conditions
            if(rain[i] == 0){
                answer[i] = "None" ;
            }
            else if (i != n-1){
                if(rain[i] == 1 and rain[i+1] ==1){
                    if(c_a <= c_b){
                        answer[i] = "Alice" ;
                        c_a ++ ;
                    }
                    else{
                        answer[i] = "Bob" ;
                        c_b++ ;
                    }
                }
                else if(rain[i] == 1 and rain[i+1] == 0){
                    answer[i] = "Bob" ;
                    c_b++ ;
                }
            }
            else if (i == n-1 and rain[i] == 1){
               answer[i] = "Bob" ;
            }
        }

        return answer ;


    }
};