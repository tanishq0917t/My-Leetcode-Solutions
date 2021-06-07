class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        a=sorted(nums)
        return (a[len(a)-1]-1)*(a[len(a)-2]-1)
