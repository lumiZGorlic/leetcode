class Solution:
    def combinationSum(self, cands: List[int], target: int) -> List[List[int]]:
        ln = len(cands)
        ret = []

        def helper(idx, cur, curSum):
            if idx >= ln: return

            curCp = cur[:]

            # kind of doing do-while

            helper(idx+1, curCp, curSum)

            while curSum <= target:
                if curSum == target:
                    ret.append(tuple(curCp))
                    return

                curSum += cands[idx]
                curCp.append(cands[idx])

                if curSum < target: helper(idx+1, curCp, curSum)
            pass

        helper(0, [], 0)
        return ret
        pass

