// logic OK but times out 

using plv = pair<int, vector<int>>;
struct cmp {
    bool operator() (plv& l, plv& r){ return r.first < l.first; }
};

class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        reverse(begin(primes), end(primes));
        if (n == 1) return 1;

        priority_queue<plv, vector<plv>, cmp> pq;
        for(int p: primes) pq.push({p, primes});

        unordered_set<long long> done {1};

        while (1){
            auto cur = pq.top(); pq.pop();
            auto v = cur.first;
            auto todo = cur.second;

            if(todo.size() == primes.size()) {
                done.insert(v);
                if(done.size() == n) return v;
            }

            long long fact = todo.back(); todo.pop_back();
            pq.push({v*fact, primes});
            if(!todo.empty()) pq.push({v, todo});
        }

        return 1;
    }
};
