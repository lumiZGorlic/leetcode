class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int sz = deck.size();

        sort(deck.begin(), deck.end());

        if (sz == 1 || sz == 2) return deck;

        list<int> ret;
        ret.push_front(deck[sz-1]);
        ret.push_front(deck[sz-2]);

        int idx = sz-3;
        while (idx >= 0){
            int a = ret.back(); ret.pop_back();
            ret.push_front(a);
            ret.push_front(deck[idx--]);
        }

        return vector<int>(ret.begin(), ret.end());
    }
};
