class MedianFinder {
    priority_queue<int> mx;
    priority_queue<int, vector<int>, greater<int> > mn;
public:
    /** initialize your data structure here. */
    MedianFinder() {}

    void addNum(int num) {
        int mxSz = mx.size(), mnSz = mn.size();
        if (!mxSz && !mnSz) {
            mn.push(num);
        }
        else if (mnSz == mxSz){
            if (num <= mx.top()) mx.push(num);
            else mn.push(num);
        }
        else if (mxSz > mnSz){
            if(num >= mx.top()) mn.push(num);
            else {
                int tmp = mx.top(); mx.pop();
                mn.push(tmp);
                mx.push(num);
            }
        }
        else { // mxSz < mnSz
            if(num <= mn.top()) mx.push(num);
            else {
                int tmp = mn.top(); mn.pop();
                mx.push(tmp);
                mn.push(num);
            }
        }
    }

    double findMedian() {
        if (mn.size() == mx.size()) return (double)(mn.top()+mx.top()) / 2.0;
        if (mn.size() > mx.size()) return mn.top();
        return mx.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
