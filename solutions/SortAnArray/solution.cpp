struct MinHeap {
private:
    vector<int> v;
    int getParIdx (int childIdx){ return childIdx == 0 ? -1 : (childIdx % 2 == 0 ? (childIdx-1) / 2 : childIdx / 2); }
public:
    bool isEmpty() { return v.empty(); }

    void push(int el){
        v.push_back(el);
        int childIdx = v.size()-1;
        int parIdx = getParIdx(childIdx);

        while (parIdx != -1 && v[parIdx] > v[childIdx]){
            swap(v[parIdx], v[childIdx]);
            childIdx = parIdx;
            parIdx = getParIdx(childIdx);
        }
    };

    int pop() {
        int ret = v[0];
        v[0] = v.back(); v.pop_back();

        int parIdx = 0;
        int childIdx1 = 1, childIdx2 = 2;

        while (1) {
            if (childIdx1 < v.size() && childIdx2 < v.size()){
                if (v[parIdx] < v[childIdx1] && v[parIdx] < v[childIdx2]) break;

                if (v[childIdx1] < v[childIdx2]){
                    swap(v[parIdx], v[childIdx1]);
                    parIdx = childIdx1;
                }
                else  {
                    swap(v[parIdx], v[childIdx2]);
                    parIdx = childIdx2;
                }
            }

            else if (childIdx1 < v.size() && v[childIdx1] < v[parIdx]){
                swap(v[parIdx], v[childIdx1]);
                parIdx = childIdx1;
            }

            else if (childIdx2 < v.size() && v[childIdx2] < v[parIdx]){
                swap(v[parIdx], v[childIdx2]);
                parIdx = childIdx2;
            }
            else break;

            childIdx1 = 2*parIdx + 1, childIdx2 = 2*parIdx + 2;
        }

        return ret;
    };
};

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        MinHeap mh;
        for (int n: nums) mh.push(n);

        vector<int> ret;
        while (!mh.isEmpty()) ret.push_back(mh.pop());

        return ret;
    }
};
