
class Solution {
public:
    string repeatLimitedString(string s, int lim) {
        int sz = s.size();
        string ret;

        int cnt[26] = {0};
        for (char c: s) cnt[c-'a']++;
        int nonZero = 0;
        for (int i: cnt) if (i) nonZero++;
        char lastAdded = ' ';

        while(1)
        {
            // find the highest and second highest char and see which we can add 
            char highestChar = ' ', highestCharSecond = ' ';
            int hcIdx = -1, hcsIdx = -1;
            for (int i=25; i>=0; i--){
                if      (highestChar == ' '       && cnt[i]) { highestChar = char('a'+i);       hcIdx = i; }
                else if (highestCharSecond == ' ' && cnt[i]) { highestCharSecond = char('a'+i); hcsIdx = i; break; }
            }

            if (lastAdded != highestChar){
                int deduct = min(cnt[hcIdx], lim);

                cnt[hcIdx] -= deduct;
                ret += string(deduct, highestChar);
                lastAdded = highestChar;
                if (!cnt[hcIdx]) nonZero--;
            }
            else {
                cnt[hcsIdx] -= 1;
                ret += highestCharSecond;
                lastAdded = highestCharSecond;
                if (!cnt[hcsIdx]) nonZero--;
            }

            if (ret.size() == s.size()) return ret;

            if (nonZero == 1){
                char lastLeft = ' ';
                for (int i=25; i>=0; i--) if (cnt[i]) { lastLeft = char('a'+i); break; }
                if (lastLeft == lastAdded) return ret;
            }
        }

        return ret;
    }
};
