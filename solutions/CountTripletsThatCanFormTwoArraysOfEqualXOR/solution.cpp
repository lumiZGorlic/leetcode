
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int cnt = 0 ;
        
        ////// solution 1
        /*
        // if a xor b xor c xor d = 0
        // then a = b xor c xor d, a xor b = c xor d etc

        for(int i = 0 ; i < arr.size() ; ++i){
            int xorr = arr[i]; 
            for(int j = i + 1 ; j < arr.size() ; ++j){
                xorr = xorr ^ arr[j] ;
                if(xorr == 0) cnt += j - i ; 
            }
        }*/

        ////// solution 2
        // if   a xor b xor c xor d                   = 5
        // and  a xor b xor c xor d xor e xor f xor g = 5
        // then e xor f xor g = 0

        // can be optimised further, instead of vector can have a pair(cnt, sum of starts)
        unordered_map<int, vector<int>> xorMap;
        xorMap[0].push_back(-1);

        int x = 0;
        for (int i = 0; i < arr.size(); i++) {
            x ^= arr[i];
            for (auto j: xorMap[x]) {
                int start = j + 1, end = i;
                cnt += end - start;
            }
            xorMap[x].push_back(i);
        }

        return cnt ;
    }
};
