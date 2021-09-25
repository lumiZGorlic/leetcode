class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sz = gas.size();

        vector<int> extraGas;
        for (int i=0; i<sz; i++) extraGas.push_back(gas[i] - cost[i]);

        // identify index that can be a solution
        int gasAmount = 0, idx = -1;
        for (int i=0; i<sz; i++){
            gasAmount += extraGas[i];
            if (gasAmount < 0) {
                gasAmount = 0;
                idx = -1;
            }
            else {
                if (idx == -1) idx = i;
            }
        }

        // confirm if the index is a solution
        for (int i = 0; i < idx; i++){
            gasAmount += extraGas[i];
            if (gasAmount < 0) return -1;
        }

        return idx;
    }
};
