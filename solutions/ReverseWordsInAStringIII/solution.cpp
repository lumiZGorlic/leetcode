class Solution {
public:
    string reverseWords(string s) {
        s += ' ';
        int sz = s.size();
        int r = 0, l = 0;

        while (r < sz){
            if (s[r] == ' '){
                int i=l, j=r-1;
                while (i < j){
                    char tmp = s[i];
                    s[i] = s[j];
                    s[j] = tmp;
                    i++; j--;
                }
                l = r+1;
            }

            r++;
        }

        return s.substr(0, sz-1);

        /*int sz = s.size();
        int i=0;
        while (i<sz){
            if (s[i] != ' '){
                int j=i;
                while (j+1 < sz && s[j+1] != ' '){
                    j++;
                }

                for (int k=0; k<(j-i)/2 + 1; k++){
                    char c = s[i+k];
                    s[i+k] = s[j-k];
                    s[j-k] = c;
                }
                
                i = j+1;
            }
            else
                i++;
        }

        return s;*/
    }
};
