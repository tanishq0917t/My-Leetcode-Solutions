#include<bits/stdc++.h>
class Solution {
public:
  int longestValidParentheses(string s) {
    if(s.size() < 2) return 0;
    vector<int> dp (s.length(), 0);
    for(int i = 1; i < s.length(); i++){
      if(s[i] == ')'){
        if(s[i-1] == '('){
          dp[i] = 2 + ((i-2 >= 0)? dp[i-2] : 0);
        }
        else{
          if (i-dp[i-1]-1 >= 0 && s[i-dp[i-1]-1] == '('){
            int prev = (i-dp[i-1]-2 >= 0) ? (dp[i-dp[i-1]-2]) : 0;
            dp[i] = dp[i-1] + 2 + prev;
          }
        }
      }
    }
    return *(max_element(dp.begin(), dp.end()));
  }
};
