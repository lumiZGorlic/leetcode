
# Solutions for Leetcode

blablabla

## Problems & Solutions

tags: matma, try also, cool python, cool c++, no number, tricky, string play,

Template
| 00 | [](https://leetcode.com/problems//) | [C++](./solutions//solution.cpp) [Python](./solutions//solution.py)|  |






| # | Title | Solution | Comments |
|---| ----- | -------- | --------------------- |
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | [C++](./solutions/TwoSum/solution.cpp) | hash map, two pointers. Note that this is a special case (exactly one solution exists). So hash map works fine. In a general case sort + two pointers would work.  |
| 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | [C++](./solutions/AddTwoNumbers/solution.cpp)| classic linked list |
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | [C++](./solutions/LongestSubstringWithoutRepeatingCharacters/solution.cpp) | sliding window |
| 4 | [Median Of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | [C++](./solutions/MedianOfTwoSortedArrays/solution.cpp) | can just merge the arrays, try also other solution which is tricky |
| 13 | [Roman To Integer](https://leetcode.com/problems/roman-to-integer/) | [Python](./solutions/RomanToInteger/solution.py)| convert roman number to integer, use hash map |
| 15 | [3Sum](https://leetcode.com/problems/3sum/) | [C++](./solutions/3Sum/solution.cpp) | array of ints, find all unique triplets that sum to 0 |
| 18 | [4Sum](https://leetcode.com/problems/4sum/) | [Python](./solutions/4Sum/solution.py) | array of ints, find all unique quadruplets that sum to given target, used set to avoid duplicate quadruplets |
| 22 | [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/) | [Python](./solutions/GenerateParentheses/solution.py)| generate all valid combinations, recursion |
| 25 | [Reverse Nodes In K-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/) | [C++](./solutions/ReverseNodesInKGroup/solution.cpp) | linked list classic, can use recursion or an extra array |
| 28 | [Implement strStr()](https://leetcode.com/problems/implement-strstr/) | [C](./solutions/ImplementStrStr/solution.c)| check if s1 is a substring of s2 |
| 31 | [Next Permutation](https://leetcode.com/problems/next-permutation/) | [Python](./solutions/NextPermutation/solution.py)|  |
| 33 | [Search In Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | [C++](./solutions/SearchInRotatedSortedArray/solution.cpp)| binary search |
| 34 | [Find First And Last Position Of Element In Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | [Python](./solutions/FindFirstAndLastPositionOfElementInSortedArray/solution.py)| self descriptive, use bs |
| 37 | [Sudoku Solver](https://leetcode.com/problems/sudoku-solver/) | [Python](./solutions/SudokuSolver/solution.py)| backtracking |
| 39 | [Combination Sum](https://leetcode.com/problems/combination-sum/) | [Python](./solutions/CombinationSum/solution.py)| given int array find combinations that sum up to target, unbound knapsack problem |
| 41 | [First Missing Positive](https://leetcode.com/problems/first-missing-positive/) | [Python](./solutions/FirstMissingPositive/solution.py)| move values around i.e. '1' to index 0, '5' to index '6' etc  |
| 42 | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) | [Python](./solutions/TrappingRainWater/solution.py)| classic, try also one pass solution |
| 45 | [Jump Game II](https://leetcode.com/problems/jump-game-ii/) | [C++](./solutions/JumpGameII/solution.cpp)| same as 55 but here need to find out min number of jumps |
| 46 | [Permutations](https://leetcode.com/problems/permutations/) | [C++](./solutions/Permutations/solution.cpp) [Python](./solutions/Permutations/solution.py)| generate permutations, cool python |
| 47 | [Permutations II](https://leetcode.com/problems/permutations-ii/) | [Python](./solutions/PermutationsII/solution.py)| generate permutations, input might contain duplicates |
| 48 | [Rotate Image](https://leetcode.com/problems/rotate-image/) | [Python](./solutions/RotateImage/solution.py)| 2d matrix rotate by 90 degrees. just come up with an index convention |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | [Python](./solutions/GroupAnagrams/solution.py)| sort + hash, string play |
| 50 | [Pow(x,n)](https://leetcode.com/problems/powx-n/) | [Python](./solutions/PowXn/solution.py)  |  |
| 51 | [N-Queens](https://leetcode.com/problems/n-queens/) | [Python](./solutions/NQueens/solution.py)| classic n queens problem, backtracking |
| 53 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | [C++](./solutions/MaximumSubarray/solution.cpp)  | find the contiguous subarray which has the largest sum |
| 54 | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) |  [Python](./solutions/SpiralMatrix/solution.py)| my solution with O(N) space, try also O(1) space  |
| 55 | [Jump Game](https://leetcode.com/problems/jump-game/) | [Python](./solutions/JumpGame/solution.py)| array of ints, each value max jump you can do from the current index, can you reach the last index |
| 62 | [Unique Paths](https://leetcode.com/problems/unique-paths/) | [C++](./solutions/UniquePaths/solution.cpp)| dp |
| 63 | [Unique Paths II](https://leetcode.com/problems/unique-paths-ii/) | [C++](./solutions/UniquePathsII/solution.cpp)| dp |
| 69 | [Sqrt(x)](https://leetcode.com/problems/sqrtx/) | [Python](./solutions/Sqrtx/solution.py) | bs, try also Newton |
| 74 | [Search A 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/) |  [Python](./solutions/SearchA2DMatrix/solution.py)| bs and mapping |
| 78 | [Subsets](https://leetcode.com/problems/subsets/) | [C++](./solutions/Subsets/solution.cpp) [Python](./solutions/Subsets/solution.py)| get all the subsets, bitmasks or recursion |
| 79 | [Word Search](https://leetcode.com/problems/word-search/) | [Python](./solutions/WordSearch/solution.py)| check if word is in a grid, dfs |
| 84 | [Largest Rectangle In Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) | [Python](./solutions/LargestRectangleInHistogram/solution.py) [C++](./solutions/LargestRectangleInHistogram/solution.cpp) | classic stack  |
| 91 | [Decode Ways](https://leetcode.com/problems/decode-ways/) | [Python](./solutions/DecodeWays/solution.py)| string with digits given, mapping is 'a' -> 1, 'b' -> 2, ... 'z' -> 26, return number of ways to decode the string, dp |
| 93 | [Restore IP Addresses](https://leetcode.com/problems/restore-ip-addresses/) | [Python](./solutions/RestoreIPAddresses/solution.py)| string with digits, return all possible ips that can be created by adding dots, backtracking |
| 94 | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | [Python](./solutions/BinaryTreeInorderTraversal/solution.py)| iterative solutions |
| 96 | [Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/) | [Python](./solutions/UniqueBinarySearchTrees/solution.py)| how many structurally unique BSTs can you build |
| 101 | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/) | [C++](./solutions/SymmetricTree/solution.cpp) [Python](./solutions/SymmetricTree/solution.py)| recursive and iterative |
| 102 | [Binary Tree Level Order Traversal ](https://leetcode.com/problems/binary-tree-level-order-traversal/) | [C++](./solutions/BinaryTreeLevelOrderTraversal/solution.cpp) [Python](./solutions/BinaryTreeLevelOrderTraversal/solution.py)| bfs or pre-order traversal |
| 113 | [Path Sum II](https://leetcode.com/problems/path-sum-ii/) | [C++](./solutions/PathSumII/solution.cpp) | fin all paths root to leaf that sum to given value. dfs |
| 115 | [Distinct Subsequences](https://leetcode.com/problems/distinct-subsequences/) | [Python](./solutions/DistinctSubsequences/solution.py)| two strings s and t, return the number of distinct subsequences of s which equals t, dp |
| 118 | [Pascals Triangle](https://leetcode.com/problems/pascals-triangle/) | [Python](./solutions/PascalsTriangle/solution.py)|  |
| 121 | [Best Time To Buy And Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | [C](./solutions/BestTimeToBuyAndSellStock/solution.c)|  |
| 122 | [Best Time To Buy And Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) | [C++](./solutions/BestTimeToBuyAndSellStockII/solution.cpp)| at each step if profit can be made - do it  |
| 123 | [Best Time To Buy And Sell Stock III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/) | [C++](./solutions/BestTimeToBuyAndSellStockIII/solution.cpp) [Python](./solutions/BestTimeToBuyAndSellStockIII/solution.py) | 2 transactions allowed, my solution with 2 arrays |
| 124 | [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/) | [Python](./solutions/BinaryTreeMaximumPathSum/solution.py) | recursion |
| 127 | [Word Ladder](https://leetcode.com/problems/word-ladder/) | [C++](./solutions/WordLadder/solution.cpp) | bidirectional bfs |
| 128 | [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/) | [C++](./solutions/LongestConsecutiveSequence/solution.cpp) [Python](./solutions/LongestConsecutiveSequence/solution.py)| given unsorted array find the longest consecutive sequence (if the array was sorted)  |
| 133 | [Clone Graph](https://leetcode.com/problems/clone-graph/) | [C++](./solutions/CloneGraph/solution.cpp) | use recursion and hash map |
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
| 155 | [Min Stack](https://leetcode.com/problems/min-stack/)| [C++](./solutions/MinStack/solution.cpp) | classic, with a trick we can use just one stack |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element/) | [C++](./solutions/MajorityElement/solution.cpp)| Boyer–Moore majority vote algorithm |
| 179 | [Largest Number](https://leetcode.com/problems/largest-number/) | [C++](./solutions/LargestNumber/solution.cpp) [Python](./solutions/LargestNumber/solution.py)| array of non-negative ints give. Arrange themm so that they form largest number possible. Need a clever comparison operator |
| 188 | [Best Time To Buy And Sell Stock IV](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/) | [C++](./solutions/BestTimeToBuyAndSellStockIV/solution.cpp) [Python](./solutions/BestTimeToBuyAndSellStockIV/solution.py) | k transactions allowed |
| 189 | [Rotate Array](https://leetcode.com/problems/rotate-array/) | [C++](./solutions/RotateArray/solution.cpp) |  |
| 190 | [Reverse Bits](https://leetcode.com/problems/reverse-bits/) | [C++](./solutions/ReverseBits/solution.cpp) | O(N) and O(1) solutions |
| 191 | [Number Of1 Bits](https://leetcode.com/problems/number-of-1-bits/) | [C++](./solutions/NumberOf1Bits/solution.cpp) | find number of bits set to '1' in a given var, solution in O(N) N - number of '1's |
| 198 | [House Robber](https://leetcode.com/problems/house-robber/) | [C++](./solutions/HouseRobber/solution.cpp)| |
| 199 | [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/) | [C++](./solutions/BinaryTreeRightSideView/solution.cpp) [Python](./solutions/BinaryTreeRightSideView/solution.py)| dfs preorder traversal or bfs |
| 200 | [Number Of Islands](https://leetcode.com/problems/number-of-islands/) | [C++](./solutions/NumberOfIslands/solution.cpp)| count islands in a binary matrix |
| 204 | [Count Primes](https://leetcode.com/problems/count-primes/) | [Python](./solutions/CountPrimes/solution.py) | Eratosthenes sieve |
| 205 | [Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/) | [C++](./solutions/IsomorphicStrings/solution.cpp) [Python](./solutions/IsomorphicStrings/solution.py)| hash, string play |
| 207 | [Course Schedule](https://leetcode.com/problems/course-schedule/) | [Python](./solutions/CourseSchedule/solution.py)  | dfs |
| 208 | [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/) | [C++](./solutions/ImplementTriePrefixTree/solution.cpp)  | trie |
| 210 | [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/) | [C++](./solutions/CourseScheduleII/solution.cpp)  | topological sort |
| 213 | [House Robber II](https://leetcode.com/problems/house-robber-ii/) | [Python](./solutions/HouseRobberII/solution.py)| like a classic house robber but houses arranged in circle |
| 218 | [The Skyline Problem](https://leetcode.com/problems/the-skyline-problem/) | [Python](./solutions/TheSkylineProblem/solution.py)| each building given as [leftX, rightX, height], return a set of points defining the skyline. use edges and heap |
| 221 | [Maximal Square](https://leetcode.com/problems/maximal-square/) | [Python](./solutions/MaximalSquare/solution.py)| binary matrix with 0's and 1's, find largest square made of 1's. use dp. |
| 224 | [Basic Calculator](https://leetcode.com/problems/basic-calculator/) | [Python](./solutions/BasicCalculator/solution.py)| add, deduct and parenthesis |
| 226 | [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/) | [C++](./solutions/InvertBinaryTree/solution.cpp)| |
| 227 | [Basic Calculator II](https://leetcode.com/problems/basic-calculator-ii/) | [C++](./solutions/BasicCalculatorII/solution.cpp) [Python](./solutions/BasicCalculatorII/solution.py)| add, deduct, multiply and divide, cool C++ |
| 230 | [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) | [Python](./solutions/KthSmallestElementInABST/solution.py)| do in-order traversal while counting |
| 232 | [Implement Queue Using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | [C++](./solutions/ImplementQueueUsingStacks/solution.cpp) | use one stack for input and one for output |
| 236 | [Lowest Common Ancestor Of A Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) | [C++](./solutions/LowestCommonAncestorOfABinaryTree/solution.cpp) [Python](./solutions/LowestCommonAncestorOfABinaryTree/solution.py)| as title, collect full paths to both nodes first and then easy solve, can be done easier |
| 238 | [Product Of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | [C++](./solutions/ProductOfArrayExceptSelf/solution.cpp) | int array 'a' given, create a new array 'b' where b[i] = a[0] * a[1] * ... * a[i-1] * a[i+1] * ... * a[sz-1] |
| 268 | [Missing Number](https://leetcode.com/problems/missing-number/) | [C++](./solutions/MissingNumber/solution.cpp) | classic xor  |
| 273 | [Integer To English Words](https://leetcode.com/problems/integer-to-english-words/) | [Python](./solutions/IntegerToEnglishWords/solution.py)| classic, recursion, try also word to integer |
| 274 | [H-Index](https://leetcode.com/problems/h-index/) | [C++](./solutions/H-Index/solution.cpp) [Python](./solutions/H-Index/solution.py)| definition of index h - if h of n papers have at least h citations each, and the other n − h papers have no more than h citations each. |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) | [C++](./solutions/MoveZeroes/solution.cpp)| in the array move all 0s to the end  |
| 289 | [Game Of Life](https://leetcode.com/problems/game-of-life/) | [C++](./solutions/GameOfLife/solution.cpp) | Cellular automaton. The values in the grid are only '0' and '1' so to solve it can just use other bits |
| 292 | [Nim Game](https://leetcode.com/problems/nim-game/) | [Python](./solutions/NimGame/solution.py)| heap of stones, players can remove 1,2, or 3. To win, you need to take the last stone  |
| 295 | [Find Median From Data Stream](https://leetcode.com/problems/find-median-from-data-stream/) | [C++](./solutions/FindMedianFromDataStream/solution.cpp) | two heaps and keep them balanced |
| 297 | [Serialize And Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) | [Python](./solutions/SerializeAndDeserializeBinaryTree/solution.py) [C++](./solutions/SerializeAndDeserializeBinaryTree/solution.cpp) | pre-order traversal works, not sure about formal proof, easy to see that post and in-order traversals not up to the task  |
| 300 | [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/ ) | [C++](./solutions/LongestIncreasingSubsequence/solution.cpp) [Python](./solutions/LongestIncreasingSubsequence/solution.py)| C++ solution easy dp in O(N^2), Python a bit tricky in O(NlnN), matma |
| 309 | [Best Time To Buy And Sell Stock With Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/) | [Python](./solutions/BestTimeToBuyAndSellStockWithCooldown/solution.py) [C++](./solutions/BestTimeToBuyAndSellStockWithCooldown/solution.cpp)|  |
| 315 | [Count Of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) | [C++](./solutions/CountOfSmallerNumbersAfterSelf/solution.cpp) [Python](./solutions/CountOfSmallerNumbersAfterSelf/solution.py)| merge sort solution  |
| 322 | [Coin Change](https://leetcode.com/problems/coin-change/) | [C++](./solutions/CoinChange/solution.cpp) | classic dp, the fewest number of coins to make up the amount |
| 324 | [Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/) | [C++](./solutions/WiggleSortII/solution.cpp) | Given an int array nums, reorder it such that nums[0] < nums[1] > nums[2] < nums[3].... |
| 327 | [Count Of Range Sum](https://leetcode.com/problems/count-of-range-sum/) | [Python](./solutions/CountOfRangeSum/solution.py)| Given an int array and two ints lower and upper, return the number of range sums that lie in [lower, upper] inclusive. Prefix sum + merge sort |
| 329 | [Longest Increasing Path In A Matrix](https://leetcode.com/problems/longest-increasing-path-in-a-matrix/) | [Python](./solutions/LongestIncreasingPathInAMatrix/solution.py)| dfs with memiozation, try also topological sort |
| 334 | [Increasing Triplet Subsequence](https://leetcode.com/problems/increasing-triplet-subsequence/) | [Python](./solutions/IncreasingTripletSubsequence/solution.py) | |
| 337 | [House Robber III](https://leetcode.com/problems/house-robber-iii/) | [C++](./solutions/HouseRobberIII/solution.cpp)| house robber in a binary tree |
| 338 | [Counting Bits](https://leetcode.com/problems/counting-bits/) | [C++](./solutions/CountingBits/solution.cpp) | for a sequence of ints e.g 1,2,3,4,5 calculate mapping int - number of bits in binary representation  |
| 348 | [Shuffle An Array](https://leetcode.com/problems/shuffle-an-array/) | [C++](./solutions/ShuffleAnArray/solution.cpp) | Fisher Yates Algorithm for random shuffling |
| 354 | [Russian Doll Envelopes](https://leetcode.com/problems/russian-doll-envelopes/) | [C++](./solutions/RussianDollEnvelopes/solution.cpp) | kind of matryoshka problem with 2d envelopes. sort and then dp |
| 375 | [Guess Number Higher Or Lower II](https://leetcode.com/problems/guess-number-higher-or-lower-ii/) | [C++](./solutions/GuessNumberHigherOrLowerII/solution.cpp) | kind of minimax with transposition table/memoization |
| 380 | [Insert Delete Get Random in O(1)](https://leetcode.com/problems/insert-delete-getrandom-o1/) | [C++](./solutions/InsertDeleteGetRandomO1/solution.cpp) | class to insert values, delete and get random |
| 394 | [Decode String](https://leetcode.com/problems/decode-string/) | [Python](./solutions/DecodeString/solution.py)| string encoded with ints, brackets and chars. use stack. |
| 403 | [Frog Jump](https://leetcode.com/problems/frog-jump/) | [Python](./solutions/FrogJump/solution.py)| array of ints gives mapping index to position, frog jumping, dp |
| 406 | [Queue Reconstruction By Height](https://leetcode.com/problems/queue-reconstruction-by-height/) | [C++](./solutions/QueueReconstructionByHeight/solution.cpp) [Python](./solutions/QueueReconstructionByHeight/solution.py)| array of pairs (person's height, person's position in the original queue) given. Reconstruct the queue based on the array. |
| 413 | [Arithmetic Slices](https://leetcode.com/problems/arithmetic-slices/) | [Python](./solutions/ArithmeticSlices/solution.py)| Gauss formula |
| 416 | [Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/) | [Python](./solutions/PartitionEqualSubsetSum/solution.py)| can split array into two that have same sum, dp knapsack problem |
| 438 | [Find All Anagrams In A String](https://leetcode.com/problems/find-all-anagrams-in-a-string/) | [C++](./solutions/FindAllAnagramsInAString/solution.cpp) | 2 strings,get all indices of p anagrams in s.sliding window |
| 445 | [Add Two Numbers II](https://leetcode.com/problems/add-two-numbers-ii/) | [C++](./solutions/AddTwoNumbersII/solution.cpp)| reverse linked list |
| 450 | [Delete Node In A BST](https://leetcode.com/problems/delete-node-in-a-bst/) | [C++](./solutions/DeleteNodeInABST/solution.cpp) [Python](./solutions/DeleteNodeInABST/solution.py)| dfs, find the node, if it has only left child - its easy, if it has both - find min value in the right child branch then easy |
| 451 | [Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) | [Python](./solutions/SortCharactersByFrequency/solution.py)|  |
| 453 | [Minimum Number Of Arrows To Burst Balloons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) | [Python](./solutions/MinimumNumberOfArrowsToBurstBalloons/solution.py)| sort and greedy  |
| 460 | [LFU Cache](https://leetcode.com/problems/lfu-cache/) | [C++](./solutions/LFUCache/solution.cpp) [Python](./solutions/LFUCache/solution.py)| C++ solution optimal, Python stuff my more naive implementation |
| 464 | [Can I Win](https://leetcode.com/problems/can-i-win/) | [C++](./solutions/CanIWin/solution.cpp) | game in which players alternate and take numbers from pool until a certain sum is reached, minimax with tt |
| 474 | [Ones And Zeroes](https://leetcode.com/problems/ones-and-zeroes/) | [C++](./solutions/OnesAndZeroes/solution.cpp) [Python](./solutions/OnesAndZeroes/solution.py)| given a set of binary strings. Pick as many as you can constraint being you end up with max total number of 0s m and 1s n, knapsack kind of in 2d, dp |
| 493 | [Reverse Pairs](https://leetcode.com/problems/reverse-pairs/) | [C++](./solutions/ReversePairs/solution.cpp) | merge sort solution |
| 494 | [Target Sum](https://leetcode.com/problems/target-sum/) | [Python](./solutions/TargetSum/solution.py)| given a sequence of ints, insert '+'s and '-'s to end up with target sum |
| 503 | [Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/) | [Python](./solutions/NextGreaterElementII/solution.py)| given circular array find next greater number for every element, use stack |
| 516 | [Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/) | [C++](./solutions/LongestPalindromicSubsequence/solution.cpp) | classic dp |
| 518 | [Coin Change 2](https://leetcode.com/problems/coin-change-2/) | [C++](./solutions/CoinChange2/solution.cpp) | classic dp, the number of combinations that make up the amount |
| 532 | [K Diff Pairs In An Array](https://leetcode.com/problems/k-diff-pairs-in-an-array/) |  [Python](./solutions/KDiffPairsInAnArray/solution.py)| find all unique pairs for which diff equals k |
| 539 | [Minimum Time Difference](https://leetcode.com/problems/minimum-time-difference/) | [Python](./solutions/MinimumTimeDifference/solution.py) | convert to minutes and sort |
| 542 | [01 Matrix](https://leetcode.com/problems/01-matrix/) | [Python](./solutions/01Matrix/solution.py)| binary matrix, for each cell calculate distance from the neareast '0'. bfs. |
| 543 | [Diameter Of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/) | [C++](./solutions/DiameterOfBinaryTree/solution.cpp) | logest path between any two nodes. Solve it by finding depths of subtrees |
| 560 | [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/) | [Python](./solutions/SubarraySumEqualsK/solution.py)| total number of continuous subarrays whose sum equals to k, use hashing |
| 575 | [Distribute Candies](https://leetcode.com/problems/distribute-candies/) | [Python](./solutions/DistributeCandies/solution.py)| n candies given, can be of different types, take half and maximize number of different types |
| 617 | [Merge Two Binary Trees](https://leetcode.com/problems/merge-two-binary-trees/) | [C++](./solutions/MergeTwoBinaryTrees/solution.cpp) | as title says |
| 621 | [Task Scheduler](https://leetcode.com/problems/task-scheduler/) | [Python](./solutions/TaskScheduler/solution.py) [C++](./solutions/TaskScheduler/solution.cpp) | python solution with heap and C++ more direct |
| 684 | [Redundant Connection](https://leetcode.com/problems/redundant-connection/) | [C++](./solutions/RedundantConnection/solution.cpp) [Python](./solutions/RedundantConnection/solution.py)| build graph one edge at a time. Other solution brute force  |
| 713 | [Subarray Product Less Than K](https://leetcode.com/problems/subarray-product-less-than-k/) | [Python](./solutions/SubarrayProductLessThanK/solution.py) | find number of subarrays where the product of all the elements is less than given k, sliding window |
| 714 | [Best Time To Buy And Sell Stock With Transaction Fee](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/) | [Python](./solutions/BestTimeToBuyAndSellStockWithTransactionFee/solution.py)|  |
| 718 | [Maximum Length of Repeated Subarray](https://leetcode.com/problems/maximum-length-of-repeated-subarray/) | [Python](./solutions/MaximumLengthOfRepeatedSubarray/solution.py)| two arrays given, longest common subarray, dp  |
| 735 | [Asteroid Collision](https://leetcode.com/problems/asteroid-collision/) | [Python](./solutions/AsteroidCollision/solution.py)| classic stack problem with collisions |
| 739 | [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/) | [Python](./solutions/DailyTemperatures/solution.py)| for each day find number of days to wait for warmer temperature, use stack |
| 752 | [Open The Lock](https://leetcode.com/problems/open-the-lock/) | [C++](./solutions/OpenTheLock/solution.cpp) | graph problem, bfs |
| 766 | [Toeplitz Matrix](https://leetcode.com/problems/toeplitz-matrix/) | [C++](./solutions/ToeplitzMatrix/solution.cpp) | matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements |
| 785 | [Is Graph Bipartite](https://leetcode.com/problems/is-graph-bipartite/) | [Python](./solutions/IsGraphBipartite/solution.py)| can nodes be split into two groups and every edge connects these two groups, bfs or dfs |
| 787 | [Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/) | [Python](./solutions/CheapestFlightsWithinKStops/solution.py)| weighted graph given anf find the cheapest path from src to dst that has maximum K stops, dfs or bfs or other approaches |
| 873 | [Length Of Longest Fibonacci Subsequence](https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/) | [Python](./solutions/LengthOfLongestFibonacciSubsequence/solution.py)| brute force, try also dp |
| 875 | [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/) | [C++](./solutions/KokoEatingBananas/solution.cpp)| max speed that satisfies a specific condition, use binary search |
| 877 | [Stone Game](https://leetcode.com/problems/stone-game/) | [C++](./solutions/StoneGame/solution.cpp)| dp |
| 907 | [Sum Of Subarray Minimums](https://leetcode.com/problems/sum-of-subarray-minimums/) | [Python](./solutions/SumOfSubarrayMinimums/solution.py)| sum mins for all subarrays, use stack |
| 931 | [Minimum Falling Path Sum](https://leetcode.com/problems/minimum-falling-path-sum/) | [Python](./solutions/MinimumFallingPathSum/solution.py)| dp, similar to 1937 |
| 934 | [Shortest Bridge](https://leetcode.com/problems/shortest-bridge/) | [Python](./solutions/ShortestBridge/solution.py)| grid with 2 islands, find the shortest bridge, bfs to expand island 1 until we hit island 2 |
| 954 | [Array Of Doubled Pairs](https://leetcode.com/problems/array-of-doubled-pairs/) | [C++](./solutions/ArrayOfDoubledPairs/solution.cpp) [Python](./solutions/ArrayOfDoubledPairs/solution.py)| re-arrange array so that each value has a pair twice as big |
| 957 | [Prison Cells After N Days](https://leetcode.com/problems/prison-cells-after-n-days/) | [Python](./solutions/PrisonCellsAfterNDays/solution.py) | cells become occupied or vacant, similar to bulbs, find cycle so we don't simulate it too many times |
| 969 | [Pancake Sorting](https://leetcode.com/problems/pancake-sorting/) | [Python](./solutions/PancakeSorting/solution.py)| should be self descriptive |
| 988 | [Smallest String Starting From Leaf](https://leetcode.com/problems/smallest-string-starting-from-leaf/) | [C++](./solutions/SmallestStringStartingFromLeaf/solution.cpp) | dfs |
| 990 | [Satisfiability Of Equality Equations](https://leetcode.com/problems/satisfiability-of-equality-equations/) | [C++](./solutions/SatisfiabilityOfEqualityEquations/solution.cpp) | check if a set of equations with '!=' and '==' can be satisfied. classic dfs and union find |
| 992 | [Subarrays With K Different Integers](https://leetcode.com/problems/subarrays-with-k-different-integers/) | [Python](./solutions/SubarraysWithKDifferentIntegers/solution.py)| int array nums and int k given, return the number of good subarrays. in good array number of different ints is exactly k. sliding window |
| 994 | [Rotting Oranges](https://leetcode.com/problems/rotting-oranges/) | [C++](./solutions/RottingOranges/solution.cpp) | matrix problem, to solve do simulation |
| 996 | [Number Of Squareful Arrays](https://leetcode.com/problems/number-of-squareful-arrays/) | [C++](./solutions/NumberOfSquarefulArrays/solution.cpp) | find array permutations that would result in squarefl array, brute force or kind of Hamiltonian problem |
| 1004 | [Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/) | [C++](./solutions/MaxConsecutiveOnesIII/solution.cpp) | binary array and we can flip at most k '0's. What's the longest sequence of '1' we can get. Special case also solved in cpp file - what if only one '0' can be flipped. Classic sliding window. |
| 1007 | [Minimum Domino Rotations For Equal Row](https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/) | [C++](./solutions/MinimumDominoRotationsForEqualRow/solution.cpp) | row of dominos give. If we can rotate some of them to get same value in a row, what's the minimum number of rotations. |
| 1031 | [Maximum Sum Of Two Non Overlapping Subarrays](https://leetcode.com/problems/maximum-sum-of-two-non-overlapping-subarrays/) | [C++](./solutions/MaximumSumOfTwoNonOverlappingSubarrays/solution.cpp) | title says it all also Alice and Bob picking Apples |
| 1081 | [Smallest Subsequence Of Distinct Characters](https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/) | [Python](./solutions/SmallestSubsequenceOfDistinctCharacters/solution.py) | hashing and intuition |
| 1092 | [Shortest Common Supersequence](https://leetcode.com/problems/shortest-common-supersequence/) | [C++](./solutions/ShortestCommonSupersequence/solution.cpp) [Python](./solutions/ShortestCommonSupersequence/solution.py)| Given two strings, return the shortest string that has both as subsequences. LCS. DFS + memiozation gets memory limit exceeded |
| 1110 | [Delete Nodes And Return Forest](https://leetcode.com/problems/delete-nodes-and-return-forest/) | [C++](./solutions/DeleteNodesAndReturnForest/solution.cpp) | dfs |
| 1124 | [Longest Well Performing Interval](https://leetcode.com/problems/longest-well-performing-interval/) | [Python](./solutions/LongestWellPerformingInterval/solution.py)| binary array, find longest subarray with more 1s than 0s, hashing to solve in linear time |
| 1143 | [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) | [Python](./solutions/LongestCommonSubsequence/solution.py)| two strings and find LCS, dp |
| 1192 | [Critical Connections In A Network](https://leetcode.com/problems/critical-connections-in-a-network/) | [Python](./solutions/CriticalConnectionsInANetwork/solution.py) | removing what edges would result in disconnected graph. Tarjan's strongly connected components algorithm |
| 1221 | [Split A String In Balanced Strings](https://leetcode.com/problems/split-a-string-in-balanced-strings/) | [C++](./solutions/SplitAStringInBalancedStrings/solution.cpp) | split binary string in balanced substrings |
| 1239 | [Maximum Length Of A Concatenated String With Unique Characters](https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/) | [C++](./solutions/MaximumLengthOfAConcatenatedStringWithUniqueCharacters/solution.cpp) | glue strings together, needs to have unique chars, dfs + bitmasks, string play |
| 1244 | [Design A Leaderboard](https://leetcode.com/problems/design-a-leaderboard/) | [C++](./solutions/DesignALeaderboard/solution.cpp) | locked on lc, top K stocks on blmbrg interview, keep track of stocks traded and impement a function to print K most traded, hash map (to map stock to volume) and multimap (to map volume to stock) |
| 1247 | [Minimum Swaps To Make Strings Equal](https://leetcode.com/problems/minimum-swaps-to-make-strings-equal/) | [Python](./solutions/MinimumSwapsToMakeStringsEqual/solution.py)| two binary strings s1 and s2, can only swap chars between s1 and s2, minimum swaps to make them equal |
| 1249 | [Minimum Remove To Make Valid Parentheses](https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/) | [C++](./solutions/MinimumRemoveToMakeValidParentheses/solution.cpp) | stack solution |
| 1325 | [Delete Leaves With A Given Value](https://leetcode.com/problems/delete-leaves-with-a-given-value/) | [C++](./solutions/DeleteLeavesWithAGivenValue/solution.cpp) | dfs |
| 1338 | [Reduce Array Size To The Half](https://leetcode.com/problems/reduce-array-size-to-the-half/) | [C++](./solutions/ReduceArraySizeToTheHalf/solution.cpp) | Choose a set of ints from array and remove all their occurrences. Return the minimum size of the set so that at least half of the integers of the array are removed. Sort + greedy. |
| 1382 | [Balance A Binary Search Tree](https://leetcode.com/problems/balance-a-binary-search-tree/) | [C++](./solutions/BalanceABinarySearchTree/solution.cpp) | given a root of BST, return a balanced BST, easy solution - in order traversal to collect numbers then construct balanced BST, try also DSW algorithm |
| 1395 | [Count Number Of Teams](https://leetcode.com/problems/count-number-of-teams/) | [Python](./solutions/CountNumberOfTeams/solution.py)| basically in ints array find triplets that increase, in O(N^2) easy, try also balanced tree and bs |
| 1405 | [Longest Happy String](https://leetcode.com/problems/longest-happy-string/) | [C++](./solutions/LongestHappyString/solution.cpp)| string composed only of 'a', 'b', 'c'. Cannot have triplets (e.g. 'bbb'). Can have at most a occurences of 'a', b of 'b', c of 'c'.Construct longest possible. Similar to 621 (Task Scheduler)|
| 1488 | [Avoid Flood In The City](https://leetcode.com/problems/avoid-flood-in-the-city/) | [C++](./solutions/AvoidFloodInTheCity/solution.cpp) | info in solution file |
| 1514 | [Path with Maximum Probability](https://leetcode.com/problems/path-with-maximum-probability/) | [C++](./solutions/PathWithMaximumProbability/solution.cpp)  | Dijkstra's algorithm |
| 1528 | [Shuffle String](https://leetcode.com/problems/shuffle-string/) | [C++](./solutions/ShuffleString/solution.cpp) | shuffle string according to the mapping given |
| 1584 | [Min Cost To Connect All Points](https://leetcode.com/problems/min-cost-to-connect-all-points/) | [Python](./solutions/MinCostToConnectAllPoints/solution.py) | minimum spanning tree |
| 1685 | [Sum Of Absolute Differences In A Sorted Array](https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/) | [Python](./solutions/SumOfAbsoluteDifferencesInASortedArray/solution.py)| for each element in array find sum of abs differences, use formula to do it in O(N) |
| 1705 | [Maximum Number Of Eaten Apples](https://leetcode.com/problems/maximum-number-of-eaten-apples/) | [C++](./solutions/MaximumNumberOfEatenApples/solution.cpp) | each day apples grow and rot, how many can we eat, heap |
| 1937 | [Maximum Number Of Points With Cost](https://leetcode.com/problems/maximum-number-of-points-with-cost/) | [C++](./solutions/MaximumNumberOfPointsWithCost/solution.cpp)| dp |
| 1942 | [The Number Of The Smallest Unoccupied Chair](https://leetcode.com/problems/the-number-of-the-smallest-unoccupied-chair/) | [C++](./solutions/TheNumberOfTheSmallestUnoccupiedChair/solution.cpp)| numbered chairs taken/freed by arriving/leaving guests. What chair will be taken by a concrete guest. sort times. use hash map and heap. |
| 2080 | [Range Frequency Queries](https://leetcode.com/problems/range-frequency-queries/) | [C++](./solutions/RangeFrequencyQueries/solution.cpp) | query[l,r,v] to see how many files value v appears in the array between indexes l and r. binary search. |
| 2096 | [Step By Step Directions From A Binary Tree Node To Another](https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another/) |  [Python](./solutions/StepByStepDirectionsFromABinaryTreeNodeToAnother/solution.py)| use lowest common ancestor solution |
| 2104 | [Sum Of Subarray Ranges](https://leetcode.com/problems/sum-of-subarray-ranges/) | [Python](./solutions/SumOfSubarrayRanges/solution.py)| almost same as Sum Of Subarray Minimums, one pass for min and one for max |
| 2134 | [Minimum Swaps To Group All 1s Together II](https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/) | [Python](./solutions/MinimumSwapsToGroupAll1sTogetherII/solution.py)| Given a binary circular array nums, return the minimum number of swaps required to group all 1s present in the array together at any location. Sliding window. |
| 2135 | [Count Words Obtained After Adding A Letter](https://leetcode.com/problems/count-words-obtained-after-adding-a-letter/) | [C++](./solutions/CountWordsObtainedAfterAddingALetter/solution.cpp) | add char and reshuffle to see if can arrive at other string, bitmask + hash map, try also sort and trie, string play |
| 2145 | [Count The Hidden Sequences](https://leetcode.com/problems/count-the-hidden-sequences/) | [Python](./solutions/CountTheHiddenSequences/solution.py)| given array of diffs between consecutive elements in a hidden array. Also given max and min element that can be in the hidden array. Find number of possible hidden arrays. matma |
| 2163 | [Minimum Difference In Sums After Removal Of Elements](https://leetcode.com/problems/minimum-difference-in-sums-after-removal-of-elements/) | [C++](./solutions/MinimumDifferenceInSumsAfterRemovalOfElements/solution.cpp) | array has 3 * n ints, remove n elements to minimize left - right, left is sum of first n elements after removal, right is sum of last n. heap |
| no number | [Candy Crush 1D](https://leetcode.com/discuss/interview-question/380650/Bloomberg-or-Phone-Screen-or-Candy-Crush-1D) | [C++](./solutions/CandyCrush1D/solution.cpp) | candy crush in 1D, blmbrg interview |

