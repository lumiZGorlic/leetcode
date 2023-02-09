class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        int n = words.size(), m = puzzles.size();

        auto getmask = [&](string& s){
            int ans = 0;
            for(char c : s){
                ans |= (1 << (c-'a'));
            }
            return ans;
        };

        unordered_map<int, int> mp;

        for (auto& w: words) {
            auto m = getmask(w);
            mp[m]++;
        }

        vector<int> ret;

        for (auto& p: puzzles){
            auto curm = getmask(p);
            int matches = 0;

            for (auto it: mp){
                int m = it.first;

                int tmp = m | curm;
                bool has1stl = (1 << (p[0]-'a')) & m;

                if (tmp == curm && has1stl) matches += it.second;
            }
            ret.push_back(matches);
        }

        return ret;



        /*const int N = 26;
        int n = words.size(), m = puzzles.size();

        auto getmask = [&](string& s){
            int ans = 0;
            for(char c : s){
                ans |= (1 << (c-'a'));
            }
            return ans;
        };

        vector<int> cnt(1 << N,0);

        for(string& s : words){ 
            cnt[getmask(s)]++;
        }

        vector<int> fans(m,0);

        for(int i = 0; i<m; i++){
            int ans = 0;
            int mask = getmask(puzzles[i]) ;

            for(int s = mask; s > 0; s = (s-1) & mask){
                int first = (1 << (puzzles[i][0] - 'a'));
                if( (s & first) > 0)
                    ans += cnt[s];
            }
            fans[i] = ans;
        }

        return fans;*/
    }
};
