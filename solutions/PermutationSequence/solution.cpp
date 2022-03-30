class Solution {
    int factorial[10] = {1};

    string helper(string s, int k){
        int sz = s.size();
        if (!sz) return "";

        int f = factorial[sz-1];
        int idx = (k-1) / f;

        string ret;
        ret += s[idx];
        s.erase(s.begin() + idx);
        ret += helper(s, k-idx*f);
        return ret;
    }

public:
    string getPermutation(int n, int k) {
        for (int i=1; i<10; i++) factorial[i] = factorial[i-1]*i; // calc factorial values
        return helper(string("123456789").substr(0,n), k);
    }
};

// n = 4 so '1234' k = 14
// 4! = 1*2*3*4 permutations in total, need to find 14t,
// so what happens in 1st recursive call - if k was 1-6 we would take '1'
// if k was 7-12 we would take '2', but it's 14 so we take '3'
// deduct 14 - 6*2 and call do a recusrive call etc

// s      k  s[idx] rest

// '1234' 14 '3' 2
// '124'  2  '1' 1
// '24'   2  '4' 1
// '2'    1  '2' 1
