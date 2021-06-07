class Solution {
public:
      bool isIdealPermutation(vector<int>& A) {
      int maxVal = -1;
      int n = A.size();
      for(int i = 0; i < n - 2; i++){
         maxVal = max(A[i], maxVal);
         if(maxVal > A[i + 2])
         return false;
      }
      return true;
   }
};
