class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int sz = times.size();
        vector<pair<int, int>> arriveTimes, leaveTimes;

        for (int i=0; i<sz; i++){
            arriveTimes.push_back({times[i][0], i});
            leaveTimes.push_back({times[i][1] , i});
        }

        sort(arriveTimes.begin(), arriveTimes.end());
        sort(leaveTimes.begin(), leaveTimes.end());

        priority_queue<int, vector<int>, greater<int>> freeChairs;
        for (int i=0; i<sz; i++) freeChairs.push(i);

        unordered_map<int, int> guest2Chair;

        int idx1=0, idx2=0;

        while(1) {
            if (arriveTimes[idx1].first < leaveTimes[idx2].first){
                int guest = arriveTimes[idx1].second;
                int chair = freeChairs.top();
                if (guest == targetFriend)
                    return chair;
                freeChairs.pop();
                guest2Chair[guest] = chair;
                idx1++;
            }
            else {                
                int guest = leaveTimes[idx2].second;
                int chair = guest2Chair[guest];
                guest2Chair.erase(guest);
                freeChairs.push(chair);
                idx2++;
            }
        }

        return -1;
    }
};
