// https://leetcode.com/problems/consecutive-numbers-sum/discuss/129015/5-lines-C%2B%2B-solution-with-detailed-mathematical-explanation

class Solution {
public:
    int consecutiveNumbersSum(int N) {
        int count = 1;

        for (int i = 2; i < sqrt(2*N); i++){
            int tmp = N - (i*(i-1))/2;

            if (tmp % i == 0) count++;
        }

        return count;
    }
};

// below times out
/*
class Solution:
    def consecutiveNumbersSum(self, N: int) -> int:
        ret, sm = 0, 0
        l, r = 0, 0

        while r <= N:
            sm += r

            while sm > N:
                sm -= l
                l += 1

            if sm == N: ret += 1 
            r += 1


        return ret
        pass

*/
