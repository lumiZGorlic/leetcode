class Solution:
    def maximumSwap(self, num: int) -> int:
        num = list( map(int, list(str(num))) ) # make list of ints

        dig2Idx = defaultdict(list)
        for i, n in enumerate(num): dig2Idx[n].append(i)

        for i, n in enumerate(num):
            for dig in range(9, n, -1): # pick biggest digit possible that's bigger than n
                if dig in dig2Idx:
                    maxIdx = -1
                    # max index so e.g. in 9299 '2' gets swapped with the last '9' so we get 9992
                    for idx in reversed(dig2Idx[dig]):
                        if idx > i:
                            maxIdx = idx
                            break

                    if maxIdx != -1:
                        num[i], num[maxIdx] = num[maxIdx], num[i]
                        return int(''.join( map(str, num) ))

        return int(''.join(map(str, num)))
