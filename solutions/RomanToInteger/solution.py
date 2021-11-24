class Solution:
    def romanToInt(self, s: str) -> int:
        digit2Val = { 'I':1, 'V':5, 'X':10, 'L': 50, 'C':100, 'D':500, 'M':1000 }
        digit2Modifier = { 'I': ['V', 'X'], 'X': ['L', 'C'], 'C': ['D', 'M'] }
        TwoDigits2Val = { 'I': { 'V': 4, 'X': 9 }, 'X': { 'L': 40, 'C': 90 }, 'C': { 'D': 400, 'M': 900 } }
        ret, ln, idx = 0, len(s), 0

        while idx < ln:
            if s[idx] in digit2Modifier and idx+1 < ln and s[idx+1] in digit2Modifier[s[idx]]:
                ret += TwoDigits2Val[s[idx]][s[idx+1]]
                idx += 2
            else:
                ret += digit2Val[s[idx]]
                idx += 1

        return ret
        pass
