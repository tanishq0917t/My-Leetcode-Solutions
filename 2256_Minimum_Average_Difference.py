class Solution:
	def minimumAverageDifference(self, nums: List[int]) -> int:
		miniAverage = float("inf")
		left = 0
		right = 0
		s = sum(nums)
		res = 0
		for i, num in enumerate(nums):
			left += num
			right = s - left
			if i != len(nums) - 1:
				if abs(left // (i + 1) - right // (len(nums) - i - 1)) < miniAverage:
					miniAverage = abs(left // (i + 1) - right // (len(nums) - i - 1))
					res = i
			else:
				if left // (i + 1) < miniAverage:
					res = i
		return res
