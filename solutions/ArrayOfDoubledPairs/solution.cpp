#define SIZE 100001

class Solution {
    bool canReorder(int* count){
        for (int i = 0; i < SIZE; i++){
            if (count[i]){
                if (2*i > 100000) return false;

                if (count[i] <= count[2*i]) {
                    count[2*i] -= count[i];
                    count[i] = 0;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }

public:
    bool canReorderDoubled(vector<int>& arr) {
        int positives[100001] = {0}, negatives[100001] = {};
        for (int a: arr) {
            if (a >= 0) positives[a]++;
            else negatives[abs(a)]++;
        }

        return canReorder(positives) && canReorder(negatives);
    }
};
