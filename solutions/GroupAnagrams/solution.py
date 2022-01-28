class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp = defaultdict(list)

        for s in strs:
            mp[tuple(sorted(list(s)))].append(s)

        return [value for key, value in mp.items()]
        pass
