class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.length();
        if(s[n-1]!='0') return false;

        int i = 0;
        queue<int> q;
        q.push(0);
        int curr_max = 0;

        while(!q.empty()){
            i = q.front();
            q.pop();
            if(i == n-1) return true;

            for(int j = max(i + minJump, curr_max); j <= min(i + maxJump, n - 1); j++)
            {
                if(s[j] == '0')   q.push(j);
            }

            // in this iteration all indexes up to i+maxJump would've been covered
            // so fine for curr_max to be (i+maxJump+1) or n.
            curr_max = min(i+maxJump+1, n);
        }

        return false;
    }
};

