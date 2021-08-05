class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ret;
        vector<pair<int, char>> count {{a, 'a'}, {b, 'b'}, {c, 'c'}};

        // if it doesn't create a triplet, just use a char with highest count
        while (1)
        {
            sort(count.begin(), count.end());

            // we would end up with a triplet here
            if (ret.size() >= 2 && ret[ret.size()-1] == ret[ret.size()-2] && count[2].second == ret[ret.size()-1]){
                if (count[1].first){
                    ret += count[1].second;
                    count[1].first--;
                }
                else break;
            }
            else{
                if (count[2].first){
                    ret += count[2].second;
                    count[2].first--;
                }
                else break;
            }
        }

        return ret;
    }
};
