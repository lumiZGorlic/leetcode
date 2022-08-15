class Solution {
public:
    string removeKdigits(string num, int k) {
        // algo 1 (faster)
        string res;
        int keep = num.size() - k;
        for (int i=0; i<num.size(); i++) {
            while (res.size()>0 && res.back()>num[i] && k>0) {
                res.pop_back();
                k--;
            }
            res.push_back(num[i]);
        }
        res.erase(keep, string::npos);

        // trim leading zeros
        int s = 0;
        while (s<(int)res.size()-1 && res[s]=='0')  s++;
        res.erase(0, s);

        return res=="" ? "0" : res;

        // algo 2 (slower)
        /*if(k == 100000) return "0";
        if(k == num.size()) return "0";

        while (k--){
            int i = 0;
            for (i = 0; i < num.size() - 1; i++)
                if (num[i+1] < num[i]) break;
            num.erase(i,1);
        }

        int i=0;
        for (i = 0; i < num.size(); i++)
            if(num[i] != '0') break;

        num = num.substr(i);
        if(num.empty()) return "0";
        return num;*/
    }
};

// "10200"
// 1

//"112"
//1

//"1221"
//1

//"455667789"
//1
