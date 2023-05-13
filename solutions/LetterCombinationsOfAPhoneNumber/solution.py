
class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        if not len(digits): return []

        mp = { '2': ['a', 'b', 'c'], '3': ['d', 'e', 'f'], '4': ['g', 'h', 'i'], '5': ['j', 'k', 'l'], '6': ['m', 'n', 'o'], '7': ['p', 'q', 'r', 's'], '8': ['t', 'u', 'v'], '9': ['w', 'x', 'y', 'z']}


# solution 1
        from itertools import combinations
        letter_list = [mp[digit] for digit in digits]
        comb = itertools.product(*letter_list)
        comb = [''.join(x) for x in comb] 
        return comb if comb[0] else []

# solution 2
'''
        digits = list(digits)
        ret = [[]]
        
        def f(digits, idx):
            if idx >= len(digits):
                ret.append(''.join(cur[:]))
                return
            
            for c in mp[digits[idx]]:
                cur.append(c)
                f(digits, idx+1)
                cur.pop()

        f(digits, 0)
'''
# solution 3
'''
        for d in digits:
            l = mp[d]
            newret = []
            for el in l:
                for r in ret:
                    newret.append(r+[el])
        
            ret = newret
        
        return [''.join(r) for r in ret]
        pass
'''
