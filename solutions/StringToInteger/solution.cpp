#include <algorithm>
#include <iterator>
#include <numeric>
#include <vector>

long mn = static_cast<long>(std::numeric_limits<int>::min());
long mx = static_cast<long>(std::numeric_limits<int>::max());
bool isNum(char c) { return c >= '0' && c <= '9'; }

class Solution {

public:
    int myAtoi(string s) {
        // Ignore leading whitespace
        auto numStrBegin = std::find_if_not(s.cbegin(), s.cend(), [](auto c){ return c == ' '; });

        // Determine whether num is negative/postive
        auto base = 1l;
        if (!isNum(*numStrBegin)) {
            switch (*numStrBegin) {
                case '-': base = -1; break;
                case '+': break;
                default: return 0;
            }       
            ++numStrBegin;
        }

        if (numStrBegin == s.end() || !isNum(*numStrBegin)) return 0;

        // Convert chars to digits
        const auto numStrEnd = std::find_if_not(numStrBegin, s.cend(), isNum);
        std::vector<int> digits(std::distance(numStrBegin, numStrEnd));
        std::transform(numStrBegin, numStrEnd, digits.begin(), [](auto c){ return c - '0'; });

        const auto nonZero = std::find_if_not(digits.cbegin(), digits.cend(), [](int i){ return i == 0; });

        auto iter = digits.cbegin();
        while (iter+1 != digits.cend()) iter++;

        // Calculate num from digits. traversing digits backwards
        auto n = 0l;
        for (; iter >= nonZero; --iter) {
            if (base > mx) return mx;            
            n += (*iter * base);

            base *= 10;
            if (n < mn) return mn;
            if (n > mx) return mx;
        }

        return n;
    }
};

