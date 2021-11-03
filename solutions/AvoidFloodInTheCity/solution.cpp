class Solution {
public:
    // lakes get filled, if rains[i] is 0, it means on that day we can dry any filled lake. If lake gets filled twice
    // we get flood. Need to avoid it.

    // store days to dry in a set, using hash map keep track of what lake filled on what day
    // when filled lake encountered again, in hash map check when it was filled, then in set was possible to dry it
    // possible to solve it also using priority queue
    vector<int> avoidFlood(vector<int>& rains) {
         int sz = rains.size();
         vector<int> ret(sz, -1);
         set<int> daysToDry;
         unordered_map<int, int> filledOnDay;

         for (int day=0; day<sz; day++) {
             if (!rains[day]) 
                 daysToDry.insert(day);
             else {
                 if (!filledOnDay.count(rains[day]))
                     filledOnDay[rains[day]] = day;
                 else {
                     if (daysToDry.empty()) return {};

                    // find on which day we could have dried it
                    auto it = daysToDry.upper_bound(filledOnDay[rains[day]]);

                    if (it == daysToDry.end()) return {};

                    ret[*it] = rains[day];
                    filledOnDay[rains[day]] = day;
                    daysToDry.erase(it);
                 }
             }
        }

        // on days left, lets just dry lake 1, it's arbirtrary
        for (auto day: daysToDry) ret[day] = 1;

        return ret;
    }
};
