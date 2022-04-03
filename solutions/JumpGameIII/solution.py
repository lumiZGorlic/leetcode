class Solution:
    def canReach(self, arr: List[int], start: int) -> bool:
        seen = set()

        def f(idx):
            if idx in seen or idx < 0 or idx >= len(arr): return False
            if not arr[idx]: return True

            seen.add(idx)
            return f(idx + arr[idx]) or f(idx - arr[idx])
            pass

        return f(start)
        pass        
