class Solution {
public:
    string reverseVowels(string s) {
        int sz = s.size();
        unordered_set<char> vowels {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};


        // solution 1
        /*vector<int> idx;
        for (int i=0; i<sz; i++)
            if (vowels.count(s[i])) idx.push_back(i);

        int sz2 = idx.size();
        for (int i=0; i<sz2/2; i++)
            swap(s[idx[i]], s[idx[sz2-1-i]]);*/



        // solution 2
        /*int l = 0, r = sz-1;
        while (l < r){
            bool l_OK = vowels.count(s[l]), r_OK = vowels.count(s[r]);
            
            if (l_OK && r_OK) {
                swap(s[l++], s[r--]);
            }
            else if (l_OK) r--;
            else if (r_OK) l++;
            else { l++; r--; }
        }*/


        // solution 3
        int i = 0, j = s.size() - 1;
        while (i < j) {
            i = s.find_first_of("aeiouAEIOU", i);
            j = s.find_last_of("aeiouAEIOU", j);
            if (i < j) {
                swap(s[i++], s[j--]);
            }
        }

        return s;
    }
};
