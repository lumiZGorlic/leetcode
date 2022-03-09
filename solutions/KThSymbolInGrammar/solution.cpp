class Solution {
    int flip(int val) {
        return val==0? 1 : 0;
    }
public:
    int kthGrammar(int N, int K) {
        // base case
        if(N==1) {
            return 0;
        }

        if(K%2==1) {
            return kthGrammar(N-1, (K+1)/2);
        } else {
            return flip(kthGrammar(N-1, K/2));
        }
    }
};

// think of the problem like this
/*        0
      /       \
     0          1
   /   \      /    \
   0     1    1      0
 / \     / \   / \   / \
 0  1   1   0  1  0  0  1
*/

// notice relation between child in N row and parent in N-1 row
// also notice when value gets flipped (for even Ks)
