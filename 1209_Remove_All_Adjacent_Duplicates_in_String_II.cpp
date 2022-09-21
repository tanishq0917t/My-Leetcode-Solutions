class Solution {
public:
   string removeDuplicates(string s, int k) {
      string ans = "";
      stack < pair<char, int> > st;
      int n = s.size();
      for(int i = 0; i <= n;){
         char x = s[i];
         if(!st.empty() && st.top().second == k)st.pop();
         if(i == n)break;
         if(st.empty() || st.top().first != x){
            st.push({x, 1});
            i++;
         } else {
            st.top().second++;
            i++;
         }
      }
      while(!st.empty()){
         pair <char, int> temp = st.top();
         while(temp.second--) ans += temp.first;
         st.pop();
      }
      reverse(ans.begin(), ans.end());
      return ans;
   }
};
