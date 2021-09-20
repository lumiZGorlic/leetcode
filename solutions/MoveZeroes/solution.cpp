class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz=nums.size();

        int z=-1, nz=-1; // zero, non-zero

        for (int i=0; i<sz; i++) if (!nums[i]) {z=i; break;}
        if (z == -1 || z == sz-1) return;

        for (int i=z+1; i<sz; i++) if (nums[i]) {nz = i; break; }
        if (nz == -1) return;

        while (z < sz && nz < sz){
            nums[z] = nums[nz];
            nums[nz] = 0;

            z++;
            while (z < sz && nums[z]) z++;

            nz++;
            while (nz < sz && nums[nz] == 0) nz++;
        }
    }
};

/* short python
sz, idx = len(nums), 0
        
for i in range(sz):
    if nums[i] != 0:
        nums[i], nums[idx] = nums[idx], nums[i]
        idx += 1
*/
