class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        /*
        // solution 1
        map<int,int> mp;
        for(auto it : nums) mp[it]++;

        priority_queue<int>pq;
        for(auto it:mp) pq.push(it.second);
        
        while(pq.size()>=2)
        {
            int top1 = pq.top(); pq.pop();
            int top2 = pq.top(); pq.pop();

            top1--;
            top2--;
            if(top1) pq.push(top1);
            if(top2) pq.push(top2);
        }
       
       return pq.size() ? pq.top() : 0;*/


        // solution 2
        // https://leetcode.com/problems/minimum-array-length-after-pair-removals/discuss/4052092/Simple-Explanation-with-Intuition-oror-C%2B%2B-oror-O(N)-time

        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i : nums){
            mp[i]++;
        }
        int maxi = 0;
        for(auto it : mp){
            maxi = max(maxi, it.second);
        }
        if(maxi <= n/2){
            if(n%2){
                return 1;
            }
            else{
                return 0;
            }
        }

        return 2*maxi - n;
    }
};
