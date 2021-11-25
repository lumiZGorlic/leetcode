
class Solution {
    unordered_map<string, int> stock2Vol;
    multimap<int, string> vol2Stock;

public:

    void addTrade(const string& stock, int volume){
        int prevVol = stock2Vol[stock];
        stock2Vol[stock] += volume;

        if (!prevVol){
            vol2Stock.insert(pair<int, string>(-volume, stock));
        } else {
            pair <multimap<int, string>::iterator, multimap<int, string>::iterator> range;
            multimap<int, string>::iterator toRemove;
            range = vol2Stock.equal_range(-prevVol);

            for (multimap<int, string>::iterator it=range.first; it!=range.second; ++it) {
                if (it->second == stock){
                    toRemove = it;
                    break;
                }
            }

            vol2Stock.erase(toRemove);
            vol2Stock.insert(pair<int, string>(-prevVol - volume, stock));
        }
    }

    // return sum of K top traded
    int topK(int K){
        int ret=0;
        K = (K > stock2Vol.size()) ? stock2Vol.size() : K ;
        auto it = vol2Stock.begin();

        for (int i=0; i<K; i++){
            // print stock and volume
            cout << -it->first << " -> " << it->second << endl;
            ret += -it->first;
            it++;
        }
        return ret;
    }
};
