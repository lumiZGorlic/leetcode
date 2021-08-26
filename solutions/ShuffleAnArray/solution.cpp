class Solution {
    vector<int> nums;
public:
    Solution(vector<int>& nums): nums(nums) {}

    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return nums;
    }

    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        //make a copy of the original
        vector<int> shuffled = nums;
        int sz = shuffled.size();
        int leftSize = sz;

        for(int i = sz-1; i>=0; i--) {
            //draw from the bag
            int j = rand()%leftSize;

            //put this element at current position
            //and put the original element in the bag
            swap(shuffled[i], shuffled[j]);
            leftSize--;
        }
        return shuffled;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
