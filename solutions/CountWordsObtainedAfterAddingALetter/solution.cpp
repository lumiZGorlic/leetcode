// time complexity is O(N*26), my commented out solution below is O(N*M)
// N - size of start words, M - start of target words
class Solution {
public:
    unordered_set<int> st;
    bool isPossible(int n)
    {
        for (int i=0;i<26;i++)
        {
            int curr=(1<<i);
            if ((curr|n)==n && st.find(curr^n)!=st.end())
                return true;
        }
        return false;
    }
    int getMask(string& s)
    {
        int val=0;
        for (auto& i:s) val|=(1<<(i-'a'));
        return val;
    }
    int wordCount(vector<string>& arr, vector<string>& target)
    {
        for (auto& i:arr)
            st.insert(getMask(i));
        
        int count=0;
        for (auto& i:target)
        {
            if (isPossible(getMask(i)))
                count++;
        }
        return count;
    }
/*    int toBitmap(const string& s){
        int ret=0;
        for (char c: s) ret |= (1 << (c-'a'));
        return ret;
    }
public:
    int wordCount(vector<string>& sw, vector<string>& tw) {
        vector<unordered_set<int>> swb(26, unordered_set<int>());
        vector<vector<int>> twb(26, vector<int>());
        for (const auto& w: sw) swb[w.size()-1].insert(toBitmap(w));
        for (const auto& w: tw) twb[w.size()-1].push_back(toBitmap(w));

        int ret=0;

        for (int sz=1; sz<26; sz++){
            for (int tw: twb[sz]){
                for (int sw: swb[sz-1]){
                    int n = tw ^ sw;
                    if ((n & (n-1)) == 0) { ret++;   break;}
                }
            }
        }

        return ret;
    }*/
};
