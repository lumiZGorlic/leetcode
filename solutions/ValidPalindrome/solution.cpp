class Solution {
public:
    bool isPalindrome(string s) {
        int sz=s.size();
        int l=0, r=sz-1;

        while (l < r){
            if( tolower(s[l]) == tolower(s[r]) ){
                l++; r--;
            }
            else if (!isalnum(s[l])) {
                l++;
            }
            else if(!isalnum(s[r])){
                r--;
            }
            else
                return false;
        }

        return true;
    }
};
