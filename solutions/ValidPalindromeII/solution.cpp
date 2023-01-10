class Solution {
public:
    bool validPalindrome(string s) {
        int sz=s.size();

        function<bool (int, int, bool)> isPali;

        isPali = [&] (int l, int r, bool canSkip) {
            while (l < r) {
                if (s[l] == s[r]){
                    l++; r--;
                }
                else if (canSkip) {
                    return isPali(l, r-1, false) || isPali(l+1, r, false);
                }
                else
                    return false;
            }
            return true;
        };

        return isPali(0, sz-1, true);
    }
};
