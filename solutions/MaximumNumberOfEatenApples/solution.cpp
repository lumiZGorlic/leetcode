class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        int sz = apples.size(), ret = 0;

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>> > heap;

        int i=0;
        while (i < sz || !heap.empty()){

            if (i < sz && apples[i]){
                heap.push({i+days[i]-1, apples[i]});
            }

            if (!heap.empty()){
                pair<int, int> cur;

                do {
                    cur = heap.top();
                    heap.pop();
                }
                while (!heap.empty() && cur.first < i);

                if (cur.first >= i){
                    cur.second--;
                    ret++;
                    if (cur.second) heap.push(cur);
                }
            }

            i++;
        }

        return ret;
    }
};
