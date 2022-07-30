class NumberContainers {
    unordered_map<int, int> idx2Num;
    unordered_map<int, set<int>> num2Idxs;
public:
    NumberContainers() { }

    void change(int index, int number) {
        if(idx2Num.count(index)) {
            int oldNum = idx2Num[index];
            num2Idxs[oldNum].erase(index);
            if(num2Idxs[oldNum].size() == 0) num2Idxs.erase(oldNum);
        }
        idx2Num[index] = number;
        num2Idxs[number].insert(index);
    }

    int find(int number) {
        if(num2Idxs.count(number)) return (*num2Idxs[number].begin());
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
