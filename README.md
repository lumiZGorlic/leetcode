
# Solutions for Leetcode

blabla

## Problems & Solutions

tags: matma, try also

Template
| 00 | [...](https://leetcode.com/problems/.../) | [C++](./solutions/..../solution.cpp) [Python](./solutions/..../solution.py)| ... |





| # | Title | Solution | Comments |
|---| ----- | -------- | --------------------- |
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | [C++](./solutions/TwoSum/solution.cpp) | hash map, two pointers. Note that this is a special case (exactly one solution exists). So hash map works fine. In a general case sort + two pointers would work.  |
| 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | [C++](./solutions/AddTwoNumbers/solution.cpp)| classic linked list |
| 28 | [Implement strStr()](https://leetcode.com/problems/implement-strstr/) | [C](./solutions/ImplementStrStr/solution.c)| check if s1 is a substring of s2 |
| 33 | [Search In Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | [C++](./solutions/SearchInRotatedSortedArray/solution.cpp)| binary search |
| 50 | [Pow(x,n)](https://leetcode.com/problems/powx-n/) | [Python](./solutions/PowXn/solution.py)  |  |
| 53 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | [C++](./solutions/MaximumSubarray/solution.cpp)  | find the contiguous subarray which has the largest sum |
| 62 | [Unique Paths](https://leetcode.com/problems/unique-paths/) | [C++](./solutions/UniquePaths/solution.cpp)| dp |
| 63 | [Unique Paths II](https://leetcode.com/problems/unique-paths-ii/) | [C++](./solutions/UniquePathsII/solution.cpp)| dp |
| 139 | [Word Break](https://leetcode.com/problems/word-break/) | [C++](./solutions/WordBreak/solution.cpp) | dp |
| 140 | [Word Break II](https://leetcode.com/problems/word-break-ii/) | [Python](./solutions/WordBreakII/solution.py) | dp |
| 146 | [LRU Cache](https://leetcode.com/problems/lru-cache/) | [C++](./solutions/LRUCache/solution.cpp)| |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element/) | [C++](./solutions/MajorityElement/solution.cpp)| Boyer–Moore majority vote algorithm |
| 198 | [House Robber](https://leetcode.com/problems/house-robber/) | [C++](./solutions/HouseRobber/solution.cpp)| |
| 200 | [Number Of Islands](https://leetcode.com/problems/number-of-islands/) | [C++](./solutions/NumberOfIslands/solution.cpp)| count islands in a binary matrix |
| 204 | [Count Primes](https://leetcode.com/problems/count-primes/) | [Python](./solutions/CountPrimes/solution.py) | Eratosthenes sieve |
| 207 | [Course Schedule](https://leetcode.com/problems/course-schedule/) | [Python](./solutions/CourseSchedule/solution.py)  | dfs |
| 208 | [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/) | [C++](./solutions/ImplementTriePrefixTree/solution.cpp)  | trie |
| 210 | [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/) | [C++](./solutions/CourseScheduleII/solution.cpp)  | topological sort |
| 213 | [House Robber II](https://leetcode.com/problems/house-robber-ii/) | [Python](./solutions/HouseRobberII/solution.py)| like a classic house robber but houses arranged in circle |
| 226 | [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/) | [C++](./solutions/InvertBinaryTree/solution.cpp)| |
| 297 | [Serialize And Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) | [Python](./solutions/SerializeAndDeserializeBinaryTree/solution.py) [C++](./solutions/SerializeAndDeserializeBinaryTree/solution.cpp) | pre-order traversal works, not sure about formal proof, easy to see that post and in-order traversals not up to the task  |
| 300 | [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/ ) | [C++](./solutions/LongestIncreasingSubsequence/solution.cpp) [Python](./solutions/LongestIncreasingSubsequence/solution.py)| C++ solution easy dp in O(N^2), Python a bit tricky in O(NlnN), matma |
| 322 | [Coin Change](https://leetcode.com/problems/coin-change/) | [C++](./solutions/CoinChange/solution.cpp) | classic dp, the fewest number of coins to make up the amount |
| 337 | [House Robber III](https://leetcode.com/problems/house-robber-iii/) | [C++](./solutions/HouseRobberIII/solution.cpp)| house robber in a binary tree |
| 445 | [Add Two Numbers II](https://leetcode.com/problems/add-two-numbers-ii/) | [C++](./solutions/AddTwoNumbersII/solution.cpp)| reverse linked list |
| 518 | [Coin Change 2](https://leetcode.com/problems/coin-change-2/) | [C++](./solutions/CoinChange2/solution.cpp) | classic dp, the number of combinations that make up the amount |
| 621 | [Task Scheduler](https://leetcode.com/problems/task-scheduler/) | [Python](./solutions/TaskScheduler/solution.py) [C++](./solutions/TaskScheduler/solution.cpp) | python solution with heap and C++ more direct |
| 875 | [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/) | [C++](./solutions/KokoEatingBananas/solution.cpp)| max speed that satisfies a specific condition, use binary search |
| 877 | [Stone Game](https://leetcode.com/problems/stone-game/) | [C++](./solutions/StoneGame/solution.cpp)| dp |
| 931 | [Minimum Falling Path Sum](https://leetcode.com/problems/minimum-falling-path-sum/) | [Python](./solutions/MinimumFallingPathSum/solution.py)| dp, similar to 1937 |
| 1405 | [Longest Happy String](https://leetcode.com/problems/longest-happy-string/) | [C++](./solutions/LongestHappyString/solution.cpp)| string composed only of 'a', 'b', 'c'. Cannot have triplets (e.g. 'bbb'). Can have at most a occurences of 'a', b of 'b', c of 'c'.Construct longest possible. Similar to 621 (Task Scheduler)|
| 1514 | [Path with Maximum Probability](https://leetcode.com/problems/path-with-maximum-probability/) | [C++](./solutions/PathWithMaximumProbability/solution.cpp)  | Dijkstra's algorithm |
| 1937 | [Maximum Number Of Points With Cost](https://leetcode.com/problems/maximum-number-of-points-with-cost/) | [C++](./solutions/MaximumNumberOfPointsWithCost/solution.cpp)| dp |
| 1942 | [The Number Of The Smallest Unoccupied Chair](https://leetcode.com/problems/the-number-of-the-smallest-unoccupied-chair/) | [C++](./solutions/TheNumberOfTheSmallestUnoccupiedChair/solution.cpp)| numbered chairs taken/freed by arriving/leaving guests. What chair will be taken by a concrete guest. sort times. use hash map and heap. |


