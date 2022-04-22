class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> nums {1};
        unordered_set<int> done {1};

        // ptr2 points to a number that we can multiply by 2, ptr3 by 3, ptr5 by 5
        int ptr2 = 0, ptr3 = 0, ptr5 = 0;

        while (--n) {
            int n2 = nums[ptr2] * 2;
            int n3 = nums[ptr3] * 3;
            int n5 = nums[ptr5] * 5;

            vector<int> v{n2, n3, n5};
            int mn = *min_element(begin(v), end(v));

            done.insert(mn);
            nums.push_back(mn);
            
            if     (mn == n2) while( done.count(nums[ptr2] * 2) ) ptr2++;
            else if(mn == n3) while( done.count(nums[ptr3] * 3) ) ptr3++;
            else if(mn == n5) while( done.count(nums[ptr5] * 5) ) ptr5++;
        }

        return nums.back();
    }
};
