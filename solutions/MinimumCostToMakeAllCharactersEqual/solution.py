class Solution:
    def minimumCost(self, s: str) -> int:
        ret, ln = 10000000000, len(s)
        if ln==1: return 0

        # below s[a..b] means inclusive of both ends a and b
        l2r_one  = [-1]*ln # l[i] - cost of arriving at s[0..i] = '1..1' 
        l2r_zero = [-1]*ln # l[i] - cost of arriving at s[0..i] = '0..0'

        for i in range(ln):
            if s[i] == '1':
                if i == 0:   l2r_one[i] = 0
                else:        l2r_one[i] = l2r_one[i-1]

                if i == 0:   l2r_zero[i] = 1
                else:        l2r_zero[i] = l2r_one[i-1] + (i+1)

            else:
                if i == 0:   l2r_one[i] = 1
                else:        l2r_one[i] = l2r_zero[i-1] + (i+1)

                if i == 0:   l2r_zero[i] = 0
                else:        l2r_zero[i] = l2r_zero[i-1]


        r2l_one  = [-1]*ln # l[i] - cost of arriving at s[i..ln-1] = '1..1'
        r2l_zero = [-1]*ln # l[i] - cost of arriving at s[i..ln-1] = '0..0'

        for i in range(ln-1,-1,-1):
            if s[i] == '1':
                if i == ln-1:  r2l_one[i] = 0
                else:          r2l_one[i] = r2l_one[i+1]

                if i == ln-1:  r2l_zero[i] = 1
                else:          r2l_zero[i] = r2l_one[i+1]+(ln-i)   

            else:
                if i == ln-1: r2l_one[i] = 1
                else:         r2l_one[i] = r2l_zero[i+1]+(ln-i)
                    
                if i == ln-1: r2l_zero[i] = 0
                else:         r2l_zero[i] = r2l_zero[i+1]

        for i in range(0, ln-1):
            ret = min(ret, l2r_zero[i] + r2l_zero[i+1])
            ret = min(ret, l2r_one[i]  + r2l_one[i+1])

        return ret
        pass
