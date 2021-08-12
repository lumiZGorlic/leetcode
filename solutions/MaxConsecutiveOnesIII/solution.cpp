class Solution {
public:
    int longestOnes(vector<int>& A, int k) {
        int zeroCount = 0, l = 0;
        int maxLen = 0;

        for( int r = 0 ; r < A.size() ; ++r ) {
            if( A[ r ] == 0 ) ++zeroCount;
            while( zeroCount > k ) {
                if( A[ l ] == 0 ) --zeroCount;
                ++l;
            }
            maxLen = max( maxLen, r - l + 1 );
        }

        return maxLen;
    }
};

/*
  // pseudo code for Max Consecutive Ones II (can flip only one '0')

  left=0, right=0;
  lastZeroIdx=-1; // initially -1 is important remember that
  result=0;

  while(right != len(arr)){
      if(arr[right] == 0){
	     left = lastZeroIdx + 1;
		 lastZeroIdx = right;
	  }
      result = max(result, right - left + 1);   //both right and left included in window 
	  right++;
  }
  return result;
*/
