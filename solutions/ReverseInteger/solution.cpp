// max 2147483647, min -2147483648
// bear in mind that input is 32 bits so it cannot be for example '7463847412' or higher

class Solution {
public:
    int reverse(int x) {
        // my lengthy solution
        /*string s = to_string(x);
        int ret = 0;

        int sign = s[0] == '-' ? -1 : 1;
        if(sign == -1) s = s.substr(1);

        vector<int> v {2,1,4,7,4,8,3,6,4,7}; // max or min
        if (sign == -1) v[9]++;
        ::reverse(v.begin(), v.end());

        bool canOverflow = false;

        for (int i = 0; i < s.size(); i++){
            int digit = s[i] - '0';

            if (digit > v[i])
                canOverflow = true;
            else if (canOverflow && digit < v[i])
                canOverflow = false;

            if(i == 9 && canOverflow) return 0;

            ret += digit * pow(10, i);
        }

        return sign * ret;*/



        // shorter solution
        int r=0;      // decleare r 
        while(x){
            if (r > INT_MAX/10 || r < INT_MIN/10) return 0; // check 32 bit range if r is outside the range then return 0 
            r = r*10 + x%10; // find remainder and add its to r
            x = x/10;      // Update the value of x
        }

        return r;  // if r in the 32 bit range then return r
    }
};
