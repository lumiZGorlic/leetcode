class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        sm = sum(nums)
        if sm % 2: return False

        @lru_cache (maxsize = None)
        def f(todo, idx):
            if idx >= len(nums) or todo < 0: return False
            elif nums[idx] == todo: return True
            else: return f(todo - nums[idx], idx+1) or f(todo, idx+1)
            pass
        
        return f(sm//2, 0)
        pass
