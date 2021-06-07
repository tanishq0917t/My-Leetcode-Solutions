class Solution {
public:
    int countBinarySubstrings(string s) {
      int cnt[2] = { 0 };
      int res = 0;
      for (int i = 0; i < s.length(); ++i) {
         int num = s[i] - '0';
         if (i == 0 || s[i] != s[i - 1])
            cnt[num] = 0;
         ++cnt[num];
         if (cnt[num] <= cnt[1 - num])
            ++res;
      }
      return res;
   }
};
