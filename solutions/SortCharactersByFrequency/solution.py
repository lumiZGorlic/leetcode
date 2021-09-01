class Solution:
    def frequencySort(self, s: str) -> str:
        ret = []
        for v, k in sorted([[v, k] for k, v in Counter(s).items()], reverse = True): ret += [k]*v
        return ''.join(ret)
        pass
