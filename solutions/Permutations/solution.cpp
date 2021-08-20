class Solution {
public:

    vector<vector<int>> helper(vector<int>& A, int begin){
        int sz = A.size();
        vector<vector<int>> ret;

        if (begin == sz-1) {
            ret.push_back({A[sz-1]});
            return ret;
        }

        // get permutation for A[begin+1, end] then iterate over
        // and insert A[begin]
        auto perms = helper(A, begin+1);

        // length of each perm
        int sz2 = perms[0].size() + 1;

        // in each permutation insert A[begin]
        for (const auto& p: perms){

            for (int i = 0; i < sz2; i++){
                vector<int> tmp(sz2);

                int k = 0;
                for (int j = 0; j < sz2; j++)
                    tmp[j] = (j==i) ? A[begin] : p[k++];

                ret.push_back(tmp);
            }
        }

        return ret;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        return helper(nums, 0);
    }
};
