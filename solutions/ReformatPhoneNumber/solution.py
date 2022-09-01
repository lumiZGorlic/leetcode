class Solution:
    def reformatNumber(self, n: str) -> str:

#       1-liner and explanation
#       ( is the start of capture group
#       . any one character
#       ? zero or once
#       .?any character zero or once
#       (?= positive look ahead without capture and without consuming
#       .. any two characters    
#        return re.sub('(...?(?=..))', r'\1-', re.sub('\D', '', n))

        n = [c for c in list(n) if c not in '- ']

        ln, ret = len(n), []

        i = 0
        while ln > i + 4:
            ret += n[i : i+3] + ['-']
            i += 3

        if ln - i == 4:
            ret += n[-4:-2] + ['-'] + n[-2:]
        elif ln - i == 3:
            ret += n[-3:]
        else:
            ret += n[-2:]

        return ''.join(ret)
        pass
