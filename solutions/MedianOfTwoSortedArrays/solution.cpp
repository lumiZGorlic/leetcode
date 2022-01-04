class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int sz1=nums1.size(), sz2=nums2.size();
        int sz = sz1+sz2;

        vector<int> ret;
        int idx1=0, idx2=0;

        while (idx1 < sz1 || idx2 < sz2){
            if (idx1 < sz1 && idx2 < sz2){
                if (nums1[idx1] <= nums2[idx2]){
                    ret.push_back(nums1[idx1++]);
                }
                else {
                    ret.push_back(nums2[idx2++]);
                }
            }
            else if (idx1 < sz1) ret.push_back(nums1[idx1++]);
            else if (idx2 < sz2) ret.push_back(nums2[idx2++]);
        }

        if (sz % 2) return ret[sz/2];
        return (ret[sz/2] + ret[sz/2-1]) / 2.0;
    }
};
