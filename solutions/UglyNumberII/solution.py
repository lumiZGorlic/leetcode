class Solution:
    def nthUglyNumber(self, n: int) -> int:
        ugly = [1]
        pt2, pt3, pt5 = 0, 0, 0

        while len(ugly) < n:
            multi2 = 2 * ugly[pt2]
            multi3 = 3 * ugly[pt3]
            multi5 = 5 * ugly[pt5]

            minm = min(multi2, multi3, multi5)
            ugly.append(minm)

            if minm == multi2: pt2 += 1
            if minm == multi3: pt3 += 1
            if minm == multi5: pt5 += 1

        return ugly[-1]
        pass

        # below could be used in the loop too, more code but maybe clearer
        '''if minm == multi2:
            pt2 += 1
            if multi2 == multi3:
                pt3 += 1
            if multi2 == multi5:
                pt5 += 1
        elif minm == multi3:
            pt3 += 1
            if multi3 == multi2:
                pt2 += 1
            if multi3 == multi5:
                pt5 += 1
        elif minm == multi5:
            pt5 += 1
            if multi5 == multi2:
                pt2 += 1
            if multi5 == multi3:
                pt3 += 1'''
