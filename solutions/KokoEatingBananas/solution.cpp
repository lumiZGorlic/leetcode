class Solution {
public:
    // how long it will take to eat them all at given speed
    int howLong(const vector<int>& piles, int speed){
        int ret = 0;
        for (const auto& p: piles){
            ret += p/speed;
            if (p%speed) ret++;
        }
        return ret;
    }

    int minEatingSpeed(vector<int>& piles, int H) {
        int l = 1, r = *max_element(piles.begin(), piles.end());

        while (l < r){
            int md = l + (r-l)/2;

            if (howLong(piles, md) <= H)
                r = md;
            else
                l = md+1;
        }

        return r;
    }
};
