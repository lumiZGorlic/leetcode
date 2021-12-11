class Solution {
public:
    int helper(vector<int> A, int idx){
        int ret=0, sz=A.size();
        if (idx >= sz) return 1;
        unordered_set<int> seen;

        for (int i = idx; i < sz; i++){
            //if (!seen.count(A[i]) && (!idx || (pow((int)sqrt(A[idx-1]+A[i]), 2) == A[idx-1]+A[i])) ){
            if (!seen.count(A[i]) && (!idx || ceil(sqrt(A[idx-1]+A[i])) == floor(sqrt(A[idx-1]+A[i]))) ){
                swap(A[idx], A[i]);
                seen.insert(A[idx]);
                ret += helper(A, idx+1);
            }
        }
        return ret;
    }

    int numSquarefulPerms(vector<int>& A) {
        return helper(A, 0);
    }
};
