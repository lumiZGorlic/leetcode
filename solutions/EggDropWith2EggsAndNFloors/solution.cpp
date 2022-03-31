class Solution {
    int mem[10001] = {0}; 
public:
    int twoEggDrop(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;
        if(mem[n]) return mem[n];

        int ret = n;

        for (int i = 1; i<n; i++){
            int cur = max(i, 1 + twoEggDrop(n-i));
            ret = min(ret, cur);
        }

        mem[n] = ret;
        return ret;
    }
};
