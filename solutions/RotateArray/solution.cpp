class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int sz = nums.size();
        int todo = sz;
        int beg = 0;

        while (todo){

            int from = beg;
            int to = (from + k) % sz;
            int val = nums[from];

            while(1) {

                int tmp = nums[to];
                nums[to] = val;
                val = tmp;
                from = to;
                to += k; to %= sz;
                todo--;

                if (from == beg) break;
            }

            beg++;
        }
    }
};
