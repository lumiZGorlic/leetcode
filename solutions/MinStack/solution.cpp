// solution using 2 stacks is really easy. Alternative solution below uses a trick.
// though it won't pass some tests due to overflow (e.g. line 18)

class MinStack {
    vector<int> nums;
    int minv;
public:
    MinStack() { minv = INT_MAX; }

    void push(int val) {
        if (nums.empty()) {
            minv = val;
            nums.push_back(val);
            return;
        }

        // If new number is less than minEle
        if (val < minv) {
            nums.push_back(2*val - minv);
            minv = val;
        }
        else
           nums.push_back(val);
    }

    void pop() {
        int t = nums.back();
        nums.pop_back();

        // Minimum will change as the minimum element of the stack is being removed.
        if (t < minv) 
            minv = 2*minv - t;
    }

    int top() {
        int t = nums.back();
        return t < minv ? minv: t;
    }

    int getMin() { return minv; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
