class Solution {
public:
    int addDigits(int num) {

        while (num >= 10){
            int newnum = 0;
            while (num){
                newnum += num % 10;
                num /= 10;
            }
            num = newnum;
        }

        return num;
    }
};
