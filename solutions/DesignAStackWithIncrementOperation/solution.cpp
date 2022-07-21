class CustomStack {
    int maxSize;
    vector<int> st, inc;    
public:    
    CustomStack(int maxSize): maxSize(maxSize) {}

    void push(int x) {
        if (st.size() >= maxSize) return;
        st.push_back(x);
        inc.push_back(0);
    }

    int pop() {
        if (!st.size()) return -1;

        int ret = st.back(); st.pop_back();
        int val = inc.back(); inc.pop_back();
        if(inc.size()) inc.back() += val;
        return ret + val;
    }

    void increment(int k, int val) {
        if(!st.size()) return;

        k = (k < st.size()) ? k-1 : st.size()-1;
        inc[k] += val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
