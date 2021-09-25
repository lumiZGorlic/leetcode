
# Solutions for Leetcode

blablabla

## Problems & Solutions

tags: matma, try also, cool python, cool c++

Template
| 00 | [](https://leetcode.com/problems//) | [C++](./solutions//solution.cpp) [Python](./solutions//solution.py)|  |





| # | Title | Solution | Comments |
|---| ----- | -------- | --------------------- |
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | [C++](./solutions/TwoSum/solution.cpp) | hash map, two pointers. Note that this is a special case (exactly one solution exists). So hash map works fine. In a general case sort + two pointers would work.  |
| 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | [C++](./solutions/AddTwoNumbers/solution.cpp)| classic linked list |
| 15 | [3Sum](https://leetcode.com/problems/3sum/) | [C++](./solutions/3Sum/solution.cpp) | array of ints, find all unique triplets that sum to 0 |
| 18 | [4Sum](https://leetcode.com/problems/4sum/) | [Python](./solutions/4Sum/solution.py) | array of ints, find all unique quadruplets that sum to given target, used set to avoid duplicate quadruplets |
| 22 | [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/) | [Python](./solutions/GenerateParentheses/solution.py)| generate all valid combinations, recursion |
| 28 | [Implement strStr()](https://leetcode.com/problems/implement-strstr/) | [C](./solutions/ImplementStrStr/solution.c)| check if s1 is a substring of s2 |
| 33 | [Search In Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | [C++](./solutions/SearchInRotatedSortedArray/solution.cpp)| binary search |
| 41 | [First Missing Positive](https://leetcode.com/problems/first-missing-positive/) | [Python](./solutions/FirstMissingPositive/solution.py)| move values around i.e. '1' to index 0, '5' to index '6' etc  |
| 42 | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) | [Python](./solutions/TrappingRainWater/solution.py)| classic, try also one pass solution |
| 45 | [Jump Game II](https://leetcode.com/problems/jump-game-ii/) | [C++](./solutions/JumpGameII/solution.cpp)| same as 55 but here need to find out min number of jumps |
| 46 | [Permutations](https://leetcode.com/problems/permutations/) | [C++](./solutions/Permutations/solution.cpp) [Python](./solutions/Permutations/solution.py)| generate permutations, cool python |
| 50 | [Pow(x,n)](https://leetcode.com/problems/powx-n/) | [Python](./solutions/PowXn/solution.py)  |  |
| 51 | [N-Queens](https://leetcode.com/problems/n-queens/) | [Python](./solutions/NQueens/solution.py)| classic n queens problem, backtracking |
| 53 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | [C++](./solutions/MaximumSubarray/solution.cpp)  | find the contiguous subarray which has the largest sum |
| 54 | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) |  [Python](./solutions/SpiralMatrix/solution.py)| my solution with O(N) space, try also O(1) space  |
| 55 | [Jump Game](https://leetcode.com/problems/jump-game/) | [Python](./solutions/JumpGame/solution.py)| array of ints, each value max jump you can do from the current index, can you reach the last index |
| 62 | [Unique Paths](https://leetcode.com/problems/unique-paths/) | [C++](./solutions/UniquePaths/solution.cpp)| dp |
| 63 | [Unique Paths II](https://leetcode.com/problems/unique-paths-ii/) | [C++](./solutions/UniquePathsII/solution.cpp)| dp |
| 69 | [Sqrt(x)](https://leetcode.com/problems/sqrtx/) | [Python](./solutions/Sqrtx/solution.py) | bs, try also Newton |
| 84 | [Largest Rectangle In Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) | [Python](./solutions/LargestRectangleInHistogram/solution.py) [C++](./solutions/LargestRectangleInHistogram/solution.cpp) | classic stack  |
| 94 | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | [Python](./solutions/BinaryTreeInorderTraversal/solution.py)| iterative solutions |
| 96 | [Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/) | [Python](./solutions/UniqueBinarySearchTrees/solution.py)| how many structurally unique BSTs can you build |
| 101 | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/) | [C++](./solutions/SymmetricTree/solution.cpp) [Python](./solutions/SymmetricTree/solution.py)| recursive and iterative |
| 102 | [Binary Tree Level Order Traversal ](https://leetcode.com/problems/binary-tree-level-order-traversal /) | [C++](./solutions/BinaryTreeLevelOrderTraversal/solution.cpp) [Python](./solutions/BinaryTreeLevelOrderTraversal/solution.py)| bfs or pre-order traversal |
| 118 | [Pascals Triangle](https://leetcode.com/problems/pascals-triangle/) | [Python](./solutions/PascalsTriangle/solution.py)|  |
| 121 | [Best Time To Buy And Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | [C](./solutions/BestTimeToBuyAndSellStock/solution.c)|  |
| 122 | [Best Time To Buy And Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) | [C++](./solutions/BestTimeToBuyAndSellStockII/solution.cpp)| at each step if profit can be made - do it  |
| 134 | [Gas Station](https://leetcode.com/problems/gas-station/) | [C++](./solutions/GasStation/solution.cpp) | visiting a sequence of gas stations, where to start to complete the journey, greedy |
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | [C++](./solutions/SingleNumber/solution.cpp) | classic xor |
| 137 | [Single Number II](https://leetcode.com/problems/single-number-ii/) | [C++](./solutions/SingleNumberII/solution.cpp) | traverse, keep adding bits on every position, divide modulo by three and voila |
| 138 | [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/) | [C++](./solutions/CopyListWithRandomPointer/solution.cpp) [Python](./solutions/CopyListWithRandomPointer/solution.py)| linked list, each node has an extra random pointer, make deep copy. Recursion or play with pointers and intertwine nodes |
| 139 | [Word Break](https://leetcode.com/problems/word-break/) | [C++](./solutions/WordBreak/solution.cpp) | dp |
| 140 | [Word Break II](https://leetcode.com/problems/word-break-ii/) | [Python](./solutions/WordBreakII/solution.py) | dp |
| 141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | [C++](./solutions/LinkedListCycle/solution.cpp)| classic, two pointers |
| 142 | [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) | [C++](./solutions/LinkedListCycleII/solution.cpp)| Floyd's Tortoise and Hare Algorithm |
| 144 | [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/) | [Python](./solutions/BinaryTreePreorderTraversal/solution.py)| just Inorder Traversal a bit modified  |
| 146 | [LRU Cache](https://leetcode.com/problems/lru-cache/) | [C++](./solutions/LRUCache/solution.cpp)| |
| 150 | [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/) | [C++](./solutions/EvaluateReversePolishNotation/solution.cpp) [Python](./solutions/EvaluateReversePolishNotation/solution.py)| classic stack, cool c++ lambda |
| 151 | [Reverse Words In A String](https://leetcode.com/problems/reverse-words-in-a-string/) | [C++](./solutions/ReverseWordsInAString/solution.cpp) [C](./solutions/ReverseWordsInAString/solution.c)|  |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element/) | [C++](./solutions/MajorityElement/solution.cpp)| Boyer–Moore majority vote algorithm |
| 189 | [Rotate Array](https://leetcode.com/problems/rotate-array/) | [C++](./solutions/RotateArray/solution.cpp) |  |
| 198 | [House Robber](https://leetcode.com/problems/house-robber/) | [C++](./solutions/HouseRobber/solution.cpp)| |
| 200 | [Number Of Islands](https://leetcode.com/problems/number-of-islands/) | [C++](./solutions/NumberOfIslands/solution.cpp)| count islands in a binary matrix |
| 204 | [Count Primes](https://leetcode.com/problems/count-primes/) | [Python](./solutions/CountPrimes/solution.py) | Eratosthenes sieve |
| 207 | [Course Schedule](https://leetcode.com/problems/course-schedule/) | [Python](./solutions/CourseSchedule/solution.py)  | dfs |
| 208 | [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/) | [C++](./solutions/ImplementTriePrefixTree/solution.cpp)  | trie |
| 210 | [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/) | [C++](./solutions/CourseScheduleII/solution.cpp)  | topological sort |
| 213 | [House Robber II](https://leetcode.com/problems/house-robber-ii/) | [Python](./solutions/HouseRobberII/solution.py)| like a classic house robber but houses arranged in circle |
| 226 | [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/) | [C++](./solutions/InvertBinaryTree/solution.cpp)| |
| 232 | [Implement Queue Using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | [C++](./solutions/ImplementQueueUsingStacks/solution.cpp) | use one stack for input and one for output |
| 268 | [Missing Number](https://leetcode.com/problems/missing-number/) | [C++](./solutions/MissingNumber/solution.cpp) | classic xor  |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) | [C++](./solutions/MoveZeroes/solution.cpp)| in the array move all 0s to the end  |
| 292 | [Nim Game](https://leetcode.com/problems/nim-game/) | [Python](./solutions/NimGame/solution.py)| heap of stones, players can remove 1,2, or 3. To win, you need to take the last stone  |
| 297 | [Serialize And Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) | [Python](./solutions/SerializeAndDeserializeBinaryTree/solution.py) [C++](./solutions/SerializeAndDeserializeBinaryTree/solution.cpp) | pre-order traversal works, not sure about formal proof, easy to see that post and in-order traversals not up to the task  |
| 300 | [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/ ) | [C++](./solutions/LongestIncreasingSubsequence/solution.cpp) [Python](./solutions/LongestIncreasingSubsequence/solution.py)| C++ solution easy dp in O(N^2), Python a bit tricky in O(NlnN), matma |
| 309 | [Best Time To Buy And Sell Stock With Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/) | [Python](./solutions/BestTimeToBuyAndSellStockWithCooldown/solution.py) [C++](./solutions/BestTimeToBuyAndSellStockWithCooldown/solution.cpp)|  |
| 322 | [Coin Change](https://leetcode.com/problems/coin-change/) | [C++](./solutions/CoinChange/solution.cpp) | classic dp, the fewest number of coins to make up the amount |
| 337 | [House Robber III](https://leetcode.com/problems/house-robber-iii/) | [C++](./solutions/HouseRobberIII/solution.cpp)| house robber in a binary tree |
| 338 | [Counting Bits](https://leetcode.com/problems/counting-bits/) | [C++](./solutions/CountingBits/solution.cpp) | for a sequence of ints e.g 1,2,3,4,5 calculate mapping int - number of bits in binary representation  |
| 348 | [Shuffle An Array](https://leetcode.com/problems/shuffle-an-array/) | [C++](./solutions/ShuffleAnArray/solution.cpp) | Fisher Yates Algorithm for random shuffling |
| 445 | [Add Two Numbers II](https://leetcode.com/problems/add-two-numbers-ii/) | [C++](./solutions/AddTwoNumbersII/solution.cpp)| reverse linked list |
| 451 | [Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) | [Python](./solutions/SortCharactersByFrequency/solution.py)|  |
| 453 | [Minimum Number Of Arrows To Burst Balloons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) | [Python](./solutions/MinimumNumberOfArrowsToBurstBalloons/solution.py)| sort and greedy  |
| 494 | [Target Sum](https://leetcode.com/problems/target-sum/) | [Python](./solutions/TargetSum/solution.py)| given a sequence of ints, insert '+'s and '-'s to end up with target sum |
| 516 | [Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/) | [C++](./solutions/LongestPalindromicSubsequence/solution.cpp) | classic dp |
| 518 | [Coin Change 2](https://leetcode.com/problems/coin-change-2/) | [C++](./solutions/CoinChange2/solution.cpp) | classic dp, the number of combinations that make up the amount |
| 575 | [Distribute Candies](https://leetcode.com/problems/distribute-candies/) | [Python](./solutions/DistributeCandies/solution.py)| n candies given, can be of different types, take half and maximize number of different types |
| 621 | [Task Scheduler](https://leetcode.com/problems/task-scheduler/) | [Python](./solutions/TaskScheduler/solution.py) [C++](./solutions/TaskScheduler/solution.cpp) | python solution with heap and C++ more direct |
| 714 | [Best Time To Buy And Sell Stock With Transaction Fee](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/) | [Python](./solutions/BestTimeToBuyAndSellStockWithTransactionFee/solution.py)|  |
| 718 | [Maximum Length of Repeated Subarray](https://leetcode.com/problems/maximum-length-of-repeated-subarray/) | [Python](./solutions/MaximumLengthOfRepeatedSubarray/solution.py)| two arrays given, longest common subarray, dp  |
| 875 | [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/) | [C++](./solutions/KokoEatingBananas/solution.cpp)| max speed that satisfies a specific condition, use binary search |
| 877 | [Stone Game](https://leetcode.com/problems/stone-game/) | [C++](./solutions/StoneGame/solution.cpp)| dp |
| 931 | [Minimum Falling Path Sum](https://leetcode.com/problems/minimum-falling-path-sum/) | [Python](./solutions/MinimumFallingPathSum/solution.py)| dp, similar to 1937 |
| 969 | [Pancake Sorting](https://leetcode.com/problems/pancake-sorting/) | [Python](./solutions/PancakeSorting/solution.py)| should be self descriptive |
| 1004 | [Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/) | [C++](./solutions/MaxConsecutiveOnesIII/solution.cpp) | binary array and we can flip at most k '0's. What's the longest sequence of '1' we can get. Special case also solved in cpp file - what if only one '0' can be flipped. Classic sliding window. |
| 1143 | [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) | [Python](./solutions/LongestCommonSubsequence/solution.py)| two strings and find LCS, dp |
| 1405 | [Longest Happy String](https://leetcode.com/problems/longest-happy-string/) | [C++](./solutions/LongestHappyString/solution.cpp)| string composed only of 'a', 'b', 'c'. Cannot have triplets (e.g. 'bbb'). Can have at most a occurences of 'a', b of 'b', c of 'c'.Construct longest possible. Similar to 621 (Task Scheduler)|
| 1514 | [Path with Maximum Probability](https://leetcode.com/problems/path-with-maximum-probability/) | [C++](./solutions/PathWithMaximumProbability/solution.cpp)  | Dijkstra's algorithm |
| 1937 | [Maximum Number Of Points With Cost](https://leetcode.com/problems/maximum-number-of-points-with-cost/) | [C++](./solutions/MaximumNumberOfPointsWithCost/solution.cpp)| dp |
| 1942 | [The Number Of The Smallest Unoccupied Chair](https://leetcode.com/problems/the-number-of-the-smallest-unoccupied-chair/) | [C++](./solutions/TheNumberOfTheSmallestUnoccupiedChair/solution.cpp)| numbered chairs taken/freed by arriving/leaving guests. What chair will be taken by a concrete guest. sort times. use hash map and heap. |


