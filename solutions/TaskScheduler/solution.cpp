class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> count;
        int maxCount = 0;
        for(const auto& task : tasks) {
            count[task]++;
            maxCount = max(maxCount, count[task]);
        }

        int ans = (maxCount-1)*(n+1);
        for(const auto& e : count) if(e.second == maxCount) ans++;
        return max((int)tasks.size(), ans);
    }
};
