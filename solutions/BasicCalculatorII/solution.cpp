// https://leetcode.com/problems/basic-calculator-ii/discuss/63004/17-lines-C%2B%2B-easy-20-ms
class Solution {
public:
    int calculate(string s) {
        istringstream in('+' + s + '+');
        long long total = 0, term = 0, n;
        char op;
        while (in >> op) {
            if (op == '+' or op == '-') {
                total += term;
                in >> term;
                term *= 44 - op;
            } else {
                in >> n;
                if (op == '*')
                    term *= n;
                else
                    term /= n;
            }
        }
        return total;
    }
};
