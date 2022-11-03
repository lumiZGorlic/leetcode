class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ret(n, 0);

        for (const auto& b: bookings){
            int l = b[0]-1, r = b[1], seats = b[2];
            ret[l] += seats;
            if (r < n)
                ret[r] -= seats;
        }

        for (int i = 1; i < n; i++)
            ret[i] += ret[i-1];

        return ret;
    }
};
