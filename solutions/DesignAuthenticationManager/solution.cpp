class AuthenticationManager {
    int ttl;
    set<pair<int, string>> allTokens;
    unordered_map<string, int> token2Time;

public:
    AuthenticationManager(int timeToLive): ttl(timeToLive) { }

    void generate(string tid, int ct) {
        allTokens.insert({-ct-ttl, tid});
        token2Time[tid] = -ct-ttl;
    }

    void renew(string tid, int ct) {
        auto it = token2Time.find(tid);
        if(it == token2Time.end() || it->second >= -ct) return;
        auto it2 = allTokens.find({it->second, it->first});

        allTokens.erase(it2); allTokens.insert({-ct-ttl, tid});
        token2Time.erase(it); token2Time[tid] = -ct-ttl;
    }

    int countUnexpiredTokens(int ct) {
        if(!allTokens.size()) return 0;
        int ret = 0;
        auto it = allTokens.begin();
        while(it->first < -ct){
            ret++; it++;
        }
        return ret;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */
