class Solution {
    int tt[1048576]; // max maxChoosableInteger can be 20 and 1048576 = 2^20
public:
    int miniMax(int mci, int dt, int ct, int pos){
        if(tt[pos] != 0) return tt[pos];

        for (int i = 0; i < mci; i++){
            if ( !(pos & (1 << i)) ){ // if ith bit not set, then use the value
                if (ct + i+1 >= dt){
                    tt[pos] = 1;
                    return 1;
                }

                if (miniMax(mci, dt, ct + i+1, pos | (1 << i) ) == -1) {
                    tt[pos] = 1;
                    return 1;
                };
            }
        }

        tt[pos] = -1;
        return -1;
    }

    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        fill(tt, tt+1048576, 0);

        if(maxChoosableInteger >= desiredTotal) return true;
        if ((maxChoosableInteger+1) * maxChoosableInteger / 2 < desiredTotal) return false;

        return miniMax(maxChoosableInteger, desiredTotal, 0, 0) == 1 ? true : false;
    }
};
