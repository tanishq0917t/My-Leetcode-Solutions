class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        a=sorted(nums1+nums2)
        l=len(a)
        #print(l)
        if l%2:
            return a[l//2]
        return (a[l//2]+a[(l//2)-1])/2
