class Solution:
    def maximumSum(self, arr: List[int]) -> int:
        ln = len(arr)
        if ln == 1: return arr[0]

        mx = arr[0]
        left = [mx]
        for i in range(1, ln):
            mx = max(mx + arr[i], arr[i])
            left.append(mx)

        mx = arr[-1]
        right = [mx]
        for i in range(ln-2, -1, -1):
            mx = max(mx + arr[i], arr[i])
            right.append(mx)
        right.reverse()

        left.insert(0, 0)
        right.append(0)

        ret = arr[0]
        for i in range(ln):
            mx = left[i] + right[i+1]
            if arr[i] > 0: mx += arr[i]
            ret = max(ret, mx)
        ret = max(ret, left[ln])

        return ret
        pass
