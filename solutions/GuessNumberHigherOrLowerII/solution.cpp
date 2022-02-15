class Solution {
    int tt[201][201] = {0};
public:
    int f(int l, int r){
        if (l >= r) return 0;
        if (tt[l][r] != 0) return tt[l][r];

        int ret = INT_MAX;
        for (int i=l; i<=r; i++){
            ret = min(ret, i + max(f(l,i-1), f(i+1,r)));
        }

        tt[l][r] = ret;
        return ret;
    }

    int getMoneyAmount(int n) {
        return f(1, n);
    }
};
