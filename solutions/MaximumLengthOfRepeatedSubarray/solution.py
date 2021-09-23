class Solution(object):
    def findLength(self, nums1, nums2):
        ln1, ln2 = len(nums1), len(nums2)
        dp = [[0 for _ in range(ln2+1)] for _ in range(ln1+1)]
        ret = 0

        for i in range(ln1):
            for j in range(ln2):
                if nums1[i] == nums2[j]:
                    dp[i+1][j+1] = dp[i][j]+1
                    ret = max(ret, dp[i+1][j+1])
                else:
                    dp[i+1][j+1] = 0        

        return ret
