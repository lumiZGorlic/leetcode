class Solution:
    def pancakeSort(self, arr: List[int]) -> List[int]:
        ln = len(arr)
        ret = []

        def flip(idx):
            for i in range((idx//2) + 1):
                arr[i], arr[idx-i] = arr[idx-i], arr[i]
            pass

        for i in range(ln-1, 0, -1):
            mx, idx = arr[0], 0

            for j in range(1, i+1):
                if arr[j] > mx:
                    mx = arr[j]
                    idx = j
 
            flip(idx)
            flip(i)
            ret.append(idx+1)
            ret.append(i+1)

        return ret
