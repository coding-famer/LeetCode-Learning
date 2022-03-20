class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        thes = set(nums)
        for i in thes:
            if nums.count(i)%2 != 0:
                return False
        return True
