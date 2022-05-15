class Solution:
    def minSwapsCouples(self, row: List[int]) -> int:
        from collections import defaultdict
        num2i = defaultdict(int)

        for i, v in enumerate(row):
            num2i[v] = i
        n = len(row)
        res = 0

        def swap(i, j):
            row[i], row[j] = row[j], row[i]
            num2i[row[j]] = j
            num2i[row[i]] = i
            nonlocal res
            res += 1

        for i in range(1, n, 2):
            partner = row[i] - 1
            if row[i] % 2 == 0:
                partner = row[i] + 1
            if partner == row[i - 1]:
                continue
            swap(i-1, num2i[partner])

        return res
