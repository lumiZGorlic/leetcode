class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> charFreq;

        int r = 0, l = 0, ans = 0, maxFrqInWdw = 0;

        for(r = 0; r < s.size() ; r++)
        {
            maxFrqInWdw = max(maxFrqInWdw, ++charFreq[s[r]]);

            if (r-l+1 - maxFrqInWdw > k)
            {   
                charFreq[s[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};

// can also utilize the solution for MaxConsecutiveOnesIII
/*
    int longest(string& S, int k, char target) {
        int zeroCount = 0, l = 0; int maxLen = 0;
        for( int r = 0 ; r < S.size() ; ++r ) {
            if( S[ r ] != target ) ++zeroCount;
            while( zeroCount > k ) {
                if( S[ l ] != target ) --zeroCount;
                ++l;
            }
            maxLen = max( maxLen, r - l + 1 );
        }
        return maxLen;
    }

    //solution
    { 
        unordered_map<char, int> cnt;
        for (char c: s) cnt[c]++;
        int ret = 0;
        for (auto& it: cnt){
            int tmp = longest(s, k, it.first);
            ret = max(ret, tmp);
        }
        return ret;
    }
*/
