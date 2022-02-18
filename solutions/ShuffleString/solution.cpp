class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int sz = s.size();

        for (int i = 0; i < sz; i++){
            if (indices[i] == -1) continue;

            char cToMove = s[i];
            int dstIdx = indices[i];
            indices[i] = -1;

            do {
                char tmpC   = s[dstIdx];
                int tmpIdx  = indices[dstIdx];

                s[dstIdx] = cToMove;
                indices[dstIdx] = -1;

                cToMove = tmpC;
                dstIdx = tmpIdx;
            }
            while (dstIdx != -1);
        }

        return s;
    }
};
