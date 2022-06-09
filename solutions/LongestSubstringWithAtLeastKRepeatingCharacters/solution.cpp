class Solution { 
public:
    int longestSubstring(string s, int k) {
        return divideAndConquer(0, s.length(), s, k);
    }
public:
    int divideAndConquer(int start, int end, string& s, int k)
    {
        //store frequency of each character in string
        int charCount[26] = {0};
        for(int i = start; i < end; i++) charCount[s[i] - 'a']++;

        int flag = 1;

        //check if frequency of any character in string is less than k
        for(int i = 0; i < 26; i++)
            if(charCount[i] > 0 && charCount[i] < k){
                flag = 0;
                break;
            }

        //if frequency of all characters is more than k, return length of string
        if(flag) return end - start;

        //split string at character whose frequency is less than k
        for(int i = start; i < end; i++)
        {
            int count = charCount[s[i] - 'a'];
            if(count < k)
            {
                int leftside = divideAndConquer(start, i, s, k);
                int rightside = divideAndConquer(i + 1, end, s, k);
                return max(leftside, rightside); //return max length from left and right substring
            }
        }
        return end - start; //return length of string
    }
};
