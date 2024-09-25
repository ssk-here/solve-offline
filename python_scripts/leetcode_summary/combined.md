----

# Merge k Sorted Lists

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/merge-k-sorted-lists

## Content

<p>You are given an array of <code>k</code> linked-lists <code>lists</code>, each linked-list is sorted in ascending order.</p>

<p><em>Merge all the linked-lists into one sorted linked-list and return it.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Reverse Nodes in k-Group

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/reverse-nodes-in-k-group

## Content

<p>Given the <code>head</code> of a linked list, reverse the nodes of the list <code>k</code> at a time, and return <em>the modified list</em>.</p>

<p><code>k</code> is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of <code>k</code> then left-out nodes, in the end, should remain as it is.</p>

<p>You may not alter the values in the list&#39;s nodes, only nodes themselves may be changed.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Longest Valid Parentheses

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/longest-valid-parentheses

## Content

<p>Given a string containing just the characters <code>&#39;(&#39;</code> and <code>&#39;)&#39;</code>, return <em>the length of the longest valid (well-formed) parentheses </em><span data-keyword="substring-nonempty"><em>substring</em></span>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int longestValidParentheses(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# First Missing Positive

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/first-missing-positive

## Content

<p>Given an unsorted integer array <code>nums</code>. Return the <em>smallest positive integer</em> that is <em>not present</em> in <code>nums</code>.</p>

<p>You must implement an algorithm that runs in <code>O(n)</code> time and uses <code>O(1)</code> auxiliary space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Binary Tree Maximum Path Sum

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/binary-tree-maximum-path-sum

## Content

<p>A <strong>path</strong> in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence <strong>at most once</strong>. Note that the path does not need to pass through the root.</p>

<p>The <strong>path sum</strong> of a path is the sum of the node&#39;s values in the path.</p>

<p>Given the <code>root</code> of a binary tree, return <em>the maximum <strong>path sum</strong> of any <strong>non-empty</strong> path</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Word Ladder

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/word-ladder

## Content

<p>A <strong>transformation sequence</strong> from word <code>beginWord</code> to word <code>endWord</code> using a dictionary <code>wordList</code> is a sequence of words <code>beginWord -&gt; s<sub>1</sub> -&gt; s<sub>2</sub> -&gt; ... -&gt; s<sub>k</sub></code> such that:</p>

<ul>
	<li>Every adjacent pair of words differs by a single letter.</li>
	<li>Every <code>s<sub>i</sub></code> for <code>1 &lt;= i &lt;= k</code> is in <code>wordList</code>. Note that <code>beginWord</code> does not need to be in <code>wordList</code>.</li>
	<li><code>s<sub>k</sub> == endWord</code></li>
</ul>

<p>Given two words, <code>beginWord</code> and <code>endWord</code>, and a dictionary <code>wordList</code>, return <em>the <strong>number of words</strong> in the <strong>shortest transformation sequence</strong> from</em> <code>beginWord</code> <em>to</em> <code>endWord</code><em>, or </em><code>0</code><em> if no such sequence exists.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Candy

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/candy

## Content

<p>There are <code>n</code> children standing in a line. Each child is assigned a rating value given in the integer array <code>ratings</code>.</p>

<p>You are giving candies to these children subjected to the following requirements:</p>

<ul>
	<li>Each child must have at least one candy.</li>
	<li>Children with a higher rating get more candies than their neighbors.</li>
</ul>

<p>Return <em>the minimum number of candies you need to have to distribute the candies to the children</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int candy(vector<int>& ratings) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Basic Calculator

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/basic-calculator

## Content

<p>Given a string <code>s</code> representing a valid expression, implement a basic calculator to evaluate it, and return <em>the result of the evaluation</em>.</p>

<p><strong>Note:</strong> You are <strong>not</strong> allowed to use any built-in function which evaluates strings as mathematical expressions, such as <code>eval()</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int calculate(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Sliding Window Maximum

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/sliding-window-maximum

## Content

<p>You are given an array of integers&nbsp;<code>nums</code>, there is a sliding window of size <code>k</code> which is moving from the very left of the array to the very right. You can only see the <code>k</code> numbers in the window. Each time the sliding window moves right by one position.</p>

<p>Return <em>the max sliding window</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Russian Doll Envelopes

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/russian-doll-envelopes

## Content

<p>You are given a 2D array of integers <code>envelopes</code> where <code>envelopes[i] = [w<sub>i</sub>, h<sub>i</sub>]</code> represents the width and the height of an envelope.</p>

<p>One envelope can fit into another if and only if both the width and height of one envelope are greater than the other envelope&#39;s width and height.</p>

<p>Return <em>the maximum number of envelopes you can Russian doll (i.e., put one inside the other)</em>.</p>

<p><strong>Note:</strong> You cannot rotate an envelope.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Prefix and Suffix Search

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/prefix-and-suffix-search

## Content

<p>Design a special dictionary that searches the words in it by a prefix and a suffix.</p>

<p>Implement the <code>WordFilter</code> class:</p>

<ul>
	<li><code>WordFilter(string[] words)</code> Initializes the object with the <code>words</code> in the dictionary.</li>
	<li><code>f(string pref, string suff)</code> Returns <em>the index of the word in the dictionary,</em> which has the prefix <code>pref</code> and the suffix <code>suff</code>. If there is more than one valid index, return <strong>the largest</strong> of them. If there is no such word in the dictionary, return <code>-1</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class WordFilter {
public:
    WordFilter(vector<string>& words) {
        
    }
    
    int f(string pref, string suff) {
        
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(pref,suff);
 */
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Sliding Puzzle

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/sliding-puzzle

## Content

<p>On an <code>2 x 3</code> board, there are five tiles labeled from <code>1</code> to <code>5</code>, and an empty square represented by <code>0</code>. A <strong>move</strong> consists of choosing <code>0</code> and a 4-directionally adjacent number and swapping it.</p>

<p>The state of the board is solved if and only if the board is <code>[[1,2,3],[4,5,0]]</code>.</p>

<p>Given the puzzle board <code>board</code>, return <em>the least number of moves required so that the state of the board is solved</em>. If it is impossible for the state of the board to be solved, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Count Vowels Permutation

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/count-vowels-permutation

## Content

<p>Given an integer <code>n</code>, your task is to count how many strings of length <code>n</code> can be formed under the following rules:</p>

<ul>
	<li>Each character is a lower case vowel&nbsp;(<code>&#39;a&#39;</code>, <code>&#39;e&#39;</code>, <code>&#39;i&#39;</code>, <code>&#39;o&#39;</code>, <code>&#39;u&#39;</code>)</li>
	<li>Each vowel&nbsp;<code>&#39;a&#39;</code> may only be followed by an <code>&#39;e&#39;</code>.</li>
	<li>Each vowel&nbsp;<code>&#39;e&#39;</code> may only be followed by an <code>&#39;a&#39;</code>&nbsp;or an <code>&#39;i&#39;</code>.</li>
	<li>Each vowel&nbsp;<code>&#39;i&#39;</code> <strong>may not</strong> be followed by another <code>&#39;i&#39;</code>.</li>
	<li>Each vowel&nbsp;<code>&#39;o&#39;</code> may only be followed by an <code>&#39;i&#39;</code> or a&nbsp;<code>&#39;u&#39;</code>.</li>
	<li>Each vowel&nbsp;<code>&#39;u&#39;</code> may only be followed by an <code>&#39;a&#39;</code>.</li>
</ul>

<p>Since the answer&nbsp;may be too large,&nbsp;return it modulo&nbsp;<code>10^9 + 7</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int countVowelPermutation(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Minimum Difficulty of a Job Schedule

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule

## Content

<p>You want to schedule a list of jobs in <code>d</code> days. Jobs are dependent (i.e To work on the <code>i<sup>th</sup></code> job, you have to finish all the jobs <code>j</code> where <code>0 &lt;= j &lt; i</code>).</p>

<p>You have to finish <strong>at least</strong> one task every day. The difficulty of a job schedule is the sum of difficulties of each day of the <code>d</code> days. The difficulty of a day is the maximum difficulty of a job done on that day.</p>

<p>You are given an integer array <code>jobDifficulty</code> and an integer <code>d</code>. The difficulty of the <code>i<sup>th</sup></code> job is <code>jobDifficulty[i]</code>.</p>

<p>Return <em>the minimum difficulty of a job schedule</em>. If you cannot find a schedule for the jobs return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximum Score from Performing Multiplication Operations

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/maximum-score-from-performing-multiplication-operations

## Content

<p>You are given two <strong>0-indexed</strong> integer arrays <code>nums</code> and <code>multipliers</code><strong> </strong>of size <code>n</code> and <code>m</code> respectively, where <code>n &gt;= m</code>.</p>

<p>You begin with a score of <code>0</code>. You want to perform <strong>exactly</strong> <code>m</code> operations. On the <code>i<sup>th</sup></code> operation (<strong>0-indexed</strong>) you will:</p>

<ul>
    <li>Choose one integer <code>x</code> from <strong>either the start or the end </strong>of the array <code>nums</code>.</li>
    <li>Add <code>multipliers[i] * x</code> to your score.
    <ul>
        <li>Note that <code>multipliers[0]</code> corresponds to the first operation, <code>multipliers[1]</code> to the second operation, and so on.</li>
    </ul>
    </li>
    <li>Remove <code>x</code> from <code>nums</code>.</li>
</ul>

<p>Return <em>the <strong>maximum</strong> score after performing </em><code>m</code> <em>operations.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Sum of Prefix Scores of Strings

**Difficulty:** Hard

**Link:** https://leetcode.com/problems/sum-of-prefix-scores-of-strings

## Content

<p>You are given an array <code>words</code> of size <code>n</code> consisting of <strong>non-empty</strong> strings.</p>

<p>We define the <strong>score</strong> of a string <code>word</code> as the <strong>number</strong> of strings <code>words[i]</code> such that <code>word</code> is a <strong>prefix</strong> of <code>words[i]</code>.</p>

<ul>
	<li>For example, if <code>words = [&quot;a&quot;, &quot;ab&quot;, &quot;abc&quot;, &quot;cab&quot;]</code>, then the score of <code>&quot;ab&quot;</code> is <code>2</code>, since <code>&quot;ab&quot;</code> is a prefix of both <code>&quot;ab&quot;</code> and <code>&quot;abc&quot;</code>.</li>
</ul>

<p>Return <em>an array </em><code>answer</code><em> of size </em><code>n</code><em> where </em><code>answer[i]</code><em> is the <strong>sum</strong> of scores of every <strong>non-empty</strong> prefix of </em><code>words[i]</code>.</p>

<p><strong>Note</strong> that a string is considered as a prefix of itself.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Add Two Numbers

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/add-two-numbers

## Content

<p>You are given two <strong>non-empty</strong> linked lists representing two non-negative integers. The digits are stored in <strong>reverse order</strong>, and each of their nodes contains a single digit. Add the two numbers and return the sum&nbsp;as a linked list.</p>

<p>You may assume the two numbers do not contain any leading zero, except the number 0 itself.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Longest Substring Without Repeating Characters

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-substring-without-repeating-characters

## Content

<p>Given a string <code>s</code>, find the length of the <strong>longest</strong> <span data-keyword="substring-nonempty"><strong>substring</strong></span> without repeating characters.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Longest Palindromic Substring

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-palindromic-substring

## Content

<p>Given a string <code>s</code>, return <em>the longest</em> <span data-keyword="palindromic-string"><em>palindromic</em></span> <span data-keyword="substring-nonempty"><em>substring</em></span> in <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string longestPalindrome(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Zigzag Conversion

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/zigzag-conversion

## Content

<p>The string <code>&quot;PAYPALISHIRING&quot;</code> is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)</p>

<pre>
P   A   H   N
A P L S I I G
Y   I   R
</pre>

<p>And then read line by line: <code>&quot;PAHNAPLSIIGYIR&quot;</code></p>

<p>Write the code that will take a string and make this conversion given a number of rows:</p>

<pre>
string convert(string s, int numRows);
</pre>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string convert(string s, int numRows) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# String to Integer (atoi)

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/string-to-integer-atoi

## Content

<p>Implement the <code>myAtoi(string s)</code> function, which converts a string to a 32-bit signed integer.</p>

<p>The algorithm for <code>myAtoi(string s)</code> is as follows:</p>

<ol>
	<li><strong>Whitespace</strong>: Ignore any leading whitespace (<code>&quot; &quot;</code>).</li>
	<li><strong>Signedness</strong>: Determine the sign by checking if the next character is <code>&#39;-&#39;</code> or <code>&#39;+&#39;</code>, assuming positivity is neither present.</li>
	<li><strong>Conversion</strong>: Read the integer by skipping leading zeros&nbsp;until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.</li>
	<li><strong>Rounding</strong>: If the integer is out of the 32-bit signed integer range <code>[-2<sup>31</sup>, 2<sup>31</sup> - 1]</code>, then round the integer to remain in the range. Specifically, integers less than <code>-2<sup>31</sup></code> should be rounded to <code>-2<sup>31</sup></code>, and integers greater than <code>2<sup>31</sup> - 1</code> should be rounded to <code>2<sup>31</sup> - 1</code>.</li>
</ol>

<p>Return the integer as the final result.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int myAtoi(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Container With Most Water

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/container-with-most-water

## Content

<p>You are given an integer array <code>height</code> of length <code>n</code>. There are <code>n</code> vertical lines drawn such that the two endpoints of the <code>i<sup>th</sup></code> line are <code>(i, 0)</code> and <code>(i, height[i])</code>.</p>

<p>Find two lines that together with the x-axis form a container, such that the container contains the most water.</p>

<p>Return <em>the maximum amount of water a container can store</em>.</p>

<p><strong>Notice</strong> that you may not slant the container.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# 3Sum

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/3sum

## Content

<p>Given an integer array nums, return all the triplets <code>[nums[i], nums[j], nums[k]]</code> such that <code>i != j</code>, <code>i != k</code>, and <code>j != k</code>, and <code>nums[i] + nums[j] + nums[k] == 0</code>.</p>

<p>Notice that the solution set must not contain duplicate triplets.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Letter Combinations of a Phone Number

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/letter-combinations-of-a-phone-number

## Content

<p>Given a string containing digits from <code>2-9</code> inclusive, return all possible letter combinations that the number could represent. Return the answer in <strong>any order</strong>.</p>

<p>A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.</p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/15/1200px-telephone-keypad2svg.png" style="width: 300px; height: 243px;" />
<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Remove Nth Node From End of List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/remove-nth-node-from-end-of-list

## Content

<p>Given the <code>head</code> of a linked list, remove the <code>n<sup>th</sup></code> node from the end of the list and return its head.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Generate Parentheses

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/generate-parentheses

## Content

<p>Given <code>n</code> pairs of parentheses, write a function to <em>generate all combinations of well-formed parentheses</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Swap Nodes in Pairs

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/swap-nodes-in-pairs

## Content

<p>Given a&nbsp;linked list, swap every two adjacent nodes and return its head. You must solve the problem without&nbsp;modifying the values in the list&#39;s nodes (i.e., only nodes themselves may be changed.)</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Divide Two Integers

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/divide-two-integers

## Content

<p>Given two integers <code>dividend</code> and <code>divisor</code>, divide two integers <strong>without</strong> using multiplication, division, and mod operator.</p>

<p>The integer division should truncate toward zero, which means losing its fractional part. For example, <code>8.345</code> would be truncated to <code>8</code>, and <code>-2.7335</code> would be truncated to <code>-2</code>.</p>

<p>Return <em>the <strong>quotient</strong> after dividing </em><code>dividend</code><em> by </em><code>divisor</code>.</p>

<p><strong>Note: </strong>Assume we are dealing with an environment that could only store integers within the <strong>32-bit</strong> signed integer range: <code>[&minus;2<sup>31</sup>, 2<sup>31</sup> &minus; 1]</code>. For this problem, if the quotient is <strong>strictly greater than</strong> <code>2<sup>31</sup> - 1</code>, then return <code>2<sup>31</sup> - 1</code>, and if the quotient is <strong>strictly less than</strong> <code>-2<sup>31</sup></code>, then return <code>-2<sup>31</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int divide(int dividend, int divisor) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Next Permutation

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/next-permutation

## Content

<p>A <strong>permutation</strong> of an array of integers is an arrangement of its members into a sequence or linear order.</p>

<ul>
	<li>For example, for <code>arr = [1,2,3]</code>, the following are all the permutations of <code>arr</code>: <code>[1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1]</code>.</li>
</ul>

<p>The <strong>next permutation</strong> of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the <strong>next permutation</strong> of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).</p>

<ul>
	<li>For example, the next permutation of <code>arr = [1,2,3]</code> is <code>[1,3,2]</code>.</li>
	<li>Similarly, the next permutation of <code>arr = [2,3,1]</code> is <code>[3,1,2]</code>.</li>
	<li>While the next permutation of <code>arr = [3,2,1]</code> is <code>[1,2,3]</code> because <code>[3,2,1]</code> does not have a lexicographical larger rearrangement.</li>
</ul>

<p>Given an array of integers <code>nums</code>, <em>find the next permutation of</em> <code>nums</code>.</p>

<p>The replacement must be <strong><a href="http://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in place</a></strong> and use only constant extra memory.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Search in Rotated Sorted Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/search-in-rotated-sorted-array

## Content

<p>There is an integer array <code>nums</code> sorted in ascending order (with <strong>distinct</strong> values).</p>

<p>Prior to being passed to your function, <code>nums</code> is <strong>possibly rotated</strong> at an unknown pivot index <code>k</code> (<code>1 &lt;= k &lt; nums.length</code>) such that the resulting array is <code>[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]</code> (<strong>0-indexed</strong>). For example, <code>[0,1,2,4,5,6,7]</code> might be rotated at pivot index <code>3</code> and become <code>[4,5,6,7,0,1,2]</code>.</p>

<p>Given the array <code>nums</code> <strong>after</strong> the possible rotation and an integer <code>target</code>, return <em>the index of </em><code>target</code><em> if it is in </em><code>nums</code><em>, or </em><code>-1</code><em> if it is not in </em><code>nums</code>.</p>

<p>You must write an algorithm with <code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find First and Last Position of Element in Sorted Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

## Content

<p>Given an array of integers <code>nums</code> sorted in non-decreasing order, find the starting and ending position of a given <code>target</code> value.</p>

<p>If <code>target</code> is not found in the array, return <code>[-1, -1]</code>.</p>

<p>You must&nbsp;write an algorithm with&nbsp;<code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Count and Say

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/count-and-say

## Content

<p>The <strong>count-and-say</strong> sequence is a sequence of digit strings defined by the recursive formula:</p>

<ul>
	<li><code>countAndSay(1) = &quot;1&quot;</code></li>
	<li><code>countAndSay(n)</code> is the run-length encoding of <code>countAndSay(n - 1)</code>.</li>
</ul>

<p><a href="http://en.wikipedia.org/wiki/Run-length_encoding" target="_blank">Run-length encoding</a> (RLE) is a string compression method that works by replacing consecutive identical characters (repeated 2 or more times) with the concatenation of the character and the number marking the count of the characters (length of the run). For example, to compress the string <code>&quot;3322251&quot;</code> we replace <code>&quot;33&quot;</code> with <code>&quot;23&quot;</code>, replace <code>&quot;222&quot;</code> with <code>&quot;32&quot;</code>, replace <code>&quot;5&quot;</code> with <code>&quot;15&quot;</code> and replace <code>&quot;1&quot;</code> with <code>&quot;11&quot;</code>. Thus the compressed string becomes <code>&quot;23321511&quot;</code>.</p>

<p>Given a positive integer <code>n</code>, return <em>the </em><code>n<sup>th</sup></code><em> element of the <strong>count-and-say</strong> sequence</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string countAndSay(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Combination Sum

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/combination-sum

## Content

<p>Given an array of <strong>distinct</strong> integers <code>candidates</code> and a target integer <code>target</code>, return <em>a list of all <strong>unique combinations</strong> of </em><code>candidates</code><em> where the chosen numbers sum to </em><code>target</code><em>.</em> You may return the combinations in <strong>any order</strong>.</p>

<p>The <strong>same</strong> number may be chosen from <code>candidates</code> an <strong>unlimited number of times</strong>. Two combinations are unique if the <span data-keyword="frequency-array">frequency</span> of at least one of the chosen numbers is different.</p>

<p>The test cases are generated such that the number of unique combinations that sum up to <code>target</code> is less than <code>150</code> combinations for the given input.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Combination Sum II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/combination-sum-ii

## Content

<p>Given a collection of candidate numbers (<code>candidates</code>) and a target number (<code>target</code>), find all unique combinations in <code>candidates</code>&nbsp;where the candidate numbers sum to <code>target</code>.</p>

<p>Each number in <code>candidates</code>&nbsp;may only be used <strong>once</strong> in the combination.</p>

<p><strong>Note:</strong>&nbsp;The solution set must not contain duplicate combinations.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Multiply Strings

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/multiply-strings

## Content

<p>Given two non-negative integers <code>num1</code> and <code>num2</code> represented as strings, return the product of <code>num1</code> and <code>num2</code>, also represented as a string.</p>

<p><strong>Note:</strong>&nbsp;You must not use any built-in BigInteger library or convert the inputs to integer directly.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string multiply(string num1, string num2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Jump Game II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/jump-game-ii

## Content

<p>You are given a <strong>0-indexed</strong> array of integers <code>nums</code> of length <code>n</code>. You are initially positioned at <code>nums[0]</code>.</p>

<p>Each element <code>nums[i]</code> represents the maximum length of a forward jump from index <code>i</code>. In other words, if you are at <code>nums[i]</code>, you can jump to any <code>nums[i + j]</code> where:</p>

<ul>
	<li><code>0 &lt;= j &lt;= nums[i]</code> and</li>
	<li><code>i + j &lt; n</code></li>
</ul>

<p>Return <em>the minimum number of jumps to reach </em><code>nums[n - 1]</code>. The test cases are generated such that you can reach <code>nums[n - 1]</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int jump(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Permutations

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/permutations

## Content

<p>Given an array <code>nums</code> of distinct integers, return all the possible <span data-keyword="permutation-array">permutations</span>. You can return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Permutations II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/permutations-ii

## Content

<p>Given a collection of numbers, <code>nums</code>,&nbsp;that might contain duplicates, return <em>all possible unique permutations <strong>in any order</strong>.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Rotate Image

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/rotate-image

## Content

<p>You are given an <code>n x n</code> 2D <code>matrix</code> representing an image, rotate the image by <strong>90</strong> degrees (clockwise).</p>

<p>You have to rotate the image <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank"><strong>in-place</strong></a>, which means you have to modify the input 2D matrix directly. <strong>DO NOT</strong> allocate another 2D matrix and do the rotation.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Group Anagrams

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/group-anagrams

## Content

<p>Given an array of strings <code>strs</code>, group the <span data-keyword="anagram">anagrams</span> together. You can return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Pow(x, n)

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/powx-n

## Content

<p>Implement <a href="http://www.cplusplus.com/reference/valarray/pow/" target="_blank">pow(x, n)</a>, which calculates <code>x</code> raised to the power <code>n</code> (i.e., <code>x<sup>n</sup></code>).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    double myPow(double x, int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximum Subarray

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-subarray

## Content

<p>Given an integer array <code>nums</code>, find the <span data-keyword="subarray-nonempty">subarray</span> with the largest sum, and return <em>its sum</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Spiral Matrix

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/spiral-matrix

## Content

<p>Given an <code>m x n</code> <code>matrix</code>, return <em>all elements of the</em> <code>matrix</code> <em>in spiral order</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Jump Game

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/jump-game

## Content

<p>You are given an integer array <code>nums</code>. You are initially positioned at the array&#39;s <strong>first index</strong>, and each element in the array represents your maximum jump length at that position.</p>

<p>Return <code>true</code><em> if you can reach the last index, or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canJump(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Merge Intervals

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/merge-intervals

## Content

<p>Given an array&nbsp;of <code>intervals</code>&nbsp;where <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code>, merge all overlapping intervals, and return <em>an array of the non-overlapping intervals that cover all the intervals in the input</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Insert Interval

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/insert-interval

## Content

<p>You are given an array of non-overlapping intervals <code>intervals</code> where <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code> represent the start and the end of the <code>i<sup>th</sup></code> interval and <code>intervals</code> is sorted in ascending order by <code>start<sub>i</sub></code>. You are also given an interval <code>newInterval = [start, end]</code> that represents the start and end of another interval.</p>

<p>Insert <code>newInterval</code> into <code>intervals</code> such that <code>intervals</code> is still sorted in ascending order by <code>start<sub>i</sub></code> and <code>intervals</code> still does not have any overlapping intervals (merge overlapping intervals if necessary).</p>

<p>Return <code>intervals</code><em> after the insertion</em>.</p>

<p><strong>Note</strong> that you don&#39;t need to modify <code>intervals</code> in-place. You can make a new array and return it.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Rotate List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/rotate-list

## Content

<p>Given the <code>head</code> of a linked&nbsp;list, rotate the list to the right by <code>k</code> places.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Unique Paths

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/unique-paths

## Content

<p>There is a robot on an <code>m x n</code> grid. The robot is initially located at the <strong>top-left corner</strong> (i.e., <code>grid[0][0]</code>). The robot tries to move to the <strong>bottom-right corner</strong> (i.e., <code>grid[m - 1][n - 1]</code>). The robot can only move either down or right at any point in time.</p>

<p>Given the two integers <code>m</code> and <code>n</code>, return <em>the number of possible unique paths that the robot can take to reach the bottom-right corner</em>.</p>

<p>The test cases are generated so that the answer will be less than or equal to <code>2 * 10<sup>9</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int uniquePaths(int m, int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Minimum Path Sum

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-path-sum

## Content

<p>Given a <code>m x n</code> <code>grid</code> filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.</p>

<p><strong>Note:</strong> You can only move either down or right at any point in time.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Simplify Path

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/simplify-path

## Content

<p>You are given an <em>absolute</em> path for a Unix-style file system, which always begins with a slash <code>&#39;/&#39;</code>. Your task is to transform this absolute path into its <strong>simplified canonical path</strong>.</p>

<p>The <em>rules</em> of a Unix-style file system are as follows:</p>

<ul>
	<li>A single period <code>&#39;.&#39;</code> represents the current directory.</li>
	<li>A double period <code>&#39;..&#39;</code> represents the previous/parent directory.</li>
	<li>Multiple consecutive slashes such as <code>&#39;//&#39;</code> and <code>&#39;///&#39;</code> are treated as a single slash <code>&#39;/&#39;</code>.</li>
	<li>Any sequence of periods that does <strong>not match</strong> the rules above should be treated as a <strong>valid directory or</strong> <strong>file </strong><strong>name</strong>. For example, <code>&#39;...&#39; </code>and <code>&#39;....&#39;</code> are valid directory or file names.</li>
</ul>

<p>The simplified canonical path should follow these <em>rules</em>:</p>

<ul>
	<li>The path must start with a single slash <code>&#39;/&#39;</code>.</li>
	<li>Directories within the path must be separated by exactly one slash <code>&#39;/&#39;</code>.</li>
	<li>The path must not end with a slash <code>&#39;/&#39;</code>, unless it is the root directory.</li>
	<li>The path must not have any single or double periods (<code>&#39;.&#39;</code> and <code>&#39;..&#39;</code>) used to denote current or parent directories.</li>
</ul>

<p>Return the <strong>simplified canonical path</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string simplifyPath(string path) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Set Matrix Zeroes

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/set-matrix-zeroes

## Content

<p>Given an <code>m x n</code> integer matrix <code>matrix</code>, if an element is <code>0</code>, set its entire row and column to <code>0</code>&#39;s.</p>

<p>You must do it <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in place</a>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Search a 2D Matrix

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/search-a-2d-matrix

## Content

<p>You are given an <code>m x n</code> integer matrix <code>matrix</code> with the following two properties:</p>

<ul>
	<li>Each row is sorted in non-decreasing order.</li>
	<li>The first integer of each row is greater than the last integer of the previous row.</li>
</ul>

<p>Given an integer <code>target</code>, return <code>true</code> <em>if</em> <code>target</code> <em>is in</em> <code>matrix</code> <em>or</em> <code>false</code> <em>otherwise</em>.</p>

<p>You must write a solution in <code>O(log(m * n))</code> time complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Sort Colors

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/sort-colors

## Content

<p>Given an array <code>nums</code> with <code>n</code> objects colored red, white, or blue, sort them <strong><a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a> </strong>so that objects of the same color are adjacent, with the colors in the order red, white, and blue.</p>

<p>We will use the integers <code>0</code>, <code>1</code>, and <code>2</code> to represent the color red, white, and blue, respectively.</p>

<p>You must solve this problem without using the library&#39;s sort function.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Combinations

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/combinations

## Content

<p>Given two integers <code>n</code> and <code>k</code>, return <em>all possible combinations of</em> <code>k</code> <em>numbers chosen from the range</em> <code>[1, n]</code>.</p>

<p>You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Subsets

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/subsets

## Content

<p>Given an integer array <code>nums</code> of <strong>unique</strong> elements, return <em>all possible</em> <span data-keyword="subset"><em>subsets</em></span> <em>(the power set)</em>.</p>

<p>The solution set <strong>must not</strong> contain duplicate subsets. Return the solution in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Word Search

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/word-search

## Content

<p>Given an <code>m x n</code> grid of characters <code>board</code> and a string <code>word</code>, return <code>true</code> <em>if</em> <code>word</code> <em>exists in the grid</em>.</p>

<p>The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Remove Duplicates from Sorted Array II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

## Content

<p>Given an integer array <code>nums</code> sorted in <strong>non-decreasing order</strong>, remove some duplicates <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank"><strong>in-place</strong></a> such that each unique element appears <strong>at most twice</strong>. The <strong>relative order</strong> of the elements should be kept the <strong>same</strong>.</p>

<p>Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the <strong>first part</strong> of the array <code>nums</code>. More formally, if there are <code>k</code> elements after removing the duplicates, then the first <code>k</code> elements of <code>nums</code>&nbsp;should hold the final result. It does not matter what you leave beyond the first&nbsp;<code>k</code>&nbsp;elements.</p>

<p>Return <code>k</code><em> after placing the final result in the first </em><code>k</code><em> slots of </em><code>nums</code>.</p>

<p>Do <strong>not</strong> allocate extra space for another array. You must do this by <strong>modifying the input array <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a></strong> with O(1) extra memory.</p>

<p><strong>Custom Judge:</strong></p>

<p>The judge will test your solution with the following code:</p>

<pre>
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i &lt; k; i++) {
    assert nums[i] == expectedNums[i];
}
</pre>

<p>If all assertions pass, then your solution will be <strong>accepted</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Search in Rotated Sorted Array II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/search-in-rotated-sorted-array-ii

## Content

<p>There is an integer array <code>nums</code> sorted in non-decreasing order (not necessarily with <strong>distinct</strong> values).</p>

<p>Before being passed to your function, <code>nums</code> is <strong>rotated</strong> at an unknown pivot index <code>k</code> (<code>0 &lt;= k &lt; nums.length</code>) such that the resulting array is <code>[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]</code> (<strong>0-indexed</strong>). For example, <code>[0,1,2,4,4,4,5,6,6,7]</code> might be rotated at pivot index <code>5</code> and become <code>[4,5,6,6,7,0,1,2,4,4]</code>.</p>

<p>Given the array <code>nums</code> <strong>after</strong> the rotation and an integer <code>target</code>, return <code>true</code><em> if </em><code>target</code><em> is in </em><code>nums</code><em>, or </em><code>false</code><em> if it is not in </em><code>nums</code><em>.</em></p>

<p>You must decrease the overall operation steps as much as possible.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Remove Duplicates from Sorted List II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii

## Content

<p>Given the <code>head</code> of a sorted linked list, <em>delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list</em>. Return <em>the linked list <strong>sorted</strong> as well</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Partition List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/partition-list

## Content

<p>Given the <code>head</code> of a linked list and a value <code>x</code>, partition it such that all nodes <strong>less than</strong> <code>x</code> come before nodes <strong>greater than or equal</strong> to <code>x</code>.</p>

<p>You should <strong>preserve</strong> the original relative order of the nodes in each of the two partitions.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Subsets II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/subsets-ii

## Content

<p>Given an integer array <code>nums</code> that may contain duplicates, return <em>all possible</em> <span data-keyword="subset"><em>subsets</em></span><em> (the power set)</em>.</p>

<p>The solution set <strong>must not</strong> contain duplicate subsets. Return the solution in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Decode Ways

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/decode-ways

## Content

<p>You have intercepted a secret message encoded as a string of numbers. The message is <strong>decoded</strong> via the following mapping:</p>

<p><code>&quot;1&quot; -&gt; &#39;A&#39;<br />
&quot;2&quot; -&gt; &#39;B&#39;<br />
...<br />
&quot;25&quot; -&gt; &#39;Y&#39;<br />
&quot;26&quot; -&gt; &#39;Z&#39;</code></p>

<p>However, while decoding the message, you realize that there are many different ways you can decode the message because some codes are contained in other codes (<code>&quot;2&quot;</code> and <code>&quot;5&quot;</code> vs <code>&quot;25&quot;</code>).</p>

<p>For example, <code>&quot;11106&quot;</code> can be decoded into:</p>

<ul>
	<li><code>&quot;AAJF&quot;</code> with the grouping <code>(1, 1, 10, 6)</code></li>
	<li><code>&quot;KJF&quot;</code> with the grouping <code>(11, 10, 6)</code></li>
	<li>The grouping <code>(1, 11, 06)</code> is invalid because <code>&quot;06&quot;</code> is not a valid code (only <code>&quot;6&quot;</code> is valid).</li>
</ul>

<p>Note: there may be strings that are impossible to decode.<br />
<br />
Given a string s containing only digits, return the <strong>number of ways</strong> to <strong>decode</strong> it. If the entire string cannot be decoded in any valid way, return <code>0</code>.</p>

<p>The test cases are generated so that the answer fits in a <strong>32-bit</strong> integer.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int numDecodings(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Reverse Linked List II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/reverse-linked-list-ii

## Content

<p>Given the <code>head</code> of a singly linked list and two integers <code>left</code> and <code>right</code> where <code>left &lt;= right</code>, reverse the nodes of the list from position <code>left</code> to position <code>right</code>, and return <em>the reversed list</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Unique Binary Search Trees II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/unique-binary-search-trees-ii

## Content

<p>Given an integer <code>n</code>, return <em>all the structurally unique <strong>BST&#39;</strong>s (binary search trees), which has exactly </em><code>n</code><em> nodes of unique values from</em> <code>1</code> <em>to</em> <code>n</code>. Return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Unique Binary Search Trees

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/unique-binary-search-trees

## Content

<p>Given an integer <code>n</code>, return <em>the number of structurally unique <strong>BST&#39;</strong>s (binary search trees) which has exactly </em><code>n</code><em> nodes of unique values from</em> <code>1</code> <em>to</em> <code>n</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int numTrees(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Validate Binary Search Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/validate-binary-search-tree

## Content

<p>Given the <code>root</code> of a binary tree, <em>determine if it is a valid binary search tree (BST)</em>.</p>

<p>A <strong>valid BST</strong> is defined as follows:</p>

<ul>
	<li>The left <span data-keyword="subtree">subtree</span> of a node contains only nodes with keys <strong>less than</strong> the node&#39;s key.</li>
	<li>The right subtree of a node contains only nodes with keys <strong>greater than</strong> the node&#39;s key.</li>
	<li>Both the left and right subtrees must also be binary search trees.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Recover Binary Search Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/recover-binary-search-tree

## Content

<p>You are given the <code>root</code> of a binary search tree (BST), where the values of <strong>exactly</strong> two nodes of the tree were swapped by mistake. <em>Recover the tree without changing its structure</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void recoverTree(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Binary Tree Level Order Traversal

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/binary-tree-level-order-traversal

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the level order traversal of its nodes&#39; values</em>. (i.e., from left to right, level by level).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Binary Tree Zigzag Level Order Traversal

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the zigzag level order traversal of its nodes&#39; values</em>. (i.e., from left to right, then right to left for the next level and alternate between).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Construct Binary Tree from Preorder and Inorder Traversal

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal

## Content

<p>Given two integer arrays <code>preorder</code> and <code>inorder</code> where <code>preorder</code> is the preorder traversal of a binary tree and <code>inorder</code> is the inorder traversal of the same tree, construct and return <em>the binary tree</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Construct Binary Tree from Inorder and Postorder Traversal

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal

## Content

<p>Given two integer arrays <code>inorder</code> and <code>postorder</code> where <code>inorder</code> is the inorder traversal of a binary tree and <code>postorder</code> is the postorder traversal of the same tree, construct and return <em>the binary tree</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Binary Tree Level Order Traversal II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/binary-tree-level-order-traversal-ii

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the bottom-up level order traversal of its nodes&#39; values</em>. (i.e., from left to right, level by level from leaf to root).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Convert Sorted List to Binary Search Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree

## Content

<p>Given the <code>head</code> of a singly linked list where elements are sorted in <strong>ascending order</strong>, convert <em>it to a </em><span data-keyword="height-balanced"><strong><em>height-balanced</em></strong></span> <em>binary search tree</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Path Sum II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/path-sum-ii

## Content

<p>Given the <code>root</code> of a binary tree and an integer <code>targetSum</code>, return <em>all <strong>root-to-leaf</strong> paths where the sum of the node values in the path equals </em><code>targetSum</code><em>. Each path should be returned as a list of the node <strong>values</strong>, not node references</em>.</p>

<p>A <strong>root-to-leaf</strong> path is a path starting from the root and ending at any leaf node. A <strong>leaf</strong> is a node with no children.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Flatten Binary Tree to Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/flatten-binary-tree-to-linked-list

## Content

<p>Given the <code>root</code> of a binary tree, flatten the tree into a &quot;linked list&quot;:</p>

<ul>
	<li>The &quot;linked list&quot; should use the same <code>TreeNode</code> class where the <code>right</code> child pointer points to the next node in the list and the <code>left</code> child pointer is always <code>null</code>.</li>
	<li>The &quot;linked list&quot; should be in the same order as a <a href="https://en.wikipedia.org/wiki/Tree_traversal#Pre-order,_NLR" target="_blank"><strong>pre-order</strong><strong> traversal</strong></a> of the binary tree.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Populating Next Right Pointers in Each Node

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/populating-next-right-pointers-in-each-node

## Content

<p>You are given a <strong>perfect binary tree</strong> where all leaves are on the same level, and every parent has two children. The binary tree has the following definition:</p>

<pre>
struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
</pre>

<p>Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to <code>NULL</code>.</p>

<p>Initially, all next pointers are set to <code>NULL</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Populating Next Right Pointers in Each Node II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii

## Content

<p>Given a binary tree</p>

<pre>
struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
</pre>

<p>Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to <code>NULL</code>.</p>

<p>Initially, all next pointers are set to <code>NULL</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Triangle

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/triangle

## Content

<p>Given a <code>triangle</code> array, return <em>the minimum path sum from top to bottom</em>.</p>

<p>For each step, you may move to an adjacent number of the row below. More formally, if you are on index <code>i</code> on the current row, you may move to either index <code>i</code> or index <code>i + 1</code> on the next row.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Best Time to Buy and Sell Stock II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii

## Content

<p>You are given an integer array <code>prices</code> where <code>prices[i]</code> is the price of a given stock on the <code>i<sup>th</sup></code> day.</p>

<p>On each day, you may decide to buy and/or sell the stock. You can only hold <strong>at most one</strong> share of the stock at any time. However, you can buy it then immediately sell it on the <strong>same day</strong>.</p>

<p>Find and return <em>the <strong>maximum</strong> profit you can achieve</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Longest Consecutive Sequence

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-consecutive-sequence

## Content

<p>Given an unsorted array of integers <code>nums</code>, return <em>the length of the longest consecutive elements sequence.</em></p>

<p>You must write an algorithm that runs in&nbsp;<code>O(n)</code>&nbsp;time.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Sum Root to Leaf Numbers

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/sum-root-to-leaf-numbers

## Content

<p>You are given the <code>root</code> of a binary tree containing digits from <code>0</code> to <code>9</code> only.</p>

<p>Each root-to-leaf path in the tree represents a number.</p>

<ul>
	<li>For example, the root-to-leaf path <code>1 -&gt; 2 -&gt; 3</code> represents the number <code>123</code>.</li>
</ul>

<p>Return <em>the total sum of all root-to-leaf numbers</em>. Test cases are generated so that the answer will fit in a <strong>32-bit</strong> integer.</p>

<p>A <strong>leaf</strong> node is a node with no children.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Surrounded Regions

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/surrounded-regions

## Content

<p>You are given an <code>m x n</code> matrix <code>board</code> containing <strong>letters</strong> <code>&#39;X&#39;</code> and <code>&#39;O&#39;</code>, <strong>capture regions</strong> that are <strong>surrounded</strong>:</p>

<ul>
	<li><strong>Connect</strong>: A cell is connected to adjacent cells horizontally or vertically.</li>
	<li><strong>Region</strong>: To form a region <strong>connect every</strong> <code>&#39;O&#39;</code> cell.</li>
	<li><strong>Surround</strong>: The region is surrounded with <code>&#39;X&#39;</code> cells if you can <strong>connect the region </strong>with <code>&#39;X&#39;</code> cells and none of the region cells are on the edge of the <code>board</code>.</li>
</ul>

<p>A <strong>surrounded region is captured</strong> by replacing all <code>&#39;O&#39;</code>s with <code>&#39;X&#39;</code>s in the input matrix <code>board</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Palindrome Partitioning

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/palindrome-partitioning

## Content

<p>Given a string <code>s</code>, partition <code>s</code> such that every <span data-keyword="substring-nonempty">substring</span> of the partition is a <span data-keyword="palindrome-string"><strong>palindrome</strong></span>. Return <em>all possible palindrome partitioning of </em><code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<string>> partition(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Clone Graph

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/clone-graph

## Content

<p>Given a reference of a node in a <strong><a href="https://en.wikipedia.org/wiki/Connectivity_(graph_theory)#Connected_graph" target="_blank">connected</a></strong> undirected graph.</p>

<p>Return a <a href="https://en.wikipedia.org/wiki/Object_copying#Deep_copy" target="_blank"><strong>deep copy</strong></a> (clone) of the graph.</p>

<p>Each node in the graph contains a value (<code>int</code>) and a list (<code>List[Node]</code>) of its neighbors.</p>

<pre>
class Node {
    public int val;
    public List&lt;Node&gt; neighbors;
}
</pre>

<p>&nbsp;</p>

<p><strong>Test case format:</strong></p>

<p>For simplicity, each node&#39;s value is the same as the node&#39;s index (1-indexed). For example, the first node with <code>val == 1</code>, the second node with <code>val == 2</code>, and so on. The graph is represented in the test case using an adjacency list.</p>

<p><b>An adjacency list</b> is a collection of unordered <b>lists</b> used to represent a finite graph. Each list describes the set of neighbors of a node in the graph.</p>

<p>The given node will always be the first node with <code>val = 1</code>. You must return the <strong>copy of the given node</strong> as a reference to the cloned graph.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Gas Station

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/gas-station

## Content

<p>There are <code>n</code> gas stations along a circular route, where the amount of gas at the <code>i<sup>th</sup></code> station is <code>gas[i]</code>.</p>

<p>You have a car with an unlimited gas tank and it costs <code>cost[i]</code> of gas to travel from the <code>i<sup>th</sup></code> station to its next <code>(i + 1)<sup>th</sup></code> station. You begin the journey with an empty tank at one of the gas stations.</p>

<p>Given two integer arrays <code>gas</code> and <code>cost</code>, return <em>the starting gas station&#39;s index if you can travel around the circuit once in the clockwise direction, otherwise return</em> <code>-1</code>. If there exists a solution, it is <strong>guaranteed</strong> to be <strong>unique</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Single Number II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/single-number-ii

## Content

<p>Given an integer array <code>nums</code> where&nbsp;every element appears <strong>three times</strong> except for one, which appears <strong>exactly once</strong>. <em>Find the single element and return it</em>.</p>

<p>You must&nbsp;implement a solution with a linear runtime complexity and use&nbsp;only constant&nbsp;extra space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Copy List with Random Pointer

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/copy-list-with-random-pointer

## Content

<p>A linked list of length <code>n</code> is given such that each node contains an additional random pointer, which could point to any node in the list, or <code>null</code>.</p>

<p>Construct a <a href="https://en.wikipedia.org/wiki/Object_copying#Deep_copy" target="_blank"><strong>deep copy</strong></a> of the list. The deep copy should consist of exactly <code>n</code> <strong>brand new</strong> nodes, where each new node has its value set to the value of its corresponding original node. Both the <code>next</code> and <code>random</code> pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. <strong>None of the pointers in the new list should point to nodes in the original list</strong>.</p>

<p>For example, if there are two nodes <code>X</code> and <code>Y</code> in the original list, where <code>X.random --&gt; Y</code>, then for the corresponding two nodes <code>x</code> and <code>y</code> in the copied list, <code>x.random --&gt; y</code>.</p>

<p>Return <em>the head of the copied linked list</em>.</p>

<p>The linked list is represented in the input/output as a list of <code>n</code> nodes. Each node is represented as a pair of <code>[val, random_index]</code> where:</p>

<ul>
	<li><code>val</code>: an integer representing <code>Node.val</code></li>
	<li><code>random_index</code>: the index of the node (range from <code>0</code> to <code>n-1</code>) that the <code>random</code> pointer points to, or <code>null</code> if it does not point to any node.</li>
</ul>

<p>Your code will <strong>only</strong> be given the <code>head</code> of the original linked list.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Word Break

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/word-break

## Content

<p>Given a string <code>s</code> and a dictionary of strings <code>wordDict</code>, return <code>true</code> if <code>s</code> can be segmented into a space-separated sequence of one or more dictionary words.</p>

<p><strong>Note</strong> that the same word in the dictionary may be reused multiple times in the segmentation.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Linked List Cycle II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/linked-list-cycle-ii

## Content

<p>Given the <code>head</code> of a linked list, return <em>the node where the cycle begins. If there is no cycle, return </em><code>null</code>.</p>

<p>There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the <code>next</code> pointer. Internally, <code>pos</code> is used to denote the index of the node that tail&#39;s <code>next</code> pointer is connected to (<strong>0-indexed</strong>). It is <code>-1</code> if there is no cycle. <strong>Note that</strong> <code>pos</code> <strong>is not passed as a parameter</strong>.</p>

<p><strong>Do not modify</strong> the linked list.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Reorder List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/reorder-list

## Content

<p>You are given the head of a singly linked-list. The list can be represented as:</p>

<pre>
L<sub>0</sub> &rarr; L<sub>1</sub> &rarr; &hellip; &rarr; L<sub>n - 1</sub> &rarr; L<sub>n</sub>
</pre>

<p><em>Reorder the list to be on the following form:</em></p>

<pre>
L<sub>0</sub> &rarr; L<sub>n</sub> &rarr; L<sub>1</sub> &rarr; L<sub>n - 1</sub> &rarr; L<sub>2</sub> &rarr; L<sub>n - 2</sub> &rarr; &hellip;
</pre>

<p>You may not modify the values in the list&#39;s nodes. Only nodes themselves may be changed.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Sort List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/sort-list

## Content

<p>Given the <code>head</code> of a linked list, return <em>the list after sorting it in <strong>ascending order</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Reverse Words in a String

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/reverse-words-in-a-string

## Content

<p>Given an input string <code>s</code>, reverse the order of the <strong>words</strong>.</p>

<p>A <strong>word</strong> is defined as a sequence of non-space characters. The <strong>words</strong> in <code>s</code> will be separated by at least one space.</p>

<p>Return <em>a string of the words in reverse order concatenated by a single space.</em></p>

<p><b>Note</b> that <code>s</code> may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string reverseWords(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximum Product Subarray

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-product-subarray

## Content

<p>Given an integer array <code>nums</code>, find a <span data-keyword="subarray-nonempty">subarray</span> that has the largest product, and return <em>the product</em>.</p>

<p>The test cases are generated so that the answer will fit in a <strong>32-bit</strong> integer.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find Minimum in Rotated Sorted Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

## Content

<p>Suppose an array of length <code>n</code> sorted in ascending order is <strong>rotated</strong> between <code>1</code> and <code>n</code> times. For example, the array <code>nums = [0,1,2,4,5,6,7]</code> might become:</p>

<ul>
	<li><code>[4,5,6,7,0,1,2]</code> if it was rotated <code>4</code> times.</li>
	<li><code>[0,1,2,4,5,6,7]</code> if it was rotated <code>7</code> times.</li>
</ul>

<p>Notice that <strong>rotating</strong> an array <code>[a[0], a[1], a[2], ..., a[n-1]]</code> 1 time results in the array <code>[a[n-1], a[0], a[1], a[2], ..., a[n-2]]</code>.</p>

<p>Given the sorted rotated array <code>nums</code> of <strong>unique</strong> elements, return <em>the minimum element of this array</em>.</p>

<p>You must write an algorithm that runs in&nbsp;<code>O(log n) time</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findMin(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Min Stack

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/min-stack

## Content

<p>Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.</p>

<p>Implement the <code>MinStack</code> class:</p>

<ul>
	<li><code>MinStack()</code> initializes the stack object.</li>
	<li><code>void push(int val)</code> pushes the element <code>val</code> onto the stack.</li>
	<li><code>void pop()</code> removes the element on the top of the stack.</li>
	<li><code>int top()</code> gets the top element of the stack.</li>
	<li><code>int getMin()</code> retrieves the minimum element in the stack.</li>
</ul>

<p>You must implement a solution with <code>O(1)</code> time complexity for each function.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        
    }
    
    void pop() {
        
    }
    
    int top() {
        
    }
    
    int getMin() {
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find Peak Element

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-peak-element

## Content

<p>A peak element is an element that is strictly greater than its neighbors.</p>

<p>Given a <strong>0-indexed</strong> integer array <code>nums</code>, find a peak element, and return its index. If the array contains multiple peaks, return the index to <strong>any of the peaks</strong>.</p>

<p>You may imagine that <code>nums[-1] = nums[n] = -&infin;</code>. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.</p>

<p>You must write an algorithm that runs in <code>O(log n)</code> time.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Fraction to Recurring Decimal

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/fraction-to-recurring-decimal

## Content

<p>Given two integers representing the <code>numerator</code> and <code>denominator</code> of a fraction, return <em>the fraction in string format</em>.</p>

<p>If the fractional part is repeating, enclose the repeating part in parentheses.</p>

<p>If multiple answers are possible, return <strong>any of them</strong>.</p>

<p>It is <strong>guaranteed</strong> that the length of the answer string is less than <code>10<sup>4</sup></code> for all the given inputs.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Two Sum II - Input Array Is Sorted

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

## Content

<p>Given a <strong>1-indexed</strong> array of integers <code>numbers</code> that is already <strong><em>sorted in non-decreasing order</em></strong>, find two numbers such that they add up to a specific <code>target</code> number. Let these two numbers be <code>numbers[index<sub>1</sub>]</code> and <code>numbers[index<sub>2</sub>]</code> where <code>1 &lt;= index<sub>1</sub> &lt; index<sub>2</sub> &lt;= numbers.length</code>.</p>

<p>Return<em> the indices of the two numbers, </em><code>index<sub>1</sub></code><em> and </em><code>index<sub>2</sub></code><em>, <strong>added by one</strong> as an integer array </em><code>[index<sub>1</sub>, index<sub>2</sub>]</code><em> of length 2.</em></p>

<p>The tests are generated such that there is <strong>exactly one solution</strong>. You <strong>may not</strong> use the same element twice.</p>

<p>Your solution must use only constant extra space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Factorial Trailing Zeroes

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/factorial-trailing-zeroes

## Content

<p>Given an integer <code>n</code>, return <em>the number of trailing zeroes in </em><code>n!</code>.</p>

<p>Note that <code>n! = n * (n - 1) * (n - 2) * ... * 3 * 2 * 1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int trailingZeroes(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Binary Search Tree Iterator

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/binary-search-tree-iterator

## Content

<p>Implement the <code>BSTIterator</code> class that represents an iterator over the <strong><a href="https://en.wikipedia.org/wiki/Tree_traversal#In-order_(LNR)" target="_blank">in-order traversal</a></strong> of a binary search tree (BST):</p>

<ul>
	<li><code>BSTIterator(TreeNode root)</code> Initializes an object of the <code>BSTIterator</code> class. The <code>root</code> of the BST is given as part of the constructor. The pointer should be initialized to a non-existent number smaller than any element in the BST.</li>
	<li><code>boolean hasNext()</code> Returns <code>true</code> if there exists a number in the traversal to the right of the pointer, otherwise returns <code>false</code>.</li>
	<li><code>int next()</code> Moves the pointer to the right, then returns the number at the pointer.</li>
</ul>

<p>Notice that by initializing the pointer to a non-existent smallest number, the first call to <code>next()</code> will return the smallest element in the BST.</p>

<p>You may assume that <code>next()</code> calls will always be valid. That is, there will be at least a next number in the in-order traversal when <code>next()</code> is called.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        
    }
    
    int next() {
        
    }
    
    bool hasNext() {
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Largest Number

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/largest-number

## Content

<p>Given a list of non-negative integers <code>nums</code>, arrange them such that they form the largest number and return it.</p>

<p>Since the result may be very large, so you need to return a string instead of an integer.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Rotate Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/rotate-array

## Content

<p>Given an integer array <code>nums</code>, rotate the array to the right by <code>k</code> steps, where <code>k</code> is non-negative.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# House Robber

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/house-robber

## Content

<p>You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and <b>it will automatically contact the police if two adjacent houses were broken into on the same night</b>.</p>

<p>Given an integer array <code>nums</code> representing the amount of money of each house, return <em>the maximum amount of money you can rob tonight <b>without alerting the police</b></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int rob(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Binary Tree Right Side View

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/binary-tree-right-side-view

## Content

<p>Given the <code>root</code> of a binary tree, imagine yourself standing on the <strong>right side</strong> of it, return <em>the values of the nodes you can see ordered from top to bottom</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Number of Islands

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/number-of-islands

## Content

<p>Given an <code>m x n</code> 2D binary grid <code>grid</code> which represents a map of <code>&#39;1&#39;</code>s (land) and <code>&#39;0&#39;</code>s (water), return <em>the number of islands</em>.</p>

<p>An <strong>island</strong> is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Bitwise AND of Numbers Range

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/bitwise-and-of-numbers-range

## Content

<p>Given two integers <code>left</code> and <code>right</code> that represent the range <code>[left, right]</code>, return <em>the bitwise AND of all numbers in this range, inclusive</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Course Schedule

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/course-schedule

## Content

<p>There are a total of <code>numCourses</code> courses you have to take, labeled from <code>0</code> to <code>numCourses - 1</code>. You are given an array <code>prerequisites</code> where <code>prerequisites[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> indicates that you <strong>must</strong> take course <code>b<sub>i</sub></code> first if you want to take course <code>a<sub>i</sub></code>.</p>

<ul>
	<li>For example, the pair <code>[0, 1]</code>, indicates that to take course <code>0</code> you have to first take course <code>1</code>.</li>
</ul>

<p>Return <code>true</code> if you can finish all courses. Otherwise, return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Implement Trie (Prefix Tree)

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/implement-trie-prefix-tree

## Content

<p>A <a href="https://en.wikipedia.org/wiki/Trie" target="_blank"><strong>trie</strong></a> (pronounced as &quot;try&quot;) or <strong>prefix tree</strong> is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker.</p>

<p>Implement the Trie class:</p>

<ul>
	<li><code>Trie()</code> Initializes the trie object.</li>
	<li><code>void insert(String word)</code> Inserts the string <code>word</code> into the trie.</li>
	<li><code>boolean search(String word)</code> Returns <code>true</code> if the string <code>word</code> is in the trie (i.e., was inserted before), and <code>false</code> otherwise.</li>
	<li><code>boolean startsWith(String prefix)</code> Returns <code>true</code> if there is a previously inserted string <code>word</code> that has the prefix <code>prefix</code>, and <code>false</code> otherwise.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Trie {
public:
    Trie() {
        
    }
    
    void insert(string word) {
        
    }
    
    bool search(string word) {
        
    }
    
    bool startsWith(string prefix) {
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Minimum Size Subarray Sum

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-size-subarray-sum

## Content

<p>Given an array of positive integers <code>nums</code> and a positive integer <code>target</code>, return <em>the <strong>minimal length</strong> of a </em><span data-keyword="subarray-nonempty"><em>subarray</em></span><em> whose sum is greater than or equal to</em> <code>target</code>. If there is no such subarray, return <code>0</code> instead.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# House Robber II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/house-robber-ii

## Content

<p>You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are <strong>arranged in a circle.</strong> That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and&nbsp;<b>it will automatically contact the police if two adjacent houses were broken into on the same night</b>.</p>

<p>Given an integer array <code>nums</code> representing the amount of money of each house, return <em>the maximum amount of money you can rob tonight <strong>without alerting the police</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int rob(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Kth Largest Element in an Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/kth-largest-element-in-an-array

## Content

<p>Given an integer array <code>nums</code> and an integer <code>k</code>, return <em>the</em> <code>k<sup>th</sup></code> <em>largest element in the array</em>.</p>

<p>Note that it is the <code>k<sup>th</sup></code> largest element in the sorted order, not the <code>k<sup>th</sup></code> distinct element.</p>

<p>Can you solve it without sorting?</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Combination Sum III

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/combination-sum-iii

## Content

<p>Find all valid combinations of <code>k</code> numbers that sum up to <code>n</code> such that the following conditions are true:</p>

<ul>
	<li>Only numbers <code>1</code> through <code>9</code> are used.</li>
	<li>Each number is used <strong>at most once</strong>.</li>
</ul>

<p>Return <em>a list of all possible valid combinations</em>. The list must not contain the same combination twice, and the combinations may be returned in any order.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximal Square

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximal-square

## Content

<p>Given an <code>m x n</code> binary <code>matrix</code> filled with <code>0</code>&#39;s and <code>1</code>&#39;s, <em>find the largest square containing only</em> <code>1</code>&#39;s <em>and return its area</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Kth Smallest Element in a BST

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/kth-smallest-element-in-a-bst

## Content

<p>Given the <code>root</code> of a binary search tree, and an integer <code>k</code>, return <em>the</em> <code>k<sup>th</sup></code> <em>smallest value (<strong>1-indexed</strong>) of all the values of the nodes in the tree</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Lowest Common Ancestor of a Binary Search Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree

## Content

<p>Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.</p>

<p>According to the <a href="https://en.wikipedia.org/wiki/Lowest_common_ancestor" target="_blank">definition of LCA on Wikipedia</a>: &ldquo;The lowest common ancestor is defined between two nodes <code>p</code> and <code>q</code> as the lowest node in <code>T</code> that has both <code>p</code> and <code>q</code> as descendants (where we allow <strong>a node to be a descendant of itself</strong>).&rdquo;</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Lowest Common Ancestor of a Binary Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree

## Content

<p>Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.</p>

<p>According to the <a href="https://en.wikipedia.org/wiki/Lowest_common_ancestor" target="_blank">definition of LCA on Wikipedia</a>: &ldquo;The lowest common ancestor is defined between two nodes <code>p</code> and <code>q</code> as the lowest node in <code>T</code> that has both <code>p</code> and <code>q</code> as descendants (where we allow <b>a node to be a descendant of itself</b>).&rdquo;</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Delete Node in a Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/delete-node-in-a-linked-list

## Content

<p>There is a singly-linked list <code>head</code> and we want to delete a node <code>node</code> in it.</p>

<p>You are given the node to be deleted <code>node</code>. You will <strong>not be given access</strong> to the first node of <code>head</code>.</p>

<p>All the values of the linked list are <strong>unique</strong>, and it is guaranteed that the given node <code>node</code> is not the last node in the linked list.</p>

<p>Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:</p>

<ul>
	<li>The value of the given node should not exist in the linked list.</li>
	<li>The number of nodes in the linked list should decrease by one.</li>
	<li>All the values before <code>node</code> should be in the same order.</li>
	<li>All the values after <code>node</code> should be in the same order.</li>
</ul>

<p><strong>Custom testing:</strong></p>

<ul>
	<li>For the input, you should provide the entire linked list <code>head</code> and the node to be given <code>node</code>. <code>node</code> should not be the last node of the list and should be an actual node in the list.</li>
	<li>We will build the linked list and pass the node to your function.</li>
	<li>The output will be the entire list after calling your function.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Product of Array Except Self

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/product-of-array-except-self

## Content

<p>Given an integer array <code>nums</code>, return <em>an array</em> <code>answer</code> <em>such that</em> <code>answer[i]</code> <em>is equal to the product of all the elements of</em> <code>nums</code> <em>except</em> <code>nums[i]</code>.</p>

<p>The product of any prefix or suffix of <code>nums</code> is <strong>guaranteed</strong> to fit in a <strong>32-bit</strong> integer.</p>

<p>You must write an algorithm that runs in&nbsp;<code>O(n)</code>&nbsp;time and without using the division operation.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Search a 2D Matrix II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/search-a-2d-matrix-ii

## Content

<p>Write an efficient algorithm that searches for a value <code>target</code> in an <code>m x n</code> integer matrix <code>matrix</code>. This matrix has the following properties:</p>

<ul>
	<li>Integers in each row are sorted in ascending from left to right.</li>
	<li>Integers in each column are sorted in ascending from top to bottom.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Different Ways to Add Parentheses

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/different-ways-to-add-parentheses

## Content

<p>Given a string <code>expression</code> of numbers and operators, return <em>all possible results from computing all the different possible ways to group numbers and operators</em>. You may return the answer in <strong>any order</strong>.</p>

<p>The test cases are generated such that the output values fit in a 32-bit integer and the number of different results does not exceed <code>10<sup>4</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Meeting Rooms II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/meeting-rooms-ii

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Single Number III

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/single-number-iii

## Content

<p>Given an integer array <code>nums</code>, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in <strong>any order</strong>.</p>

<p>You must write an&nbsp;algorithm that runs in linear runtime complexity and uses&nbsp;only constant extra space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Graph Valid Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/graph-valid-tree

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# H-Index

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/h-index

## Content

<p>Given an array of integers <code>citations</code> where <code>citations[i]</code> is the number of citations a researcher received for their <code>i<sup>th</sup></code> paper, return <em>the researcher&#39;s h-index</em>.</p>

<p>According to the <a href="https://en.wikipedia.org/wiki/H-index" target="_blank">definition of h-index on Wikipedia</a>: The h-index is defined as the maximum value of <code>h</code> such that the given researcher has published at least <code>h</code> papers that have each been cited at least <code>h</code> times.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int hIndex(vector<int>& citations) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# H-Index II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/h-index-ii

## Content

<p>Given an array of integers <code>citations</code> where <code>citations[i]</code> is the number of citations a researcher received for their <code>i<sup>th</sup></code> paper and <code>citations</code> is sorted in <strong>ascending order</strong>, return <em>the researcher&#39;s h-index</em>.</p>

<p>According to the <a href="https://en.wikipedia.org/wiki/H-index" target="_blank">definition of h-index on Wikipedia</a>: The h-index is defined as the maximum value of <code>h</code> such that the given researcher has published at least <code>h</code> papers that have each been cited at least <code>h</code> times.</p>

<p>You must write an algorithm that runs in logarithmic time.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int hIndex(vector<int>& citations) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find the Celebrity

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-the-celebrity

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Perfect Squares

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/perfect-squares

## Content

<p>Given an integer <code>n</code>, return <em>the least number of perfect square numbers that sum to</em> <code>n</code>.</p>

<p>A <strong>perfect square</strong> is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, <code>1</code>, <code>4</code>, <code>9</code>, and <code>16</code> are perfect squares while <code>3</code> and <code>11</code> are not.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int numSquares(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Zigzag Iterator

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/zigzag-iterator

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Inorder Successor in BST

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/inorder-successor-in-bst

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Walls and Gates

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/walls-and-gates

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find the Duplicate Number

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-the-duplicate-number

## Content

<p>Given an array of integers <code>nums</code> containing&nbsp;<code>n + 1</code> integers where each integer is in the range <code>[1, n]</code> inclusive.</p>

<p>There is only <strong>one repeated number</strong> in <code>nums</code>, return <em>this&nbsp;repeated&nbsp;number</em>.</p>

<p>You must solve the problem <strong>without</strong> modifying the array <code>nums</code>&nbsp;and using only constant extra space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Game of Life

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/game-of-life

## Content

<p>According to&nbsp;<a href="https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life" target="_blank">Wikipedia&#39;s article</a>: &quot;The <b>Game of Life</b>, also known simply as <b>Life</b>, is a cellular automaton devised by the British mathematician John Horton Conway in 1970.&quot;</p>

<p>The board is made up of an <code>m x n</code> grid of cells, where each cell has an initial state: <b>live</b> (represented by a <code>1</code>) or <b>dead</b> (represented by a <code>0</code>). Each cell interacts with its <a href="https://en.wikipedia.org/wiki/Moore_neighborhood" target="_blank">eight neighbors</a> (horizontal, vertical, diagonal) using the following four rules (taken from the above Wikipedia article):</p>

<ol>
	<li>Any live cell with fewer than two live neighbors dies as if caused by under-population.</li>
	<li>Any live cell with two or three live neighbors lives on to the next generation.</li>
	<li>Any live cell with more than three live neighbors dies, as if by over-population.</li>
	<li>Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.</li>
</ol>

<p><span>The next state is created by applying the above rules simultaneously to every cell in the current state, where births and deaths occur simultaneously. Given the current state of the <code>m x n</code> grid <code>board</code>, return <em>the next state</em>.</span></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Longest Increasing Subsequence

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-increasing-subsequence

## Content

<p>Given an integer array <code>nums</code>, return <em>the length of the longest <strong>strictly increasing </strong></em><span data-keyword="subsequence-array"><em><strong>subsequence</strong></em></span>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Range Sum Query - Mutable

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/range-sum-query-mutable

## Content

<p>Given an integer array <code>nums</code>, handle multiple queries of the following types:</p>

<ol>
	<li><strong>Update</strong> the value of an element in <code>nums</code>.</li>
	<li>Calculate the <strong>sum</strong> of the elements of <code>nums</code> between indices <code>left</code> and <code>right</code> <strong>inclusive</strong> where <code>left &lt;= right</code>.</li>
</ol>

<p>Implement the <code>NumArray</code> class:</p>

<ul>
	<li><code>NumArray(int[] nums)</code> Initializes the object with the integer array <code>nums</code>.</li>
	<li><code>void update(int index, int val)</code> <strong>Updates</strong> the value of <code>nums[index]</code> to be <code>val</code>.</li>
	<li><code>int sumRange(int left, int right)</code> Returns the <strong>sum</strong> of the elements of <code>nums</code> between indices <code>left</code> and <code>right</code> <strong>inclusive</strong> (i.e. <code>nums[left] + nums[left + 1] + ... + nums[right]</code>).</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class NumArray {
public:
    NumArray(vector<int>& nums) {
        
    }
    
    void update(int index, int val) {
        
    }
    
    int sumRange(int left, int right) {
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Best Time to Buy and Sell Stock with Cooldown

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown

## Content

<p>You are given an array <code>prices</code> where <code>prices[i]</code> is the price of a given stock on the <code>i<sup>th</sup></code> day.</p>

<p>Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times) with the following restrictions:</p>

<ul>
	<li>After you sell your stock, you cannot buy stock on the next day (i.e., cooldown one day).</li>
</ul>

<p><strong>Note:</strong> You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Bulb Switcher

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/bulb-switcher

## Content

<p>There are <code>n</code> bulbs that are initially off. You first turn on all the bulbs, then&nbsp;you turn off every second bulb.</p>

<p>On the third round, you toggle every third bulb (turning on if it&#39;s off or turning off if it&#39;s on). For the <code>i<sup>th</sup></code> round, you toggle every <code>i</code> bulb. For the <code>n<sup>th</sup></code> round, you only toggle the last bulb.</p>

<p>Return <em>the number of bulbs that are on after <code>n</code> rounds</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int bulbSwitch(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Generalized Abbreviation

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/generalized-abbreviation

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Coin Change

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/coin-change

## Content

<p>You are given an integer array <code>coins</code> representing coins of different denominations and an integer <code>amount</code> representing a total amount of money.</p>

<p>Return <em>the fewest number of coins that you need to make up that amount</em>. If that amount of money cannot be made up by any combination of the coins, return <code>-1</code>.</p>

<p>You may assume that you have an infinite number of each kind of coin.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Number of Connected Components in an Undirected Graph

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Odd Even Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/odd-even-linked-list

## Content

<p>Given the <code>head</code> of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return <em>the reordered list</em>.</p>

<p>The <strong>first</strong> node is considered <strong>odd</strong>, and the <strong>second</strong> node is <strong>even</strong>, and so on.</p>

<p>Note that the relative order inside both the even and odd groups should remain as it was in the input.</p>

<p>You must solve the problem&nbsp;in <code>O(1)</code>&nbsp;extra space complexity and <code>O(n)</code> time complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Increasing Triplet Subsequence

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/increasing-triplet-subsequence

## Content

<p>Given an integer array <code>nums</code>, return <code>true</code><em> if there exists a triple of indices </em><code>(i, j, k)</code><em> such that </em><code>i &lt; j &lt; k</code><em> and </em><code>nums[i] &lt; nums[j] &lt; nums[k]</code>. If no such indices exists, return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# House Robber III

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/house-robber-iii

## Content

<p>The thief has found himself a new place for his thievery again. There is only one entrance to this area, called <code>root</code>.</p>

<p>Besides the <code>root</code>, each house has one and only one parent house. After a tour, the smart thief realized that all houses in this place form a binary tree. It will automatically contact the police if <strong>two directly-linked houses were broken into on the same night</strong>.</p>

<p>Given the <code>root</code> of the binary tree, return <em>the maximum amount of money the thief can rob <strong>without alerting the police</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rob(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Sort Transformed Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/sort-transformed-array

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Bomb Enemy

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/bomb-enemy

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Design Hit Counter

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/design-hit-counter

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Water and Jug Problem

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/water-and-jug-problem

## Content

<p>You are given two jugs with capacities <code>x</code> liters and <code>y</code> liters. You have an infinite water supply. Return whether the total amount of water in both jugs may reach <code>target</code> using the following operations:</p>

<ul>
	<li>Fill either jug completely with water.</li>
	<li>Completely empty either jug.</li>
	<li>Pour water from one jug into another until the receiving jug is full, or the transferring jug is empty.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find Leaves of Binary Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-leaves-of-binary-tree

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Plus One Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/plus-one-linked-list

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Sum of Two Integers

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/sum-of-two-integers

## Content

<p>Given two integers <code>a</code> and <code>b</code>, return <em>the sum of the two integers without using the operators</em> <code>+</code> <em>and</em> <code>-</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int getSum(int a, int b) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find K Pairs with Smallest Sums

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-k-pairs-with-smallest-sums

## Content

<p>You are given two integer arrays <code>nums1</code> and <code>nums2</code> sorted in <strong>non-decreasing&nbsp;order</strong> and an integer <code>k</code>.</p>

<p>Define a pair <code>(u, v)</code> which consists of one element from the first array and one element from the second array.</p>

<p>Return <em>the</em> <code>k</code> <em>pairs</em> <code>(u<sub>1</sub>, v<sub>1</sub>), (u<sub>2</sub>, v<sub>2</sub>), ..., (u<sub>k</sub>, v<sub>k</sub>)</code> <em>with the smallest sums</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Combination Sum IV

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/combination-sum-iv

## Content

<p>Given an array of <strong>distinct</strong> integers <code>nums</code> and a target integer <code>target</code>, return <em>the number of possible combinations that add up to</em>&nbsp;<code>target</code>.</p>

<p>The test cases are generated so that the answer can fit in a <strong>32-bit</strong> integer.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Kth Smallest Element in a Sorted Matrix

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix

## Content

<p>Given an <code>n x n</code> <code>matrix</code> where each of the rows and columns is sorted in ascending order, return <em>the</em> <code>k<sup>th</sup></code> <em>smallest element in the matrix</em>.</p>

<p>Note that it is the <code>k<sup>th</sup></code> smallest element <strong>in the sorted order</strong>, not the <code>k<sup>th</sup></code> <strong>distinct</strong> element.</p>

<p>You must find a solution with a memory complexity better than <code>O(n<sup>2</sup>)</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Lexicographical Numbers

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/lexicographical-numbers

## Content

<p>Given an integer <code>n</code>, return all the numbers in the range <code>[1, n]</code> sorted in lexicographical order.</p>

<p>You must write an algorithm that runs in&nbsp;<code>O(n)</code>&nbsp;time and uses <code>O(1)</code> extra space.&nbsp;</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Elimination Game

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/elimination-game

## Content

<p>You have a list <code>arr</code> of all integers in the range <code>[1, n]</code> sorted in a strictly increasing order. Apply the following algorithm on <code>arr</code>:</p>

<ul>
	<li>Starting from left to right, remove the first number and every other number afterward until you reach the end of the list.</li>
	<li>Repeat the previous step again, but this time from right to left, remove the rightmost number and every other number from the remaining numbers.</li>
	<li>Keep repeating the steps again, alternating left to right and right to left, until a single number remains.</li>
</ul>

<p>Given the integer <code>n</code>, return <em>the last number that remains in</em> <code>arr</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int lastRemaining(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Random Pick Index

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/random-pick-index

## Content

<p>Given an integer array <code>nums</code> with possible <strong>duplicates</strong>, randomly output the index of a given <code>target</code> number. You can assume that the given target number must exist in the array.</p>

<p>Implement the <code>Solution</code> class:</p>

<ul>
	<li><code>Solution(int[] nums)</code> Initializes the object with the array <code>nums</code>.</li>
	<li><code>int pick(int target)</code> Picks a random index <code>i</code> from <code>nums</code> where <code>nums[i] == target</code>. If there are multiple valid i&#39;s, then each index should have an equal probability of returning.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    Solution(vector<int>& nums) {
        
    }
    
    int pick(int target) {
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Remove K Digits

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/remove-k-digits

## Content

<p>Given string num representing a non-negative integer <code>num</code>, and an integer <code>k</code>, return <em>the smallest possible integer after removing</em> <code>k</code> <em>digits from</em> <code>num</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string removeKdigits(string num, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Partition Equal Subset Sum

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/partition-equal-subset-sum

## Content

<p>Given an integer array <code>nums</code>, return <code>true</code> <em>if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Pacific Atlantic Water Flow

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/pacific-atlantic-water-flow

## Content

<p>There is an <code>m x n</code> rectangular island that borders both the <strong>Pacific Ocean</strong> and <strong>Atlantic Ocean</strong>. The <strong>Pacific Ocean</strong> touches the island&#39;s left and top edges, and the <strong>Atlantic Ocean</strong> touches the island&#39;s right and bottom edges.</p>

<p>The island is partitioned into a grid of square cells. You are given an <code>m x n</code> integer matrix <code>heights</code> where <code>heights[r][c]</code> represents the <strong>height above sea level</strong> of the cell at coordinate <code>(r, c)</code>.</p>

<p>The island receives a lot of rain, and the rain water can flow to neighboring cells directly north, south, east, and west if the neighboring cell&#39;s height is <strong>less than or equal to</strong> the current cell&#39;s height. Water can flow from any cell adjacent to an ocean into the ocean.</p>

<p>Return <em>a <strong>2D list</strong> of grid coordinates </em><code>result</code><em> where </em><code>result[i] = [r<sub>i</sub>, c<sub>i</sub>]</code><em> denotes that rain water can flow from cell </em><code>(r<sub>i</sub>, c<sub>i</sub>)</code><em> to <strong>both</strong> the Pacific and Atlantic oceans</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Minimum Genetic Mutation

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-genetic-mutation

## Content

<p>A gene string can be represented by an 8-character long string, with choices from <code>&#39;A&#39;</code>, <code>&#39;C&#39;</code>, <code>&#39;G&#39;</code>, and <code>&#39;T&#39;</code>.</p>

<p>Suppose we need to investigate a mutation from a gene string <code>startGene</code> to a gene string <code>endGene</code> where one mutation is defined as one single character changed in the gene string.</p>

<ul>
	<li>For example, <code>&quot;AACCGGTT&quot; --&gt; &quot;AACCGGTA&quot;</code> is one mutation.</li>
</ul>

<p>There is also a gene bank <code>bank</code> that records all the valid gene mutations. A gene must be in <code>bank</code> to make it a valid gene string.</p>

<p>Given the two gene strings <code>startGene</code> and <code>endGene</code> and the gene bank <code>bank</code>, return <em>the minimum number of mutations needed to mutate from </em><code>startGene</code><em> to </em><code>endGene</code>. If there is no such a mutation, return <code>-1</code>.</p>

<p>Note that the starting point is assumed to be valid, so it might not be included in the bank.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Non-overlapping Intervals

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/non-overlapping-intervals

## Content

<p>Given an array of intervals <code>intervals</code> where <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code>, return <em>the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Find Right Interval

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-right-interval

## Content

<p>You are given an array of <code>intervals</code>, where <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code> and each <code>start<sub>i</sub></code> is <strong>unique</strong>.</p>

<p>The <strong>right interval</strong> for an interval <code>i</code> is an interval <code>j</code> such that <code>start<sub>j</sub> &gt;= end<sub>i</sub></code> and <code>start<sub>j</sub></code> is <strong>minimized</strong>. Note that <code>i</code> may equal <code>j</code>.</p>

<p>Return <em>an array of <strong>right interval</strong> indices for each interval <code>i</code></em>. If no <strong>right interval</strong> exists for interval <code>i</code>, then put <code>-1</code> at index <code>i</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Path Sum III

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/path-sum-iii

## Content

<p>Given the <code>root</code> of a binary tree and an integer <code>targetSum</code>, return <em>the number of paths where the sum of the values&nbsp;along the path equals</em>&nbsp;<code>targetSum</code>.</p>

<p>The path does not need to start or end at the root or a leaf, but it must go downwards (i.e., traveling only from parent nodes to child nodes).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find All Duplicates in an Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-all-duplicates-in-an-array

## Content

<p>Given an integer array <code>nums</code> of length <code>n</code> where all the integers of <code>nums</code> are in the range <code>[1, n]</code> and each integer appears <strong>once</strong> or <strong>twice</strong>, return <em>an array of all the integers that appears <strong>twice</strong></em>.</p>

<p>You must write an algorithm that runs in <code>O(n)</code> time and uses only <em>constant</em> auxiliary space, excluding the space needed to store the output</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# String Compression

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/string-compression

## Content

<p>Given an array of characters <code>chars</code>, compress it using the following algorithm:</p>

<p>Begin with an empty string <code>s</code>. For each group of <strong>consecutive repeating characters</strong> in <code>chars</code>:</p>

<ul>
	<li>If the group&#39;s length is <code>1</code>, append the character to <code>s</code>.</li>
	<li>Otherwise, append the character followed by the group&#39;s length.</li>
</ul>

<p>The compressed string <code>s</code> <strong>should not be returned separately</strong>, but instead, be stored <strong>in the input character array <code>chars</code></strong>. Note that group lengths that are <code>10</code> or longer will be split into multiple characters in <code>chars</code>.</p>

<p>After you are done <strong>modifying the input array,</strong> return <em>the new length of the array</em>.</p>

<p>You must write an algorithm that uses only constant extra space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int compress(vector<char>& chars) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Add Two Numbers II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/add-two-numbers-ii

## Content

<p>You are given two <strong>non-empty</strong> linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.</p>

<p>You may assume the two numbers do not contain any leading zero, except the number 0 itself.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Ones and Zeroes

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/ones-and-zeroes

## Content

<p>You are given an array of binary strings <code>strs</code> and two integers <code>m</code> and <code>n</code>.</p>

<p>Return <em>the size of the largest subset of <code>strs</code> such that there are <strong>at most</strong> </em><code>m</code><em> </em><code>0</code><em>&#39;s and </em><code>n</code><em> </em><code>1</code><em>&#39;s in the subset</em>.</p>

<p>A set <code>x</code> is a <strong>subset</strong> of a set <code>y</code> if all elements of <code>x</code> are also elements of <code>y</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Target Sum

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/target-sum

## Content

<p>You are given an integer array <code>nums</code> and an integer <code>target</code>.</p>

<p>You want to build an <strong>expression</strong> out of nums by adding one of the symbols <code>&#39;+&#39;</code> and <code>&#39;-&#39;</code> before each integer in nums and then concatenate all the integers.</p>

<ul>
	<li>For example, if <code>nums = [2, 1]</code>, you can add a <code>&#39;+&#39;</code> before <code>2</code> and a <code>&#39;-&#39;</code> before <code>1</code> and concatenate them to build the expression <code>&quot;+2-1&quot;</code>.</li>
</ul>

<p>Return the number of different <strong>expressions</strong> that you can build, which evaluates to <code>target</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Next Greater Element II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/next-greater-element-ii

## Content

<p>Given a circular integer array <code>nums</code> (i.e., the next element of <code>nums[nums.length - 1]</code> is <code>nums[0]</code>), return <em>the <strong>next greater number</strong> for every element in</em> <code>nums</code>.</p>

<p>The <strong>next greater number</strong> of a number <code>x</code> is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn&#39;t exist, return <code>-1</code> for this number.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find Largest Value in Each Tree Row

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-largest-value-in-each-tree-row

## Content

<p>Given the <code>root</code> of a binary tree, return <em>an array of the largest value in each row</em> of the tree <strong>(0-indexed)</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Longest Palindromic Subsequence

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-palindromic-subsequence

## Content

<p>Given a string <code>s</code>, find <em>the longest palindromic <strong>subsequence</strong>&#39;s length in</em> <code>s</code>.</p>

<p>A <strong>subsequence</strong> is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Minimum Time Difference

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-time-difference

## Content

Given a list of 24-hour clock time points in <strong>&quot;HH:MM&quot;</strong> format, return <em>the minimum <b>minutes</b> difference between any two time-points in the list</em>.
<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Single Element in a Sorted Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/single-element-in-a-sorted-array

## Content

<p>You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.</p>

<p>Return <em>the single element that appears only once</em>.</p>

<p>Your solution must run in <code>O(log n)</code> time and <code>O(1)</code> space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# 01 Matrix

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/01-matrix

## Content

<p>Given an <code>m x n</code> binary matrix <code>mat</code>, return <em>the distance of the nearest </em><code>0</code><em> for each cell</em>.</p>

<p>The distance between two adjacent cells is <code>1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Number of Provinces

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/number-of-provinces

## Content

<p>There are <code>n</code> cities. Some of them are connected, while some are not. If city <code>a</code> is connected directly with city <code>b</code>, and city <code>b</code> is connected directly with city <code>c</code>, then city <code>a</code> is connected indirectly with city <code>c</code>.</p>

<p>A <strong>province</strong> is a group of directly or indirectly connected cities and no other cities outside of the group.</p>

<p>You are given an <code>n x n</code> matrix <code>isConnected</code> where <code>isConnected[i][j] = 1</code> if the <code>i<sup>th</sup></code> city and the <code>j<sup>th</sup></code> city are directly connected, and <code>isConnected[i][j] = 0</code> otherwise.</p>

<p>Return <em>the total number of <strong>provinces</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Subarray Sum Equals K

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/subarray-sum-equals-k

## Content

<p>Given an array of integers <code>nums</code> and an integer <code>k</code>, return <em>the total number of subarrays whose sum equals to</em> <code>k</code>.</p>

<p>A subarray is a contiguous <strong>non-empty</strong> sequence of elements within an array.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Permutation in String

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/permutation-in-string

## Content

<p>Given two strings <code>s1</code> and <code>s2</code>, return <code>true</code> if <code>s2</code> contains a <span data-keyword="permutation-string">permutation</span> of <code>s1</code>, or <code>false</code> otherwise.</p>

<p>In other words, return <code>true</code> if one of <code>s1</code>&#39;s permutations is the substring of <code>s2</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximum Length of Pair Chain

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-length-of-pair-chain

## Content

<p>You are given an array of <code>n</code> pairs <code>pairs</code> where <code>pairs[i] = [left<sub>i</sub>, right<sub>i</sub>]</code> and <code>left<sub>i</sub> &lt; right<sub>i</sub></code>.</p>

<p>A pair <code>p2 = [c, d]</code> <strong>follows</strong> a pair <code>p1 = [a, b]</code> if <code>b &lt; c</code>. A <strong>chain</strong> of pairs can be formed in this fashion.</p>

<p>Return <em>the length longest chain which can be formed</em>.</p>

<p>You do not need to use up all the given intervals. You can select pairs in any order.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Palindromic Substrings

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/palindromic-substrings

## Content

<p>Given a string <code>s</code>, return <em>the number of <strong>palindromic substrings</strong> in it</em>.</p>

<p>A string is a <strong>palindrome</strong> when it reads the same backward as forward.</p>

<p>A <strong>substring</strong> is a contiguous sequence of characters within the string.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int countSubstrings(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# 2 Keys Keyboard

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/2-keys-keyboard

## Content

<p>There is only one character <code>&#39;A&#39;</code> on the screen of a notepad. You can perform one of two operations on this notepad for each step:</p>

<ul>
	<li>Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).</li>
	<li>Paste: You can paste the characters which are copied last time.</li>
</ul>

<p>Given an integer <code>n</code>, return <em>the minimum number of operations to get the character</em> <code>&#39;A&#39;</code> <em>exactly</em> <code>n</code> <em>times on the screen</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minSteps(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximum Binary Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-binary-tree

## Content

<p>You are given an integer array <code>nums</code> with no duplicates. A <strong>maximum binary tree</strong> can be built recursively from <code>nums</code> using the following algorithm:</p>

<ol>
	<li>Create a root node whose value is the maximum value in <code>nums</code>.</li>
	<li>Recursively build the left subtree on the <strong>subarray prefix</strong> to the <strong>left</strong> of the maximum value.</li>
	<li>Recursively build the right subtree on the <strong>subarray suffix</strong> to the <strong>right</strong> of the maximum value.</li>
</ol>

<p>Return <em>the <strong>maximum binary tree</strong> built from </em><code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Print Binary Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/print-binary-tree

## Content

<p>Given the <code>root</code> of a binary tree, construct a <strong>0-indexed</strong> <code>m x n</code> string matrix <code>res</code> that represents a <strong>formatted layout</strong> of the tree. The formatted layout matrix should be constructed using the following rules:</p>

<ul>
	<li>The <strong>height</strong> of the tree is <code>height</code>&nbsp;and the number of rows <code>m</code> should be equal to <code>height + 1</code>.</li>
	<li>The number of columns <code>n</code> should be equal to <code>2<sup>height+1</sup> - 1</code>.</li>
	<li>Place the <strong>root node</strong> in the <strong>middle</strong> of the <strong>top row</strong> (more formally, at location <code>res[0][(n-1)/2]</code>).</li>
	<li>For each node that has been placed in the matrix at position <code>res[r][c]</code>, place its <strong>left child</strong> at <code>res[r+1][c-2<sup>height-r-1</sup>]</code> and its <strong>right child</strong> at <code>res[r+1][c+2<sup>height-r-1</sup>]</code>.</li>
	<li>Continue this process until all the nodes in the tree have been placed.</li>
	<li>Any empty cells should contain the empty string <code>&quot;&quot;</code>.</li>
</ul>

<p>Return <em>the constructed matrix </em><code>res</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<string>> printTree(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find K Closest Elements

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-k-closest-elements

## Content

<p>Given a <strong>sorted</strong> integer array <code>arr</code>, two integers <code>k</code> and <code>x</code>, return the <code>k</code> closest integers to <code>x</code> in the array. The result should also be sorted in ascending order.</p>

<p>An integer <code>a</code> is closer to <code>x</code> than an integer <code>b</code> if:</p>

<ul>
	<li><code>|a - x| &lt; |b - x|</code>, or</li>
	<li><code>|a - x| == |b - x|</code> and <code>a &lt; b</code></li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximum Width of Binary Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-width-of-binary-tree

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the <strong>maximum width</strong> of the given tree</em>.</p>

<p>The <strong>maximum width</strong> of a tree is the maximum <strong>width</strong> among all levels.</p>

<p>The <strong>width</strong> of one level is defined as the length between the end-nodes (the leftmost and rightmost non-null nodes), where the null nodes between the end-nodes that would be present in a complete binary tree extending down to that level are also counted into the length calculation.</p>

<p>It is <strong>guaranteed</strong> that the answer will in the range of a <strong>32-bit</strong> signed integer.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Longest Univalue Path

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-univalue-path

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the length of the longest path, where each node in the path has the same value</em>. This path may or may not pass through the root.</p>

<p><strong>The length of the path</strong> between two nodes is represented by the number of edges between them.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int longestUnivaluePath(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Max Area of Island

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/max-area-of-island

## Content

<p>You are given an <code>m x n</code> binary matrix <code>grid</code>. An island is a group of <code>1</code>&#39;s (representing land) connected <strong>4-directionally</strong> (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.</p>

<p>The <strong>area</strong> of an island is the number of cells with a value <code>1</code> in the island.</p>

<p>Return <em>the maximum <strong>area</strong> of an island in </em><code>grid</code>. If there is no island, return <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Insert into a Binary Search Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/insert-into-a-binary-search-tree

## Content

<p>You are given the <code>root</code> node of a binary search tree (BST) and a <code>value</code> to insert into the tree. Return <em>the root node of the BST after the insertion</em>. It is <strong>guaranteed</strong> that the new value does not exist in the original BST.</p>

<p><strong>Notice</strong>&nbsp;that there may exist&nbsp;multiple valid ways for the&nbsp;insertion, as long as the tree remains a BST after insertion. You can return <strong>any of them</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Search in a Sorted Array of Unknown Size

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/search-in-a-sorted-array-of-unknown-size

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Design Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/design-linked-list

## Content

<p>Design your implementation of the linked list. You can choose to use a singly or doubly linked list.<br />
A node in a singly linked list should have two attributes: <code>val</code> and <code>next</code>. <code>val</code> is the value of the current node, and <code>next</code> is a pointer/reference to the next node.<br />
If you want to use the doubly linked list, you will need one more attribute <code>prev</code> to indicate the previous node in the linked list. Assume all nodes in the linked list are <strong>0-indexed</strong>.</p>

<p>Implement the <code>MyLinkedList</code> class:</p>

<ul>
	<li><code>MyLinkedList()</code> Initializes the <code>MyLinkedList</code> object.</li>
	<li><code>int get(int index)</code> Get the value of the <code>index<sup>th</sup></code> node in the linked list. If the index is invalid, return <code>-1</code>.</li>
	<li><code>void addAtHead(int val)</code> Add a node of value <code>val</code> before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.</li>
	<li><code>void addAtTail(int val)</code> Append a node of value <code>val</code> as the last element of the linked list.</li>
	<li><code>void addAtIndex(int index, int val)</code> Add a node of value <code>val</code> before the <code>index<sup>th</sup></code> node in the linked list. If <code>index</code> equals the length of the linked list, the node will be appended to the end of the linked list. If <code>index</code> is greater than the length, the node <strong>will not be inserted</strong>.</li>
	<li><code>void deleteAtIndex(int index)</code> Delete the <code>index<sup>th</sup></code> node in the linked list, if the index is valid.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class MyLinkedList {
public:
    MyLinkedList() {
        
    }
    
    int get(int index) {
        
    }
    
    void addAtHead(int val) {
        
    }
    
    void addAtTail(int val) {
        
    }
    
    void addAtIndex(int index, int val) {
        
    }
    
    void deleteAtIndex(int index) {
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Subarray Product Less Than K

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/subarray-product-less-than-k

## Content

<p>Given an array of integers <code>nums</code> and an integer <code>k</code>, return <em>the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than </em><code>k</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Split Linked List in Parts

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/split-linked-list-in-parts

## Content

<p>Given the <code>head</code> of a singly linked list and an integer <code>k</code>, split the linked list into <code>k</code> consecutive linked list parts.</p>

<p>The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null.</p>

<p>The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later.</p>

<p>Return <em>an array of the </em><code>k</code><em> parts</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Daily Temperatures

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/daily-temperatures

## Content

<p>Given an array of integers <code>temperatures</code> represents the daily temperatures, return <em>an array</em> <code>answer</code> <em>such that</em> <code>answer[i]</code> <em>is the number of days you have to wait after the</em> <code>i<sup>th</sup></code> <em>day to get a warmer temperature</em>. If there is no future day for which this is possible, keep <code>answer[i] == 0</code> instead.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Delete and Earn

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/delete-and-earn

## Content

<p>You are given an integer array <code>nums</code>. You want to maximize the number of points you get by performing the following operation any number of times:</p>

<ul>
	<li>Pick any <code>nums[i]</code> and delete it to earn <code>nums[i]</code> points. Afterwards, you must delete <b>every</b> element equal to <code>nums[i] - 1</code> and <strong>every</strong> element equal to <code>nums[i] + 1</code>.</li>
</ul>

<p>Return <em>the <strong>maximum number of points</strong> you can earn by applying the above operation some number of times</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Max Chunks To Make Sorted

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/max-chunks-to-make-sorted

## Content

<p>You are given an integer array <code>arr</code> of length <code>n</code> that represents a permutation of the integers in the range <code>[0, n - 1]</code>.</p>

<p>We split <code>arr</code> into some number of <strong>chunks</strong> (i.e., partitions), and individually sort each chunk. After concatenating them, the result should equal the sorted array.</p>

<p>Return <em>the largest number of chunks we can make to sort the array</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Letter Case Permutation

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/letter-case-permutation

## Content

<p>Given a string <code>s</code>, you&nbsp;can transform every letter individually to be lowercase or uppercase to create another string.</p>

<p>Return <em>a list of all possible strings we could create</em>. Return the output in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Is Graph Bipartite?

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/is-graph-bipartite

## Content

<p>There is an <strong>undirected</strong> graph with <code>n</code> nodes, where each node is numbered between <code>0</code> and <code>n - 1</code>. You are given a 2D array <code>graph</code>, where <code>graph[u]</code> is an array of nodes that node <code>u</code> is adjacent to. More formally, for each <code>v</code> in <code>graph[u]</code>, there is an undirected edge between node <code>u</code> and node <code>v</code>. The graph has the following properties:</p>

<ul>
	<li>There are no self-edges (<code>graph[u]</code> does not contain <code>u</code>).</li>
	<li>There are no parallel edges (<code>graph[u]</code> does not contain duplicate values).</li>
	<li>If <code>v</code> is in <code>graph[u]</code>, then <code>u</code> is in <code>graph[v]</code> (the graph is undirected).</li>
	<li>The graph may not be connected, meaning there may be two nodes <code>u</code> and <code>v</code> such that there is no path between them.</li>
</ul>

<p>A graph is <strong>bipartite</strong> if the nodes can be partitioned into two independent sets <code>A</code> and <code>B</code> such that <strong>every</strong> edge in the graph connects a node in set <code>A</code> and a node in set <code>B</code>.</p>

<p>Return <code>true</code><em> if and only if it is <strong>bipartite</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Rotated Digits

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/rotated-digits

## Content

<p>An integer <code>x</code> is a <strong>good</strong> if after rotating each digit individually by 180 degrees, we get a valid number that is different from <code>x</code>. Each digit must be rotated - we cannot choose to leave it alone.</p>

<p>A number is valid if each digit remains a digit after rotation. For example:</p>

<ul>
	<li><code>0</code>, <code>1</code>, and <code>8</code> rotate to themselves,</li>
	<li><code>2</code> and <code>5</code> rotate to each other (in this case they are rotated in a different direction, in other words, <code>2</code> or <code>5</code> gets mirrored),</li>
	<li><code>6</code> and <code>9</code> rotate to each other, and</li>
	<li>the rest of the numbers do not rotate to any other number and become invalid.</li>
</ul>

<p>Given an integer <code>n</code>, return <em>the number of <strong>good</strong> integers in the range </em><code>[1, n]</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int rotatedDigits(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Domino and Tromino Tiling

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/domino-and-tromino-tiling

## Content

<p>You have two types of tiles: a <code>2 x 1</code> domino shape and a tromino shape. You may rotate these shapes.</p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/15/lc-domino.jpg" style="width: 362px; height: 195px;" />
<p>Given an integer n, return <em>the number of ways to tile an</em> <code>2 x n</code> <em>board</em>. Since the answer may be very large, return it <strong>modulo</strong> <code>10<sup>9</sup> + 7</code>.</p>

<p>In a tiling, every square must be covered by a tile. Two tilings are different if and only if there are two 4-directionally adjacent cells on the board such that exactly one of the tilings has both squares occupied by a tile.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int numTilings(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# All Paths From Source to Target

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/all-paths-from-source-to-target

## Content

<p>Given a directed acyclic graph (<strong>DAG</strong>) of <code>n</code> nodes labeled from <code>0</code> to <code>n - 1</code>, find all possible paths from node <code>0</code> to node <code>n - 1</code> and return them in <strong>any order</strong>.</p>

<p>The graph is given as follows: <code>graph[i]</code> is a list of all nodes you can visit from node <code>i</code> (i.e., there is a directed edge from node <code>i</code> to node <code>graph[i][j]</code>).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find Eventual Safe States

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-eventual-safe-states

## Content

<p>There is a directed graph of <code>n</code> nodes with each node labeled from <code>0</code> to <code>n - 1</code>. The graph is represented by a <strong>0-indexed</strong> 2D integer array <code>graph</code> where <code>graph[i]</code> is an integer array of nodes adjacent to node <code>i</code>, meaning there is an edge from node <code>i</code> to each node in <code>graph[i]</code>.</p>

<p>A node is a <strong>terminal node</strong> if there are no outgoing edges. A node is a <strong>safe node</strong> if every possible path starting from that node leads to a <strong>terminal node</strong> (or another safe node).</p>

<p>Return <em>an array containing all the <strong>safe nodes</strong> of the graph</em>. The answer should be sorted in <strong>ascending</strong> order.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Binary Tree Pruning

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/binary-tree-pruning

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the same tree where every subtree (of the given tree) not containing a </em><code>1</code><em> has been removed</em>.</p>

<p>A subtree of a node <code>node</code> is <code>node</code> plus every node that is a descendant of <code>node</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Keys and Rooms

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/keys-and-rooms

## Content

<p>There are <code>n</code> rooms labeled from <code>0</code> to <code>n - 1</code>&nbsp;and all the rooms are locked except for room <code>0</code>. Your goal is to visit all the rooms. However, you cannot enter a locked room without having its key.</p>

<p>When you visit a room, you may find a set of <strong>distinct keys</strong> in it. Each key has a number on it, denoting which room it unlocks, and you can take all of them with you to unlock the other rooms.</p>

<p>Given an array <code>rooms</code> where <code>rooms[i]</code> is the set of keys that you can obtain if you visited room <code>i</code>, return <code>true</code> <em>if you can visit <strong>all</strong> the rooms, or</em> <code>false</code> <em>otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximize Distance to Closest Person

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximize-distance-to-closest-person

## Content

<p>You are given an array representing a row of <code>seats</code> where <code>seats[i] = 1</code> represents a person sitting in the <code>i<sup>th</sup></code> seat, and <code>seats[i] = 0</code> represents that the <code>i<sup>th</sup></code> seat is empty <strong>(0-indexed)</strong>.</p>

<p>There is at least one empty seat, and at least one person sitting.</p>

<p>Alex wants to sit in the seat such that the distance between him and the closest person to him is maximized.&nbsp;</p>

<p>Return <em>that maximum distance to the closest person</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Peak Index in a Mountain Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/peak-index-in-a-mountain-array

## Content

<p>You are given an integer <strong>mountain</strong> array <code>arr</code> of length <code>n</code> where the values increase to a <strong>peak element</strong> and then decrease.</p>

<p>Return the index of the peak element.</p>

<p>Your task is to solve it in <code>O(log(n))</code> time complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Score After Flipping Matrix

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/score-after-flipping-matrix

## Content

<p>You are given an <code>m x n</code> binary matrix <code>grid</code>.</p>

<p>A <strong>move</strong> consists of choosing any row or column and toggling each value in that row or column (i.e., changing all <code>0</code>&#39;s to <code>1</code>&#39;s, and all <code>1</code>&#39;s to <code>0</code>&#39;s).</p>

<p>Every row of the matrix is interpreted as a binary number, and the <strong>score</strong> of the matrix is the sum of these numbers.</p>

<p>Return <em>the highest possible <strong>score</strong> after making any number of <strong>moves</strong> (including zero moves)</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# All Nodes Distance K in Binary Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree

## Content

<p>Given the <code>root</code> of a binary tree, the value of a target node <code>target</code>, and an integer <code>k</code>, return <em>an array of the values of all nodes that have a distance </em><code>k</code><em> from the target node.</em></p>

<p>You can return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Walking Robot Simulation

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/walking-robot-simulation

## Content

<p>A robot on an infinite XY-plane starts at point <code>(0, 0)</code> facing north. The robot receives an array of integers <code>commands</code>, which represents a sequence of moves that it needs to execute. There are only three possible types of instructions the robot can receive:</p>

<ul>
	<li><code>-2</code>: Turn left <code>90</code> degrees.</li>
	<li><code>-1</code>: Turn right <code>90</code> degrees.</li>
	<li><code>1 &lt;= k &lt;= 9</code>: Move forward <code>k</code> units, one unit at a time.</li>
</ul>

<p>Some of the grid squares are <code>obstacles</code>. The <code>i<sup>th</sup></code> obstacle is at grid point <code>obstacles[i] = (x<sub>i</sub>, y<sub>i</sub>)</code>. If the robot runs into an obstacle, it will stay in its current location (on the block adjacent to the obstacle) and move onto the next command.</p>

<p>Return the <strong>maximum squared Euclidean distance</strong> that the robot reaches at any point in its path (i.e. if the distance is <code>5</code>, return <code>25</code>).</p>

<p><strong>Note:</strong></p>

<ul>
	<li>There can be an obstacle at <code>(0, 0)</code>. If this happens, the robot will ignore the obstacle until it has moved off the origin. However, it will be unable to return to <code>(0, 0)</code> due to the obstacle.</li>
	<li>North means +Y direction.</li>
	<li>East means +X direction.</li>
	<li>South means -Y direction.</li>
	<li>West means -X direction.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Boats to Save People

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/boats-to-save-people

## Content

<p>You are given an array <code>people</code> where <code>people[i]</code> is the weight of the <code>i<sup>th</sup></code> person, and an <strong>infinite number of boats</strong> where each boat can carry a maximum weight of <code>limit</code>. Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most <code>limit</code>.</p>

<p>Return <em>the minimum number of boats to carry every given person</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find and Replace Pattern

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-and-replace-pattern

## Content

<p>Given a list of strings <code>words</code> and a string <code>pattern</code>, return <em>a list of</em> <code>words[i]</code> <em>that match</em> <code>pattern</code>. You may return the answer in <strong>any order</strong>.</p>

<p>A word matches the pattern if there exists a permutation of letters <code>p</code> so that after replacing every letter <code>x</code> in the pattern with <code>p(x)</code>, we get the desired word.</p>

<p>Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Fruit Into Baskets

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/fruit-into-baskets

## Content

<p>You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array <code>fruits</code> where <code>fruits[i]</code> is the <strong>type</strong> of fruit the <code>i<sup>th</sup></code> tree produces.</p>

<p>You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:</p>

<ul>
	<li>You only have <strong>two</strong> baskets, and each basket can only hold a <strong>single type</strong> of fruit. There is no limit on the amount of fruit each basket can hold.</li>
	<li>Starting from any tree of your choice, you must pick <strong>exactly one fruit</strong> from <strong>every</strong> tree (including the start tree) while moving to the right. The picked fruits must fit in one of your baskets.</li>
	<li>Once you reach a tree with fruit that cannot fit in your baskets, you must stop.</li>
</ul>

<p>Given the integer array <code>fruits</code>, return <em>the <strong>maximum</strong> number of fruits you can pick</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Minimum Falling Path Sum

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-falling-path-sum

## Content

<p>Given an <code>n x n</code> array of integers <code>matrix</code>, return <em>the <strong>minimum sum</strong> of any <strong>falling path</strong> through</em> <code>matrix</code>.</p>

<p>A <strong>falling path</strong> starts at any element in the first row and chooses the element in the next row that is either directly below or diagonally left/right. Specifically, the next element from position <code>(row, col)</code> will be <code>(row + 1, col - 1)</code>, <code>(row + 1, col)</code>, or <code>(row + 1, col + 1)</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Shortest Bridge

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/shortest-bridge

## Content

<p>You are given an <code>n x n</code> binary matrix <code>grid</code> where <code>1</code> represents land and <code>0</code> represents water.</p>

<p>An <strong>island</strong> is a 4-directionally connected group of <code>1</code>&#39;s not connected to any other <code>1</code>&#39;s. There are <strong>exactly two islands</strong> in <code>grid</code>.</p>

<p>You may change <code>0</code>&#39;s to <code>1</code>&#39;s to connect the two islands to form <strong>one island</strong>.</p>

<p>Return <em>the smallest number of </em><code>0</code><em>&#39;s you must flip to connect the two islands</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int shortestBridge(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# K Closest Points to Origin

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/k-closest-points-to-origin

## Content

<p>Given an array of <code>points</code> where <code>points[i] = [x<sub>i</sub>, y<sub>i</sub>]</code> represents a point on the <strong>X-Y</strong> plane and an integer <code>k</code>, return the <code>k</code> closest points to the origin <code>(0, 0)</code>.</p>

<p>The distance between two points on the <strong>X-Y</strong> plane is the Euclidean distance (i.e., <code>&radic;(x<sub>1</sub> - x<sub>2</sub>)<sup>2</sup> + (y<sub>1</sub> - y<sub>2</sub>)<sup>2</sup></code>).</p>

<p>You may return the answer in <strong>any order</strong>. The answer is <strong>guaranteed</strong> to be <strong>unique</strong> (except for the order that it is in).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Distribute Coins in Binary Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/distribute-coins-in-binary-tree

## Content

<p>You are given the <code>root</code> of a binary tree with <code>n</code> nodes where each <code>node</code> in the tree has <code>node.val</code> coins. There are <code>n</code> coins in total throughout the whole tree.</p>

<p>In one move, we may choose two adjacent nodes and move one coin from one node to another. A move may be from parent to child, or from child to parent.</p>

<p>Return <em>the <strong>minimum</strong> number of moves required to make every node have <strong>exactly</strong> one coin</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int distributeCoins(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Time Based Key-Value Store

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/time-based-key-value-store

## Content

<p>Design a time-based key-value data structure that can store multiple values for the same key at different time stamps and retrieve the key&#39;s value at a certain timestamp.</p>

<p>Implement the <code>TimeMap</code> class:</p>

<ul>
	<li><code>TimeMap()</code> Initializes the object of the data structure.</li>
	<li><code>void set(String key, String value, int timestamp)</code> Stores the key <code>key</code> with the value <code>value</code> at the given time <code>timestamp</code>.</li>
	<li><code>String get(String key, int timestamp)</code> Returns a value such that <code>set</code> was called previously, with <code>timestamp_prev &lt;= timestamp</code>. If there are multiple such values, it returns the value associated with the largest <code>timestamp_prev</code>. If there are no values, it returns <code>&quot;&quot;</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class TimeMap {
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        
    }
    
    string get(string key, int timestamp) {
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Minimum Cost For Tickets

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-cost-for-tickets

## Content

<p>You have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array <code>days</code>. Each day is an integer from <code>1</code> to <code>365</code>.</p>

<p>Train tickets are sold in <strong>three different ways</strong>:</p>

<ul>
	<li>a <strong>1-day</strong> pass is sold for <code>costs[0]</code> dollars,</li>
	<li>a <strong>7-day</strong> pass is sold for <code>costs[1]</code> dollars, and</li>
	<li>a <strong>30-day</strong> pass is sold for <code>costs[2]</code> dollars.</li>
</ul>

<p>The passes allow that many days of consecutive travel.</p>

<ul>
	<li>For example, if we get a <strong>7-day</strong> pass on day <code>2</code>, then we can travel for <code>7</code> days: <code>2</code>, <code>3</code>, <code>4</code>, <code>5</code>, <code>6</code>, <code>7</code>, and <code>8</code>.</li>
</ul>

<p>Return <em>the minimum number of dollars you need to travel every day in the given list of days</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# String Without AAA or BBB

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/string-without-aaa-or-bbb

## Content

<p>Given two integers <code>a</code> and <code>b</code>, return <strong>any</strong> string <code>s</code> such that:</p>

<ul>
	<li><code>s</code> has length <code>a + b</code> and contains exactly <code>a</code> <code>&#39;a&#39;</code> letters, and exactly <code>b</code> <code>&#39;b&#39;</code> letters,</li>
	<li>The substring <code>&#39;aaa&#39;</code> does not occur in <code>s</code>, and</li>
	<li>The substring <code>&#39;bbb&#39;</code> does not occur in <code>s</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string strWithout3a3b(int a, int b) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Interval List Intersections

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/interval-list-intersections

## Content

<p>You are given two lists of closed intervals, <code>firstList</code> and <code>secondList</code>, where <code>firstList[i] = [start<sub>i</sub>, end<sub>i</sub>]</code> and <code>secondList[j] = [start<sub>j</sub>, end<sub>j</sub>]</code>. Each list of intervals is pairwise <strong>disjoint</strong> and in <strong>sorted order</strong>.</p>

<p>Return <em>the intersection of these two interval lists</em>.</p>

<p>A <strong>closed interval</strong> <code>[a, b]</code> (with <code>a &lt;= b</code>) denotes the set of real numbers <code>x</code> with <code>a &lt;= x &lt;= b</code>.</p>

<p>The <strong>intersection</strong> of two closed intervals is a set of real numbers that are either empty or represented as a closed interval. For example, the intersection of <code>[1, 3]</code> and <code>[2, 4]</code> is <code>[2, 3]</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Satisfiability of Equality Equations

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/satisfiability-of-equality-equations

## Content

<p>You are given an array of strings <code>equations</code> that represent relationships between variables where each string <code>equations[i]</code> is of length <code>4</code> and takes one of two different forms: <code>&quot;x<sub>i</sub>==y<sub>i</sub>&quot;</code> or <code>&quot;x<sub>i</sub>!=y<sub>i</sub>&quot;</code>.Here, <code>x<sub>i</sub></code> and <code>y<sub>i</sub></code> are lowercase letters (not necessarily different) that represent one-letter variable names.</p>

<p>Return <code>true</code><em> if it is possible to assign integers to variable names so as to satisfy all the given equations, or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Rotting Oranges

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/rotting-oranges

## Content

<p>You are given an <code>m x n</code> <code>grid</code> where each cell can have one of three values:</p>

<ul>
	<li><code>0</code> representing an empty cell,</li>
	<li><code>1</code> representing a fresh orange, or</li>
	<li><code>2</code> representing a rotten orange.</li>
</ul>

<p>Every minute, any fresh orange that is <strong>4-directionally adjacent</strong> to a rotten orange becomes rotten.</p>

<p>Return <em>the minimum number of minutes that must elapse until no cell has a fresh orange</em>. If <em>this is impossible, return</em> <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Max Consecutive Ones III

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/max-consecutive-ones-iii

## Content

<p>Given a binary array <code>nums</code> and an integer <code>k</code>, return <em>the maximum number of consecutive </em><code>1</code><em>&#39;s in the array if you can flip at most</em> <code>k</code> <code>0</code>&#39;s.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Minimum Domino Rotations For Equal Row

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-domino-rotations-for-equal-row

## Content

<p>In a row of dominoes, <code>tops[i]</code> and <code>bottoms[i]</code> represent the top and bottom halves of the <code>i<sup>th</sup></code> domino. (A domino is a tile with two numbers from 1 to 6 - one on each half of the tile.)</p>

<p>We may rotate the <code>i<sup>th</sup></code> domino, so that <code>tops[i]</code> and <code>bottoms[i]</code> swap values.</p>

<p>Return the minimum number of rotations so that all the values in <code>tops</code> are the same, or all the values in <code>bottoms</code> are the same.</p>

<p>If it cannot be done, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Construct Binary Search Tree from Preorder Traversal

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal

## Content

<p>Given an array of integers preorder, which represents the <strong>preorder traversal</strong> of a BST (i.e., <strong>binary search tree</strong>), construct the tree and return <em>its root</em>.</p>

<p>It is <strong>guaranteed</strong> that there is always possible to find a binary search tree with the given requirements for the given test cases.</p>

<p>A <strong>binary search tree</strong> is a binary tree where for every node, any descendant of <code>Node.left</code> has a value <strong>strictly less than</strong> <code>Node.val</code>, and any descendant of <code>Node.right</code> has a value <strong>strictly greater than</strong> <code>Node.val</code>.</p>

<p>A <strong>preorder traversal</strong> of a binary tree displays the value of the node first, then traverses <code>Node.left</code>, then traverses <code>Node.right</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Next Greater Node In Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/next-greater-node-in-linked-list

## Content

<p>You are given the <code>head</code> of a linked list with <code>n</code> nodes.</p>

<p>For each node in the list, find the value of the <strong>next greater node</strong>. That is, for each node, find the value of the first node that is next to it and has a <strong>strictly larger</strong> value than it.</p>

<p>Return an integer array <code>answer</code> where <code>answer[i]</code> is the value of the next greater node of the <code>i<sup>th</sup></code> node (<strong>1-indexed</strong>). If the <code>i<sup>th</sup></code> node does not have a next greater node, set <code>answer[i] = 0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Number of Enclaves

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/number-of-enclaves

## Content

<p>You are given an <code>m x n</code> binary matrix <code>grid</code>, where <code>0</code> represents a sea cell and <code>1</code> represents a land cell.</p>

<p>A <strong>move</strong> consists of walking from one land cell to another adjacent (<strong>4-directionally</strong>) land cell or walking off the boundary of the <code>grid</code>.</p>

<p>Return <em>the number of land cells in</em> <code>grid</code> <em>for which we cannot walk off the boundary of the grid in any number of <strong>moves</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Longest Arithmetic Subsequence

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-arithmetic-subsequence

## Content

<p>Given an array <code>nums</code> of integers, return <em>the length of the longest arithmetic subsequence in</em> <code>nums</code>.</p>

<p><strong>Note</strong> that:</p>

<ul>
	<li>A <strong>subsequence</strong> is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.</li>
	<li>A sequence <code>seq</code> is arithmetic if <code>seq[i + 1] - seq[i]</code> are all the same value (for <code>0 &lt;= i &lt; seq.length - 1</code>).</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Uncrossed Lines

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/uncrossed-lines

## Content

<p>You are given two integer arrays <code>nums1</code> and <code>nums2</code>. We write the integers of <code>nums1</code> and <code>nums2</code> (in the order they are given) on two separate horizontal lines.</p>

<p>We may draw connecting lines: a straight line connecting two numbers <code>nums1[i]</code> and <code>nums2[j]</code> such that:</p>

<ul>
	<li><code>nums1[i] == nums2[j]</code>, and</li>
	<li>the line we draw does not intersect any other connecting (non-horizontal) line.</li>
</ul>

<p>Note that a connecting line cannot intersect even at the endpoints (i.e., each number can only belong to one connecting line).</p>

<p>Return <em>the maximum number of connecting lines we can draw in this way</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Robot Bounded In Circle

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/robot-bounded-in-circle

## Content

<p>On an infinite plane, a robot initially stands at <code>(0, 0)</code> and faces north. Note that:</p>

<ul>
	<li>The <strong>north direction</strong> is the positive direction of the y-axis.</li>
	<li>The <strong>south direction</strong> is the negative direction of the y-axis.</li>
	<li>The <strong>east direction</strong> is the positive direction of the x-axis.</li>
	<li>The <strong>west direction</strong> is the negative direction of the x-axis.</li>
</ul>

<p>The robot can receive one of three instructions:</p>

<ul>
	<li><code>&quot;G&quot;</code>: go straight 1 unit.</li>
	<li><code>&quot;L&quot;</code>: turn 90 degrees to the left (i.e., anti-clockwise direction).</li>
	<li><code>&quot;R&quot;</code>: turn 90 degrees to the right (i.e., clockwise direction).</li>
</ul>

<p>The robot performs the <code>instructions</code> given in order, and repeats them forever.</p>

<p>Return <code>true</code> if and only if there exists a circle in the plane such that the robot never leaves the circle.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# The Earliest Moment When Everyone Become Friends

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/the-earliest-moment-when-everyone-become-friends

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Longest Common Subsequence

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-common-subsequence

## Content

<p>Given two strings <code>text1</code> and <code>text2</code>, return <em>the length of their longest <strong>common subsequence</strong>. </em>If there is no <strong>common subsequence</strong>, return <code>0</code>.</p>

<p>A <strong>subsequence</strong> of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.</p>

<ul>
	<li>For example, <code>&quot;ace&quot;</code> is a subsequence of <code>&quot;abcde&quot;</code>.</li>
</ul>

<p>A <strong>common subsequence</strong> of two strings is a subsequence that is common to both strings.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Snapshot Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/snapshot-array

## Content

<p>Implement a SnapshotArray that supports the following interface:</p>

<ul>
	<li><code>SnapshotArray(int length)</code> initializes an array-like data structure with the given length. <strong>Initially, each element equals 0</strong>.</li>
	<li><code>void set(index, val)</code> sets the element at the given <code>index</code> to be equal to <code>val</code>.</li>
	<li><code>int snap()</code> takes a snapshot of the array and returns the <code>snap_id</code>: the total number of times we called <code>snap()</code> minus <code>1</code>.</li>
	<li><code>int get(index, snap_id)</code> returns the value at the given <code>index</code>, at the time we took the snapshot with the given <code>snap_id</code></li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class SnapshotArray {
public:
    SnapshotArray(int length) {
        
    }
    
    void set(int index, int val) {
        
    }
    
    int snap() {
        
    }
    
    int get(int index, int snap_id) {
        
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Longest Arithmetic Subsequence of Given Difference

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference

## Content

<p>Given an integer array <code>arr</code> and an integer <code>difference</code>, return the length of the longest subsequence in <code>arr</code> which is an arithmetic sequence such that the difference between adjacent elements in the subsequence equals <code>difference</code>.</p>

<p>A <strong>subsequence</strong> is a sequence that can be derived from <code>arr</code> by deleting some or no elements without changing the order of the remaining elements.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Path with Maximum Gold

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/path-with-maximum-gold

## Content

<p>In a gold mine <code>grid</code> of size <code>m x n</code>, each cell in this mine has an integer representing the amount of gold in that cell, <code>0</code> if it is empty.</p>

<p>Return the maximum amount of gold you can collect under the conditions:</p>

<ul>
	<li>Every time you are located in a cell you will collect all the gold in that cell.</li>
	<li>From your position, you can walk one step to the left, right, up, or down.</li>
	<li>You can&#39;t visit the same cell more than once.</li>
	<li>Never visit a cell with <code>0</code> gold.</li>
	<li>You can start and stop collecting gold from <strong>any </strong>position in the grid that has some gold.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Number of Closed Islands

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/number-of-closed-islands

## Content

<p>Given a 2D&nbsp;<code>grid</code> consists of <code>0s</code> (land)&nbsp;and <code>1s</code> (water).&nbsp; An <em>island</em> is a maximal 4-directionally connected group of <code><font face="monospace">0</font>s</code> and a <em>closed island</em>&nbsp;is an island <strong>totally</strong>&nbsp;(all left, top, right, bottom) surrounded by <code>1s.</code></p>

<p>Return the number of <em>closed islands</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# XOR Queries of a Subarray

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/xor-queries-of-a-subarray

## Content

<p>You are given an array <code>arr</code> of positive integers. You are also given the array <code>queries</code> where <code>queries[i] = [left<sub>i, </sub>right<sub>i</sub>]</code>.</p>

<p>For each query <code>i</code> compute the <strong>XOR</strong> of elements from <code>left<sub>i</sub></code> to <code>right<sub>i</sub></code> (that is, <code>arr[left<sub>i</sub>] XOR arr[left<sub>i</sub> + 1] XOR ... XOR arr[right<sub>i</sub>]</code> ).</p>

<p>Return an array <code>answer</code> where <code>answer[i]</code> is the answer to the <code>i<sup>th</sup></code> query.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Delete Leaves With a Given Value

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/delete-leaves-with-a-given-value

## Content

<p>Given a binary tree <code>root</code> and an integer <code>target</code>, delete all the <strong>leaf nodes</strong> with value <code>target</code>.</p>

<p>Note that once you delete a leaf node with value <code>target</code><strong>, </strong>if its parent node becomes a leaf node and has the value <code>target</code>, it should also be deleted (you need to continue doing that until you cannot).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Time Needed to Inform All Employees

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/time-needed-to-inform-all-employees

## Content

<p>A company has <code>n</code> employees with a unique ID for each employee from <code>0</code> to <code>n - 1</code>. The head of the company is the one with <code>headID</code>.</p>

<p>Each employee has one direct manager given in the <code>manager</code> array where <code>manager[i]</code> is the direct manager of the <code>i-th</code> employee, <code>manager[headID] = -1</code>. Also, it is guaranteed that the subordination relationships have a tree structure.</p>

<p>The head of the company wants to inform all the company employees of an urgent piece of news. He will inform his direct subordinates, and they will inform their subordinates, and so on until all employees know about the urgent news.</p>

<p>The <code>i-th</code> employee needs <code>informTime[i]</code> minutes to inform all of his direct subordinates (i.e., After informTime[i] minutes, all his direct subordinates can start spreading the news).</p>

<p>Return <em>the number of minutes</em> needed to inform all the employees about the urgent news.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# The k-th Lexicographical String of All Happy Strings of Length n

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n

## Content

<p>A <strong>happy string</strong> is a string that:</p>

<ul>
	<li>consists only of letters of the set <code>[&#39;a&#39;, &#39;b&#39;, &#39;c&#39;]</code>.</li>
	<li><code>s[i] != s[i + 1]</code> for all values of <code>i</code> from <code>1</code> to <code>s.length - 1</code> (string is 1-indexed).</li>
</ul>

<p>For example, strings <strong>&quot;abc&quot;, &quot;ac&quot;, &quot;b&quot;</strong> and <strong>&quot;abcbabcbcb&quot;</strong> are all happy strings and strings <strong>&quot;aa&quot;, &quot;baa&quot;</strong> and <strong>&quot;ababbc&quot;</strong> are not happy strings.</p>

<p>Given two integers <code>n</code> and <code>k</code>, consider a list of all happy strings of length <code>n</code> sorted in lexicographical order.</p>

<p>Return <em>the kth string</em> of this list or return an <strong>empty string</strong> if there are less than <code>k</code> happy strings of length <code>n</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string getHappyString(int n, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Count Good Nodes in Binary Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/count-good-nodes-in-binary-tree

## Content

<p>Given a binary tree <code>root</code>, a node <em>X</em> in the tree is named&nbsp;<strong>good</strong> if in the path from root to <em>X</em> there are no nodes with a value <em>greater than</em> X.</p>



<p>Return the number of <strong>good</strong> nodes in the binary tree.</p>



<p>&nbsp;</p>

<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximum Number of Vowels in a Substring of Given Length

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

## Content

<p>Given a string <code>s</code> and an integer <code>k</code>, return <em>the maximum number of vowel letters in any substring of </em><code>s</code><em> with length </em><code>k</code>.</p>

<p><strong>Vowel letters</strong> in English are <code>&#39;a&#39;</code>, <code>&#39;e&#39;</code>, <code>&#39;i&#39;</code>, <code>&#39;o&#39;</code>, and <code>&#39;u&#39;</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxVowels(string s, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Longest Subarray of 1's After Deleting One Element

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element

## Content

<p>Given a binary array <code>nums</code>, you should delete one element from it.</p>

<p>Return <em>the size of the longest non-empty subarray containing only </em><code>1</code><em>&#39;s in the resulting array</em>. Return <code>0</code> if there is no such subarray.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Range Sum of Sorted Subarray Sums

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/range-sum-of-sorted-subarray-sums

## Content

<p>You are given the array <code>nums</code> consisting of <code>n</code> positive integers. You computed the sum of all non-empty continuous subarrays from the array and then sorted them in non-decreasing order, creating a new array of <code>n * (n + 1) / 2</code> numbers.</p>

<p><em>Return the sum of the numbers from index </em><code>left</code><em> to index </em><code>right</code> (<strong>indexed from 1</strong>)<em>, inclusive, in the new array. </em>Since the answer can be a huge number return it modulo <code>10<sup>9</sup> + 7</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximum Number of Non-Overlapping Subarrays With Sum Equals Target

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-number-of-non-overlapping-subarrays-with-sum-equals-target

## Content

<p>Given an array <code>nums</code> and an integer <code>target</code>, return <em>the maximum number of <strong>non-empty</strong> <strong>non-overlapping</strong> subarrays such that the sum of values in each subarray is equal to</em> <code>target</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Minimum Time to Make Rope Colorful

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-time-to-make-rope-colorful

## Content

<p>Alice has <code>n</code> balloons arranged on a rope. You are given a <strong>0-indexed</strong> string <code>colors</code> where <code>colors[i]</code> is the color of the <code>i<sup>th</sup></code> balloon.</p>

<p>Alice wants the rope to be <strong>colorful</strong>. She does not want <strong>two consecutive balloons</strong> to be of the same color, so she asks Bob for help. Bob can remove some balloons from the rope to make it <strong>colorful</strong>. You are given a <strong>0-indexed</strong> integer array <code>neededTime</code> where <code>neededTime[i]</code> is the time (in seconds) that Bob needs to remove the <code>i<sup>th</sup></code> balloon from the rope.</p>

<p>Return <em>the <strong>minimum time</strong> Bob needs to make the rope <strong>colorful</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Minimum Deletions to Make String Balanced

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-deletions-to-make-string-balanced

## Content

<p>You are given a string <code>s</code> consisting only of characters <code>&#39;a&#39;</code> and <code>&#39;b&#39;</code>​​​​.</p>

<p>You can delete any number of characters in <code>s</code> to make <code>s</code> <strong>balanced</strong>. <code>s</code> is <strong>balanced</strong> if there is no pair of indices <code>(i,j)</code> such that <code>i &lt; j</code> and <code>s[i] = &#39;b&#39;</code> and <code>s[j]= &#39;a&#39;</code>.</p>

<p>Return <em>the <strong>minimum</strong> number of deletions needed to make </em><code>s</code><em> <strong>balanced</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minimumDeletions(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Determine if Two Strings Are Close

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/determine-if-two-strings-are-close

## Content

<p>Two strings are considered <strong>close</strong> if you can attain one from the other using the following operations:</p>

<ul>
	<li>Operation 1: Swap any two <strong>existing</strong> characters.

	<ul>
		<li>For example, <code>a<u>b</u>cd<u>e</u> -&gt; a<u>e</u>cd<u>b</u></code></li>
	</ul>
	</li>
	<li>Operation 2: Transform <strong>every</strong> occurrence of one <strong>existing</strong> character into another <strong>existing</strong> character, and do the same with the other character.
	<ul>
		<li>For example, <code><u>aa</u>c<u>abb</u> -&gt; <u>bb</u>c<u>baa</u></code> (all <code>a</code>&#39;s turn into <code>b</code>&#39;s, and all <code>b</code>&#39;s turn into <code>a</code>&#39;s)</li>
	</ul>
	</li>
</ul>

<p>You can use the operations on either string as many times as necessary.</p>

<p>Given two strings, <code>word1</code> and <code>word2</code>, return <code>true</code><em> if </em><code>word1</code><em> and </em><code>word2</code><em> are <strong>close</strong>, and </em><code>false</code><em> otherwise.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Correct a Binary Tree

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/correct-a-binary-tree

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Max Number of K-Sum Pairs

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/max-number-of-k-sum-pairs

## Content

<p>You are given an integer array <code>nums</code> and an integer <code>k</code>.</p>

<p>In one operation, you can pick two numbers from the array whose sum equals <code>k</code> and remove them from the array.</p>

<p>Return <em>the maximum number of operations you can perform on the array</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Swapping Nodes in a Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/swapping-nodes-in-a-linked-list

## Content

<p>You are given the <code>head</code> of a linked list, and an integer <code>k</code>.</p>

<p>Return <em>the head of the linked list after <strong>swapping</strong> the values of the </em><code>k<sup>th</sup></code> <em>node from the beginning and the </em><code>k<sup>th</sup></code> <em>node from the end (the list is <strong>1-indexed</strong>).</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Distinct Numbers in Each Subarray

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/distinct-numbers-in-each-subarray

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find the Student that Will Replace the Chalk

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk

## Content

<p>There are <code>n</code> students in a class numbered from <code>0</code> to <code>n - 1</code>. The teacher will give each student a problem starting with the student number <code>0</code>, then the student number <code>1</code>, and so on until the teacher reaches the student number <code>n - 1</code>. After that, the teacher will restart the process, starting with the student number <code>0</code> again.</p>

<p>You are given a <strong>0-indexed</strong> integer array <code>chalk</code> and an integer <code>k</code>. There are initially <code>k</code> pieces of chalk. When the student number <code>i</code> is given a problem to solve, they will use <code>chalk[i]</code> pieces of chalk to solve that problem. However, if the current number of chalk pieces is <strong>strictly less</strong> than <code>chalk[i]</code>, then the student number <code>i</code> will be asked to <strong>replace</strong> the chalk.</p>

<p>Return <em>the <strong>index</strong> of the student that will <strong>replace</strong> the chalk pieces</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Count Sub Islands

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/count-sub-islands

## Content

<p>You are given two <code>m x n</code> binary matrices <code>grid1</code> and <code>grid2</code> containing only <code>0</code>&#39;s (representing water) and <code>1</code>&#39;s (representing land). An <strong>island</strong> is a group of <code>1</code>&#39;s connected <strong>4-directionally</strong> (horizontal or vertical). Any cells outside of the grid are considered water cells.</p>

<p>An island in <code>grid2</code> is considered a <strong>sub-island </strong>if there is an island in <code>grid1</code> that contains <strong>all</strong> the cells that make up <strong>this</strong> island in <code>grid2</code>.</p>

<p>Return the <em><strong>number</strong> of islands in </em><code>grid2</code> <em>that are considered <strong>sub-islands</strong></em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Nearest Exit from Entrance in Maze

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/nearest-exit-from-entrance-in-maze

## Content

<p>You are given an <code>m x n</code> matrix <code>maze</code> (<strong>0-indexed</strong>) with empty cells (represented as <code>&#39;.&#39;</code>) and walls (represented as <code>&#39;+&#39;</code>). You are also given the <code>entrance</code> of the maze, where <code>entrance = [entrance<sub>row</sub>, entrance<sub>col</sub>]</code> denotes the row and column of the cell you are initially standing at.</p>

<p>In one step, you can move one cell <strong>up</strong>, <strong>down</strong>, <strong>left</strong>, or <strong>right</strong>. You cannot step into a cell with a wall, and you cannot step outside the maze. Your goal is to find the <strong>nearest exit</strong> from the <code>entrance</code>. An <strong>exit</strong> is defined as an <strong>empty cell</strong> that is at the <strong>border</strong> of the <code>maze</code>. The <code>entrance</code> <strong>does not count</strong> as an exit.</p>

<p>Return <em>the <strong>number of steps</strong> in the shortest path from the </em><code>entrance</code><em> to the nearest exit, or </em><code>-1</code><em> if no such path exists</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximum Number of Points with Cost

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-number-of-points-with-cost

## Content

<p>You are given an <code>m x n</code> integer matrix <code>points</code> (<strong>0-indexed</strong>). Starting with <code>0</code> points, you want to <strong>maximize</strong> the number of points you can get from the matrix.</p>

<p>To gain points, you must pick one cell in <strong>each row</strong>. Picking the cell at coordinates <code>(r, c)</code> will <strong>add</strong> <code>points[r][c]</code> to your score.</p>

<p>However, you will lose points if you pick a cell too far from the cell that you picked in the previous row. For every two adjacent rows <code>r</code> and <code>r + 1</code> (where <code>0 &lt;= r &lt; m - 1</code>), picking cells at coordinates <code>(r, c<sub>1</sub>)</code> and <code>(r + 1, c<sub>2</sub>)</code> will <strong>subtract</strong> <code>abs(c<sub>1</sub> - c<sub>2</sub>)</code> from your score.</p>

<p>Return <em>the <strong>maximum</strong> number of points you can achieve</em>.</p>

<p><code>abs(x)</code> is defined as:</p>

<ul>
	<li><code>x</code> for <code>x &gt;= 0</code>.</li>
	<li><code>-x</code> for <code>x &lt; 0</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find Missing Observations

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-missing-observations

## Content

<p>You have observations of <code>n + m</code> <strong>6-sided</strong> dice rolls with each face numbered from <code>1</code> to <code>6</code>. <code>n</code> of the observations went missing, and you only have the observations of <code>m</code> rolls. Fortunately, you have also calculated the <strong>average value</strong> of the <code>n + m</code> rolls.</p>

<p>You are given an integer array <code>rolls</code> of length <code>m</code> where <code>rolls[i]</code> is the value of the <code>i<sup>th</sup></code> observation. You are also given the two integers <code>mean</code> and <code>n</code>.</p>

<p>Return <em>an array of length </em><code>n</code><em> containing the missing observations such that the <strong>average value </strong>of the </em><code>n + m</code><em> rolls is <strong>exactly</strong> </em><code>mean</code>. If there are multiple valid answers, return <em>any of them</em>. If no such array exists, return <em>an empty array</em>.</p>

<p>The <strong>average value</strong> of a set of <code>k</code> numbers is the sum of the numbers divided by <code>k</code>.</p>

<p>Note that <code>mean</code> is an integer, so the sum of the <code>n + m</code> rolls should be divisible by <code>n + m</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Delete the Middle Node of a Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list

## Content

<p>You are given the <code>head</code> of a linked list. <strong>Delete</strong> the <strong>middle node</strong>, and return <em>the</em> <code>head</code> <em>of the modified linked list</em>.</p>

<p>The <strong>middle node</strong> of a linked list of size <code>n</code> is the <code>&lfloor;n / 2&rfloor;<sup>th</sup></code> node from the <b>start</b> using <strong>0-based indexing</strong>, where <code>&lfloor;x&rfloor;</code> denotes the largest integer less than or equal to <code>x</code>.</p>

<ul>
	<li>For <code>n</code> = <code>1</code>, <code>2</code>, <code>3</code>, <code>4</code>, and <code>5</code>, the middle nodes are <code>0</code>, <code>1</code>, <code>1</code>, <code>2</code>, and <code>2</code>, respectively.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximum Twin Sum of a Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list

## Content

<p>In a linked list of size <code>n</code>, where <code>n</code> is <strong>even</strong>, the <code>i<sup>th</sup></code> node (<strong>0-indexed</strong>) of the linked list is known as the <strong>twin</strong> of the <code>(n-1-i)<sup>th</sup></code> node, if <code>0 &lt;= i &lt;= (n / 2) - 1</code>.</p>

<ul>
	<li>For example, if <code>n = 4</code>, then node <code>0</code> is the twin of node <code>3</code>, and node <code>1</code> is the twin of node <code>2</code>. These are the only nodes with twins for <code>n = 4</code>.</li>
</ul>

<p>The <strong>twin sum </strong>is defined as the sum of a node and its twin.</p>

<p>Given the <code>head</code> of a linked list with even length, return <em>the <strong>maximum twin sum</strong> of the linked list</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Solving Questions With Brainpower

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/solving-questions-with-brainpower

## Content

<p>You are given a <strong>0-indexed</strong> 2D integer array <code>questions</code> where <code>questions[i] = [points<sub>i</sub>, brainpower<sub>i</sub>]</code>.</p>

<p>The array describes the questions of an exam, where you have to process the questions <strong>in order</strong> (i.e., starting from question <code>0</code>) and make a decision whether to <strong>solve</strong> or <strong>skip</strong> each question. Solving question <code>i</code> will <strong>earn</strong> you <code>points<sub>i</sub></code> points but you will be <strong>unable</strong> to solve each of the next <code>brainpower<sub>i</sub></code> questions. If you skip question <code>i</code>, you get to make the decision on the next question.</p>

<ul>
	<li>For example, given <code>questions = [[3, 2], [4, 3], [4, 4], [2, 5]]</code>:

	<ul>
		<li>If question <code>0</code> is solved, you will earn <code>3</code> points but you will be unable to solve questions <code>1</code> and <code>2</code>.</li>
		<li>If instead, question <code>0</code> is skipped and question <code>1</code> is solved, you will earn <code>4</code> points but you will be unable to solve questions <code>2</code> and <code>3</code>.</li>
	</ul>
	</li>
</ul>

<p>Return <em>the <strong>maximum</strong> points you can earn for the exam</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Coin Change II

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/coin-change-ii

## Content

<p>You are given an integer array <code>coins</code> representing coins of different denominations and an integer <code>amount</code> representing a total amount of money.</p>

<p>Return <em>the number of combinations that make up that amount</em>. If that amount of money cannot be made up by any combination of the coins, return <code>0</code>.</p>

<p>You may assume that you have an infinite number of each kind of coin.</p>

<p>The answer is <strong>guaranteed</strong> to fit into a signed <strong>32-bit</strong> integer.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Equal Row and Column Pairs

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/equal-row-and-column-pairs

## Content

<p>Given a <strong>0-indexed</strong> <code>n x n</code> integer matrix <code>grid</code>, <em>return the number of pairs </em><code>(r<sub>i</sub>, c<sub>j</sub>)</code><em> such that row </em><code>r<sub>i</sub></code><em> and column </em><code>c<sub>j</sub></code><em> are equal</em>.</p>

<p>A row and column pair is considered equal if they contain the same elements in the same order (i.e., an equal array).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Remove Nodes From Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/remove-nodes-from-linked-list

## Content

<p>You are given the <code>head</code> of a linked list.</p>

<p>Remove every node which has a node with a greater value anywhere to the right side of it.</p>

<p>Return <em>the </em><code>head</code><em> of the modified linked list.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Minimum Operations to Make All Array Elements Equal

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/minimum-operations-to-make-all-array-elements-equal

## Content

<p>You are given an array <code>nums</code> consisting of positive integers.</p>

<p>You are also given an integer array <code>queries</code> of size <code>m</code>. For the <code>i<sup>th</sup></code> query, you want to make all of the elements of <code>nums</code> equal to<code> queries[i]</code>. You can perform the following operation on the array <strong>any</strong> number of times:</p>

<ul>
	<li><strong>Increase</strong> or <strong>decrease</strong> an element of the array by <code>1</code>.</li>
</ul>

<p>Return <em>an array </em><code>answer</code><em> of size </em><code>m</code><em> where </em><code>answer[i]</code><em> is the <strong>minimum</strong> number of operations to make all elements of </em><code>nums</code><em> equal to </em><code>queries[i]</code>.</p>

<p><strong>Note</strong> that after each query the array is reset to its original state.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Insert Greatest Common Divisors in Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list

## Content

<p>Given the head of a linked list <code>head</code>, in which each node contains an integer value.</p>

<p>Between every pair of adjacent nodes, insert a new node with a value equal to the <strong>greatest common divisor</strong> of them.</p>

<p>Return <em>the linked list after insertion</em>.</p>

<p>The <strong>greatest common divisor</strong> of two numbers is the largest positive integer that evenly divides both numbers.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Double a Number Represented as a Linked List

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/double-a-number-represented-as-a-linked-list

## Content

<p>You are given the <code>head</code> of a <strong>non-empty</strong> linked list representing a non-negative integer without leading zeroes.</p>

<p>Return <em>the </em><code>head</code><em> of the linked list after <strong>doubling</strong> it</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find the Length of the Longest Common Prefix

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/find-the-length-of-the-longest-common-prefix

## Content

<p>You are given two arrays with <strong>positive</strong> integers <code>arr1</code> and <code>arr2</code>.</p>

<p>A <strong>prefix</strong> of a positive integer is an integer formed by one or more of its digits, starting from its <strong>leftmost</strong> digit. For example, <code>123</code> is a prefix of the integer <code>12345</code>, while <code>234</code> is <strong>not</strong>.</p>

<p>A <strong>common prefix</strong> of two integers <code>a</code> and <code>b</code> is an integer <code>c</code>, such that <code>c</code> is a prefix of both <code>a</code> and <code>b</code>. For example, <code>5655359</code> and <code>56554</code> have a common prefix <code>565</code> while <code>1223</code> and <code>43456</code> <strong>do not</strong> have a common prefix.</p>

<p>You need to find the length of the <strong>longest common prefix</strong> between all pairs of integers <code>(x, y)</code> such that <code>x</code> belongs to <code>arr1</code> and <code>y</code> belongs to <code>arr2</code>.</p>

<p>Return <em>the length of the <strong>longest</strong> common prefix among all pairs</em>.<em> If no common prefix exists among them</em>, <em>return</em> <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximize Happiness of Selected Children

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/maximize-happiness-of-selected-children

## Content

<p>You are given an array <code>happiness</code> of length <code>n</code>, and a <strong>positive</strong> integer <code>k</code>.</p>

<p>There are <code>n</code> children standing in a queue, where the <code>i<sup>th</sup></code> child has <strong>happiness value</strong> <code>happiness[i]</code>. You want to select <code>k</code> children from these <code>n</code> children in <code>k</code> turns.</p>

<p>In each turn, when you select a child, the <strong>happiness value</strong> of all the children that have <strong>not</strong> been selected till now decreases by <code>1</code>. Note that the happiness value <strong>cannot</strong> become negative and gets decremented <strong>only</strong> if it is positive.</p>

<p>Return <em>the <strong>maximum</strong> sum of the happiness values of the selected children you can achieve by selecting </em><code>k</code> <em>children</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Right Triangles

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/right-triangles

## Content

<p>You are given a 2D boolean matrix <code>grid</code>.</p>

<p>A collection of 3 elements of <code>grid</code> is a <strong>right triangle</strong> if one of its elements is in the <strong>same row</strong> with another element and in the <strong>same column</strong> with the third element. The 3 elements may <strong>not</strong> be next to each other.</p>

<p>Return an integer that is the number of <strong>right triangles</strong> that can be made with 3 elements of <code>grid</code> such that <strong>all</strong> of them have a value of 1.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Delete Nodes From Linked List Present in Array

**Difficulty:** Medium

**Link:** https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array

## Content

<p>You are given an array of integers <code>nums</code> and the <code>head</code> of a linked list. Return the <code>head</code> of the modified linked list after <strong>removing</strong> all nodes from the linked list that have a value that exists in <code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Two Sum

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/two-sum

## Content

<p>Given an array of integers <code>nums</code>&nbsp;and an integer <code>target</code>, return <em>indices of the two numbers such that they add up to <code>target</code></em>.</p>

<p>You may assume that each input would have <strong><em>exactly</em> one solution</strong>, and you may not use the <em>same</em> element twice.</p>

<p>You can return the answer in any order.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Palindrome Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/palindrome-number

## Content

<p>Given an integer <code>x</code>, return <code>true</code><em> if </em><code>x</code><em> is a </em><span data-keyword="palindrome-integer"><em><strong>palindrome</strong></em></span><em>, and </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Roman to Integer

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/roman-to-integer

## Content

<p>Roman numerals are represented by seven different symbols:&nbsp;<code>I</code>, <code>V</code>, <code>X</code>, <code>L</code>, <code>C</code>, <code>D</code> and <code>M</code>.</p>

<pre>
<strong>Symbol</strong>       <strong>Value</strong>
I             1
V             5
X             10
L             50
C             100
D             500
M             1000</pre>

<p>For example,&nbsp;<code>2</code> is written as <code>II</code>&nbsp;in Roman numeral, just two ones added together. <code>12</code> is written as&nbsp;<code>XII</code>, which is simply <code>X + II</code>. The number <code>27</code> is written as <code>XXVII</code>, which is <code>XX + V + II</code>.</p>

<p>Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not <code>IIII</code>. Instead, the number four is written as <code>IV</code>. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as <code>IX</code>. There are six instances where subtraction is used:</p>

<ul>
	<li><code>I</code> can be placed before <code>V</code> (5) and <code>X</code> (10) to make 4 and 9.&nbsp;</li>
	<li><code>X</code> can be placed before <code>L</code> (50) and <code>C</code> (100) to make 40 and 90.&nbsp;</li>
	<li><code>C</code> can be placed before <code>D</code> (500) and <code>M</code> (1000) to make 400 and 900.</li>
</ul>

<p>Given a roman numeral, convert it to an integer.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int romanToInt(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Longest Common Prefix

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/longest-common-prefix

## Content

<p>Write a function to find the longest common prefix string amongst an array of strings.</p>

<p>If there is no common prefix, return an empty string <code>&quot;&quot;</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Valid Parentheses

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/valid-parentheses

## Content

<p>Given a string <code>s</code> containing just the characters <code>&#39;(&#39;</code>, <code>&#39;)&#39;</code>, <code>&#39;{&#39;</code>, <code>&#39;}&#39;</code>, <code>&#39;[&#39;</code> and <code>&#39;]&#39;</code>, determine if the input string is valid.</p>

<p>An input string is valid if:</p>

<ol>
	<li>Open brackets must be closed by the same type of brackets.</li>
	<li>Open brackets must be closed in the correct order.</li>
	<li>Every close bracket has a corresponding open bracket of the same type.</li>
</ol>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isValid(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Merge Two Sorted Lists

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/merge-two-sorted-lists

## Content

<p>You are given the heads of two sorted linked lists <code>list1</code> and <code>list2</code>.</p>

<p>Merge the two lists into one <strong>sorted</strong> list. The list should be made by splicing together the nodes of the first two lists.</p>

<p>Return <em>the head of the merged linked list</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Remove Duplicates from Sorted Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/remove-duplicates-from-sorted-array

## Content

<p>Given an integer array <code>nums</code> sorted in <strong>non-decreasing order</strong>, remove the duplicates <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank"><strong>in-place</strong></a> such that each unique element appears only <strong>once</strong>. The <strong>relative order</strong> of the elements should be kept the <strong>same</strong>. Then return <em>the number of unique elements in </em><code>nums</code>.</p>

<p>Consider the number of unique elements of <code>nums</code> to be <code>k</code>, to get accepted, you need to do the following things:</p>

<ul>
	<li>Change the array <code>nums</code> such that the first <code>k</code> elements of <code>nums</code> contain the unique elements in the order they were present in <code>nums</code> initially. The remaining elements of <code>nums</code> are not important as well as the size of <code>nums</code>.</li>
	<li>Return <code>k</code>.</li>
</ul>

<p><strong>Custom Judge:</strong></p>

<p>The judge will test your solution with the following code:</p>

<pre>
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i &lt; k; i++) {
    assert nums[i] == expectedNums[i];
}
</pre>

<p>If all assertions pass, then your solution will be <strong>accepted</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Remove Element

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/remove-element

## Content

<p>Given an integer array <code>nums</code> and an integer <code>val</code>, remove all occurrences of <code>val</code> in <code>nums</code> <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank"><strong>in-place</strong></a>. The order of the elements may be changed. Then return <em>the number of elements in </em><code>nums</code><em> which are not equal to </em><code>val</code>.</p>

<p>Consider the number of elements in <code>nums</code> which are not equal to <code>val</code> be <code>k</code>, to get accepted, you need to do the following things:</p>

<ul>
	<li>Change the array <code>nums</code> such that the first <code>k</code> elements of <code>nums</code> contain the elements which are not equal to <code>val</code>. The remaining elements of <code>nums</code> are not important as well as the size of <code>nums</code>.</li>
	<li>Return <code>k</code>.</li>
</ul>

<p><strong>Custom Judge:</strong></p>

<p>The judge will test your solution with the following code:</p>

<pre>
int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i &lt; actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
</pre>

<p>If all assertions pass, then your solution will be <strong>accepted</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Search Insert Position

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/search-insert-position

## Content

<p>Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.</p>

<p>You must&nbsp;write an algorithm with&nbsp;<code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Length of Last Word

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/length-of-last-word

## Content

<p>Given a string <code>s</code> consisting of words and spaces, return <em>the length of the <strong>last</strong> word in the string.</em></p>

<p>A <strong>word</strong> is a maximal <span data-keyword="substring-nonempty">substring</span> consisting of non-space characters only.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Plus One

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/plus-one

## Content

<p>You are given a <strong>large integer</strong> represented as an integer array <code>digits</code>, where each <code>digits[i]</code> is the <code>i<sup>th</sup></code> digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading <code>0</code>&#39;s.</p>

<p>Increment the large integer by one and return <em>the resulting array of digits</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Add Binary

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/add-binary

## Content

<p>Given two binary strings <code>a</code> and <code>b</code>, return <em>their sum as a binary string</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string addBinary(string a, string b) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Sqrt(x)

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/sqrtx

## Content

<p>Given a non-negative integer <code>x</code>, return <em>the square root of </em><code>x</code><em> rounded down to the nearest integer</em>. The returned integer should be <strong>non-negative</strong> as well.</p>

<p>You <strong>must not use</strong> any built-in exponent function or operator.</p>

<ul>
	<li>For example, do not use <code>pow(x, 0.5)</code> in c++ or <code>x ** 0.5</code> in python.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int mySqrt(int x) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Climbing Stairs

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/climbing-stairs

## Content

<p>You are climbing a staircase. It takes <code>n</code> steps to reach the top.</p>

<p>Each time you can either climb <code>1</code> or <code>2</code> steps. In how many distinct ways can you climb to the top?</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int climbStairs(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Remove Duplicates from Sorted List

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/remove-duplicates-from-sorted-list

## Content

<p>Given the <code>head</code> of a sorted linked list, <em>delete all duplicates such that each element appears only once</em>. Return <em>the linked list <strong>sorted</strong> as well</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Merge Sorted Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/merge-sorted-array

## Content

<p>You are given two integer arrays <code>nums1</code> and <code>nums2</code>, sorted in <strong>non-decreasing order</strong>, and two integers <code>m</code> and <code>n</code>, representing the number of elements in <code>nums1</code> and <code>nums2</code> respectively.</p>

<p><strong>Merge</strong> <code>nums1</code> and <code>nums2</code> into a single array sorted in <strong>non-decreasing order</strong>.</p>

<p>The final sorted array should not be returned by the function, but instead be <em>stored inside the array </em><code>nums1</code>. To accommodate this, <code>nums1</code> has a length of <code>m + n</code>, where the first <code>m</code> elements denote the elements that should be merged, and the last <code>n</code> elements are set to <code>0</code> and should be ignored. <code>nums2</code> has a length of <code>n</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Binary Tree Inorder Traversal

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/binary-tree-inorder-traversal

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the inorder traversal of its nodes&#39; values</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Same Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/same-tree

## Content

<p>Given the roots of two binary trees <code>p</code> and <code>q</code>, write a function to check if they are the same or not.</p>

<p>Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Symmetric Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/symmetric-tree

## Content

<p>Given the <code>root</code> of a binary tree, <em>check whether it is a mirror of itself</em> (i.e., symmetric around its center).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximum Depth of Binary Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/maximum-depth-of-binary-tree

## Content

<p>Given the <code>root</code> of a binary tree, return <em>its maximum depth</em>.</p>

<p>A binary tree&#39;s <strong>maximum depth</strong>&nbsp;is the number of nodes along the longest path from the root node down to the farthest leaf node.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Convert Sorted Array to Binary Search Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree

## Content

<p>Given an integer array <code>nums</code> where the elements are sorted in <strong>ascending order</strong>, convert <em>it to a </em><span data-keyword="height-balanced"><strong><em>height-balanced</em></strong></span> <em>binary search tree</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Balanced Binary Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/balanced-binary-tree

## Content

<p>Given a binary tree, determine if it is <span data-keyword="height-balanced"><strong>height-balanced</strong></span>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Minimum Depth of Binary Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/minimum-depth-of-binary-tree

## Content

<p>Given a binary tree, find its minimum depth.</p>

<p>The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.</p>

<p><strong>Note:</strong>&nbsp;A leaf is a node with no children.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Path Sum

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/path-sum

## Content

<p>Given the <code>root</code> of a binary tree and an integer <code>targetSum</code>, return <code>true</code> if the tree has a <strong>root-to-leaf</strong> path such that adding up all the values along the path equals <code>targetSum</code>.</p>

<p>A <strong>leaf</strong> is a node with no children.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Pascal's Triangle

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/pascals-triangle

## Content

<p>Given an integer <code>numRows</code>, return the first numRows of <strong>Pascal&#39;s triangle</strong>.</p>

<p>In <strong>Pascal&#39;s triangle</strong>, each number is the sum of the two numbers directly above it as shown:</p>
<img alt="" src="https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif" style="height:240px; width:260px" />
<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Pascal's Triangle II

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/pascals-triangle-ii

## Content

<p>Given an integer <code>rowIndex</code>, return the <code>rowIndex<sup>th</sup></code> (<strong>0-indexed</strong>) row of the <strong>Pascal&#39;s triangle</strong>.</p>

<p>In <strong>Pascal&#39;s triangle</strong>, each number is the sum of the two numbers directly above it as shown:</p>
<img alt="" src="https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif" style="height:240px; width:260px" />
<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Best Time to Buy and Sell Stock

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock

## Content

<p>You are given an array <code>prices</code> where <code>prices[i]</code> is the price of a given stock on the <code>i<sup>th</sup></code> day.</p>

<p>You want to maximize your profit by choosing a <strong>single day</strong> to buy one stock and choosing a <strong>different day in the future</strong> to sell that stock.</p>

<p>Return <em>the maximum profit you can achieve from this transaction</em>. If you cannot achieve any profit, return <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Valid Palindrome

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/valid-palindrome

## Content

<p>A phrase is a <strong>palindrome</strong> if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.</p>

<p>Given a string <code>s</code>, return <code>true</code><em> if it is a <strong>palindrome</strong>, or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Single Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/single-number

## Content

<p>Given a <strong>non-empty</strong>&nbsp;array of integers <code>nums</code>, every element appears <em>twice</em> except for one. Find that single one.</p>

<p>You must&nbsp;implement a solution with a linear runtime complexity and use&nbsp;only constant&nbsp;extra space.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Linked List Cycle

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/linked-list-cycle

## Content

<p>Given <code>head</code>, the head of a linked list, determine if the linked list has a cycle in it.</p>

<p>There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the&nbsp;<code>next</code>&nbsp;pointer. Internally, <code>pos</code>&nbsp;is used to denote the index of the node that&nbsp;tail&#39;s&nbsp;<code>next</code>&nbsp;pointer is connected to.&nbsp;<strong>Note that&nbsp;<code>pos</code>&nbsp;is not passed as a parameter</strong>.</p>

<p>Return&nbsp;<code>true</code><em> if there is a cycle in the linked list</em>. Otherwise, return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Binary Tree Preorder Traversal

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/binary-tree-preorder-traversal

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the preorder traversal of its nodes&#39; values</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Binary Tree Postorder Traversal

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/binary-tree-postorder-traversal

## Content

<p>Given the <code>root</code> of a&nbsp;binary tree, return <em>the postorder traversal of its nodes&#39; values</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Read N Characters Given Read4

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/read-n-characters-given-read4

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Intersection of Two Linked Lists

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/intersection-of-two-linked-lists

## Content

<p>Given the heads of two singly linked-lists <code>headA</code> and <code>headB</code>, return <em>the node at which the two lists intersect</em>. If the two linked lists have no intersection at all, return <code>null</code>.</p>

<p>For example, the following two linked lists begin to intersect at node <code>c1</code>:</p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/05/160_statement.png" style="width: 500px; height: 162px;" />
<p>The test cases are generated such that there are no cycles anywhere in the entire linked structure.</p>

<p><strong>Note</strong> that the linked lists must <strong>retain their original structure</strong> after the function returns.</p>

<p><strong>Custom Judge:</strong></p>

<p>The inputs to the <strong>judge</strong> are given as follows (your program is <strong>not</strong> given these inputs):</p>

<ul>
	<li><code>intersectVal</code> - The value of the node where the intersection occurs. This is <code>0</code> if there is no intersected node.</li>
	<li><code>listA</code> - The first linked list.</li>
	<li><code>listB</code> - The second linked list.</li>
	<li><code>skipA</code> - The number of nodes to skip ahead in <code>listA</code> (starting from the head) to get to the intersected node.</li>
	<li><code>skipB</code> - The number of nodes to skip ahead in <code>listB</code> (starting from the head) to get to the intersected node.</li>
</ul>

<p>The judge will then create the linked structure based on these inputs and pass the two heads, <code>headA</code> and <code>headB</code> to your program. If you correctly return the intersected node, then your solution will be <strong>accepted</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Excel Sheet Column Title

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/excel-sheet-column-title

## Content

<p>Given an integer <code>columnNumber</code>, return <em>its corresponding column title as it appears in an Excel sheet</em>.</p>

<p>For example:</p>

<pre>
A -&gt; 1
B -&gt; 2
C -&gt; 3
...
Z -&gt; 26
AA -&gt; 27
AB -&gt; 28 
...
</pre>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string convertToTitle(int columnNumber) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Majority Element

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/majority-element

## Content

<p>Given an array <code>nums</code> of size <code>n</code>, return <em>the majority element</em>.</p>

<p>The majority element is the element that appears more than <code>&lfloor;n / 2&rfloor;</code> times. You may assume that the majority element always exists in the array.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Reverse Bits

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/reverse-bits

## Content

<p>Reverse bits of a given 32 bits unsigned integer.</p>

<p><strong>Note:</strong></p>

<ul>
	<li>Note that in some languages, such as Java, there is no unsigned integer type. In this case, both input and output will be given as a signed integer type. They should not affect your implementation, as the integer&#39;s internal binary representation is the same, whether it is signed or unsigned.</li>
	<li>In Java, the compiler represents the signed integers using <a href="https://en.wikipedia.org/wiki/Two%27s_complement" target="_blank">2&#39;s complement notation</a>. Therefore, in <strong class="example">Example 2</strong> above, the input represents the signed integer <code>-3</code> and the output represents the signed integer <code>-1073741825</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Number of 1 Bits

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/number-of-1-bits

## Content

<p>Write a function that takes the binary representation of a positive integer and returns the number of <span data-keyword="set-bit">set bits</span> it has (also known as the <a href="http://en.wikipedia.org/wiki/Hamming_weight" target="_blank">Hamming weight</a>).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int hammingWeight(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Happy Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/happy-number

## Content

<p>Write an algorithm to determine if a number <code>n</code> is happy.</p>

<p>A <strong>happy number</strong> is a number defined by the following process:</p>

<ul>
	<li>Starting with any positive integer, replace the number by the sum of the squares of its digits.</li>
	<li>Repeat the process until the number equals 1 (where it will stay), or it <strong>loops endlessly in a cycle</strong> which does not include 1.</li>
	<li>Those numbers for which this process <strong>ends in 1</strong> are happy.</li>
</ul>

<p>Return <code>true</code> <em>if</em> <code>n</code> <em>is a happy number, and</em> <code>false</code> <em>if not</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isHappy(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Remove Linked List Elements

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/remove-linked-list-elements

## Content

<p>Given the <code>head</code> of a linked list and an integer <code>val</code>, remove all the nodes of the linked list that has <code>Node.val == val</code>, and return <em>the new head</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Isomorphic Strings

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/isomorphic-strings

## Content

<p>Given two strings <code>s</code> and <code>t</code>, <em>determine if they are isomorphic</em>.</p>

<p>Two strings <code>s</code> and <code>t</code> are isomorphic if the characters in <code>s</code> can be replaced to get <code>t</code>.</p>

<p>All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Reverse Linked List

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/reverse-linked-list

## Content

<p>Given the <code>head</code> of a singly linked list, reverse the list, and return <em>the reversed list</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Contains Duplicate

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/contains-duplicate

## Content

<p>Given an integer array <code>nums</code>, return <code>true</code> if any value appears <strong>at least twice</strong> in the array, and return <code>false</code> if every element is distinct.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Contains Duplicate II

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/contains-duplicate-ii

## Content

<p>Given an integer array <code>nums</code> and an integer <code>k</code>, return <code>true</code> <em>if there are two <strong>distinct indices</strong> </em><code>i</code><em> and </em><code>j</code><em> in the array such that </em><code>nums[i] == nums[j]</code><em> and </em><code>abs(i - j) &lt;= k</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Count Complete Tree Nodes

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/count-complete-tree-nodes

## Content

<p>Given the <code>root</code> of a <strong>complete</strong> binary tree, return the number of the nodes in the tree.</p>

<p>According to <strong><a href="http://en.wikipedia.org/wiki/Binary_tree#Types_of_binary_trees" target="_blank">Wikipedia</a></strong>, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between <code>1</code> and <code>2<sup>h</sup></code> nodes inclusive at the last level <code>h</code>.</p>

<p>Design an algorithm that runs in less than&nbsp;<code data-stringify-type="code">O(n)</code>&nbsp;time complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Invert Binary Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/invert-binary-tree

## Content

<p>Given the <code>root</code> of a binary tree, invert the tree, and return <em>its root</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Summary Ranges

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/summary-ranges

## Content

<p>You are given a <strong>sorted unique</strong> integer array <code>nums</code>.</p>

<p>A <strong>range</strong> <code>[a,b]</code> is the set of all integers from <code>a</code> to <code>b</code> (inclusive).</p>

<p>Return <em>the <strong>smallest sorted</strong> list of ranges that <strong>cover all the numbers in the array exactly</strong></em>. That is, each element of <code>nums</code> is covered by exactly one of the ranges, and there is no integer <code>x</code> such that <code>x</code> is in one of the ranges but not in <code>nums</code>.</p>

<p>Each range <code>[a,b]</code> in the list should be output as:</p>

<ul>
	<li><code>&quot;a-&gt;b&quot;</code> if <code>a != b</code></li>
	<li><code>&quot;a&quot;</code> if <code>a == b</code></li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Power of Two

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/power-of-two

## Content

<p>Given an integer <code>n</code>, return <em><code>true</code> if it is a power of two. Otherwise, return <code>false</code></em>.</p>

<p>An integer <code>n</code> is a power of two, if there exists an integer <code>x</code> such that <code>n == 2<sup>x</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Palindrome Linked List

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/palindrome-linked-list

## Content

<p>Given the <code>head</code> of a singly linked list, return <code>true</code><em> if it is a </em><span data-keyword="palindrome-sequence"><em>palindrome</em></span><em> or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Valid Anagram

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/valid-anagram

## Content

<p>Given two strings <code>s</code> and <code>t</code>, return <code>true</code> if <code>t</code> is an <span data-keyword="anagram">anagram</span> of <code>s</code>, and <code>false</code> otherwise.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Meeting Rooms

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/meeting-rooms

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Binary Tree Paths

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/binary-tree-paths

## Content

<p>Given the <code>root</code> of a binary tree, return <em>all root-to-leaf paths in <strong>any order</strong></em>.</p>

<p>A <strong>leaf</strong> is a node with no children.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Missing Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/missing-number

## Content

<p>Given an array <code>nums</code> containing <code>n</code> distinct numbers in the range <code>[0, n]</code>, return <em>the only number in the range that is missing from the array.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# First Bad Version

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/first-bad-version

## Content

<p>You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.</p>

<p>Suppose you have <code>n</code> versions <code>[1, 2, ..., n]</code> and you want to find out the first bad one, which causes all the following ones to be bad.</p>

<p>You are given an API <code>bool isBadVersion(version)</code> which returns whether <code>version</code> is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Move Zeroes

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/move-zeroes

## Content

<p>Given an integer array <code>nums</code>, move all <code>0</code>&#39;s to the end of it while maintaining the relative order of the non-zero elements.</p>

<p><strong>Note</strong> that you must do this in-place without making a copy of the array.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Nim Game

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/nim-game

## Content

<p>You are playing the following Nim Game with your friend:</p>

<ul>
	<li>Initially, there is a heap of stones on the table.</li>
	<li>You and your friend will alternate taking turns, and <strong>you go first</strong>.</li>
	<li>On each turn, the person whose turn it is will remove 1 to 3 stones from the heap.</li>
	<li>The one who removes the last stone is the winner.</li>
</ul>

<p>Given <code>n</code>, the number of stones in the heap, return <code>true</code><em> if you can win the game assuming both you and your friend play optimally, otherwise return </em><code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canWinNim(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Range Sum Query - Immutable

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/range-sum-query-immutable

## Content

<p>Given an integer array <code>nums</code>, handle multiple queries of the following type:</p>

<ol>
	<li>Calculate the <strong>sum</strong> of the elements of <code>nums</code> between indices <code>left</code> and <code>right</code> <strong>inclusive</strong> where <code>left &lt;= right</code>.</li>
</ol>

<p>Implement the <code>NumArray</code> class:</p>

<ul>
	<li><code>NumArray(int[] nums)</code> Initializes the object with the integer array <code>nums</code>.</li>
	<li><code>int sumRange(int left, int right)</code> Returns the <strong>sum</strong> of the elements of <code>nums</code> between indices <code>left</code> and <code>right</code> <strong>inclusive</strong> (i.e. <code>nums[left] + nums[left + 1] + ... + nums[right]</code>).</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class NumArray {
public:
    NumArray(vector<int>& nums) {
        
    }
    
    int sumRange(int left, int right) {
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Power of Three

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/power-of-three

## Content

<p>Given an integer <code>n</code>, return <em><code>true</code> if it is a power of three. Otherwise, return <code>false</code></em>.</p>

<p>An integer <code>n</code> is a power of three, if there exists an integer <code>x</code> such that <code>n == 3<sup>x</sup></code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isPowerOfThree(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Counting Bits

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/counting-bits

## Content

<p>Given an integer <code>n</code>, return <em>an array </em><code>ans</code><em> of length </em><code>n + 1</code><em> such that for each </em><code>i</code><em> </em>(<code>0 &lt;= i &lt;= n</code>)<em>, </em><code>ans[i]</code><em> is the <strong>number of </strong></em><code>1</code><em><strong>&#39;s</strong> in the binary representation of </em><code>i</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> countBits(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Reverse String

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/reverse-string

## Content

<p>Write a function that reverses a string. The input string is given as an array of characters <code>s</code>.</p>

<p>You must do this by modifying the input array <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a> with <code>O(1)</code> extra memory.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Reverse Vowels of a String

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/reverse-vowels-of-a-string

## Content

<p>Given a string <code>s</code>, reverse only all the vowels in the string and return it.</p>

<p>The vowels are <code>&#39;a&#39;</code>, <code>&#39;e&#39;</code>, <code>&#39;i&#39;</code>, <code>&#39;o&#39;</code>, and <code>&#39;u&#39;</code>, and they can appear in both lower and upper cases, more than once.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string reverseVowels(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Intersection of Two Arrays

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/intersection-of-two-arrays

## Content

<p>Given two integer arrays <code>nums1</code> and <code>nums2</code>, return <em>an array of their <span data-keyword="array-intersection">intersection</span></em>. Each element in the result must be <strong>unique</strong> and you may return the result in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Intersection of Two Arrays II

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/intersection-of-two-arrays-ii

## Content

<p>Given two integer arrays <code>nums1</code> and <code>nums2</code>, return <em>an array of their intersection</em>. Each element in the result must appear as many times as it shows in both arrays and you may return the result in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Guess Number Higher or Lower

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/guess-number-higher-or-lower

## Content

<p>We are playing the Guess Game. The game is as follows:</p>

<p>I pick a number from <code>1</code> to <code>n</code>. You have to guess which number I picked.</p>

<p>Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.</p>

<p>You call a pre-defined API <code>int guess(int num)</code>, which returns three possible results:</p>

<ul>
	<li><code>-1</code>: Your guess is higher than the number I picked (i.e. <code>num &gt; pick</code>).</li>
	<li><code>1</code>: Your guess is lower than the number I picked (i.e. <code>num &lt; pick</code>).</li>
	<li><code>0</code>: your guess is equal to the number I picked (i.e. <code>num == pick</code>).</li>
</ul>

<p>Return <em>the number that I picked</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Ransom Note

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/ransom-note

## Content

<p>Given two strings <code>ransomNote</code> and <code>magazine</code>, return <code>true</code><em> if </em><code>ransomNote</code><em> can be constructed by using the letters from </em><code>magazine</code><em> and </em><code>false</code><em> otherwise</em>.</p>

<p>Each letter in <code>magazine</code> can only be used once in <code>ransomNote</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find the Difference

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-the-difference

## Content

<p>You are given two strings <code>s</code> and <code>t</code>.</p>

<p>String <code>t</code> is generated by random shuffling string <code>s</code> and then add one more letter at a random position.</p>

<p>Return the letter that was added to <code>t</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Is Subsequence

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/is-subsequence

## Content

<p>Given two strings <code>s</code> and <code>t</code>, return <code>true</code><em> if </em><code>s</code><em> is a <strong>subsequence</strong> of </em><code>t</code><em>, or </em><code>false</code><em> otherwise</em>.</p>

<p>A <strong>subsequence</strong> of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., <code>&quot;ace&quot;</code> is a subsequence of <code>&quot;<u>a</u>b<u>c</u>d<u>e</u>&quot;</code> while <code>&quot;aec&quot;</code> is not).</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isSubsequence(string s, string t) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Arranging Coins

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/arranging-coins

## Content

<p>You have <code>n</code> coins and you want to build a staircase with these coins. The staircase consists of <code>k</code> rows where the <code>i<sup>th</sup></code> row has exactly <code>i</code> coins. The last row of the staircase <strong>may be</strong> incomplete.</p>

<p>Given the integer <code>n</code>, return <em>the number of <strong>complete rows</strong> of the staircase you will build</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int arrangeCoins(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find All Numbers Disappeared in an Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array

## Content

<p>Given an array <code>nums</code> of <code>n</code> integers where <code>nums[i]</code> is in the range <code>[1, n]</code>, return <em>an array of all the integers in the range</em> <code>[1, n]</code> <em>that do not appear in</em> <code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Repeated Substring Pattern

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/repeated-substring-pattern

## Content

<p>Given a string <code>s</code>, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Island Perimeter

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/island-perimeter

## Content

<p>You are given <code>row x col</code> <code>grid</code> representing a map where <code>grid[i][j] = 1</code> represents&nbsp;land and <code>grid[i][j] = 0</code> represents water.</p>

<p>Grid cells are connected <strong>horizontally/vertically</strong> (not diagonally). The <code>grid</code> is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).</p>

<p>The island doesn&#39;t have &quot;lakes&quot;, meaning the water inside isn&#39;t connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don&#39;t exceed 100. Determine the perimeter of the island.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Number Complement

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/number-complement

## Content

<p>The <strong>complement</strong> of an integer is the integer you get when you flip all the <code>0</code>&#39;s to <code>1</code>&#39;s and all the <code>1</code>&#39;s to <code>0</code>&#39;s in its binary representation.</p>

<ul>
	<li>For example, The integer <code>5</code> is <code>&quot;101&quot;</code> in binary and its <strong>complement</strong> is <code>&quot;010&quot;</code> which is the integer <code>2</code>.</li>
</ul>

<p>Given an integer <code>num</code>, return <em>its complement</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findComplement(int num) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# License Key Formatting

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/license-key-formatting

## Content

<p>You are given a license key represented as a string <code>s</code> that consists of only alphanumeric characters and dashes. The string is separated into <code>n + 1</code> groups by <code>n</code> dashes. You are also given an integer <code>k</code>.</p>

<p>We want to reformat the string <code>s</code> such that each group contains exactly <code>k</code> characters, except for the first group, which could be shorter than <code>k</code> but still must contain at least one character. Furthermore, there must be a dash inserted between two groups, and you should convert all lowercase letters to uppercase.</p>

<p>Return <em>the reformatted license key</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Next Greater Element I

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/next-greater-element-i

## Content

<p>The <strong>next greater element</strong> of some element <code>x</code> in an array is the <strong>first greater</strong> element that is <strong>to the right</strong> of <code>x</code> in the same array.</p>

<p>You are given two <strong>distinct 0-indexed</strong> integer arrays <code>nums1</code> and <code>nums2</code>, where <code>nums1</code> is a subset of <code>nums2</code>.</p>

<p>For each <code>0 &lt;= i &lt; nums1.length</code>, find the index <code>j</code> such that <code>nums1[i] == nums2[j]</code> and determine the <strong>next greater element</strong> of <code>nums2[j]</code> in <code>nums2</code>. If there is no next greater element, then the answer for this query is <code>-1</code>.</p>

<p>Return <em>an array </em><code>ans</code><em> of length </em><code>nums1.length</code><em> such that </em><code>ans[i]</code><em> is the <strong>next greater element</strong> as described above.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Relative Ranks

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/relative-ranks

## Content

<p>You are given an integer array <code>score</code> of size <code>n</code>, where <code>score[i]</code> is the score of the <code>i<sup>th</sup></code> athlete in a competition. All the scores are guaranteed to be <strong>unique</strong>.</p>

<p>The athletes are <strong>placed</strong> based on their scores, where the <code>1<sup>st</sup></code> place athlete has the highest score, the <code>2<sup>nd</sup></code> place athlete has the <code>2<sup>nd</sup></code> highest score, and so on. The placement of each athlete determines their rank:</p>

<ul>
	<li>The <code>1<sup>st</sup></code> place athlete&#39;s rank is <code>&quot;Gold Medal&quot;</code>.</li>
	<li>The <code>2<sup>nd</sup></code> place athlete&#39;s rank is <code>&quot;Silver Medal&quot;</code>.</li>
	<li>The <code>3<sup>rd</sup></code> place athlete&#39;s rank is <code>&quot;Bronze Medal&quot;</code>.</li>
	<li>For the <code>4<sup>th</sup></code> place to the <code>n<sup>th</sup></code> place athlete, their rank is their placement number (i.e., the <code>x<sup>th</sup></code> place athlete&#39;s rank is <code>&quot;x&quot;</code>).</li>
</ul>

<p>Return an array <code>answer</code> of size <code>n</code> where <code>answer[i]</code> is the <strong>rank</strong> of the <code>i<sup>th</sup></code> athlete.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Fibonacci Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/fibonacci-number

## Content

<p>The <b>Fibonacci numbers</b>, commonly denoted <code>F(n)</code> form a sequence, called the <b>Fibonacci sequence</b>, such that each number is the sum of the two preceding ones, starting from <code>0</code> and <code>1</code>. That is,</p>

<pre>
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n &gt; 1.
</pre>

<p>Given <code>n</code>, calculate <code>F(n)</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int fib(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Minimum Absolute Difference in BST

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/minimum-absolute-difference-in-bst

## Content

<p>Given the <code>root</code> of a Binary Search Tree (BST), return <em>the minimum absolute difference between the values of any two different nodes in the tree</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Diameter of Binary Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/diameter-of-binary-tree

## Content

<p>Given the <code>root</code> of a binary tree, return <em>the length of the <strong>diameter</strong> of the tree</em>.</p>

<p>The <strong>diameter</strong> of a binary tree is the <strong>length</strong> of the longest path between any two nodes in a tree. This path may or may not pass through the <code>root</code>.</p>

<p>The <strong>length</strong> of a path between two nodes is represented by the number of edges between them.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Subtree of Another Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/subtree-of-another-tree

## Content

<p>Given the roots of two binary trees <code>root</code> and <code>subRoot</code>, return <code>true</code> if there is a subtree of <code>root</code> with the same structure and node values of<code> subRoot</code> and <code>false</code> otherwise.</p>

<p>A subtree of a binary tree <code>tree</code> is a tree that consists of a node in <code>tree</code> and all of this node&#39;s descendants. The tree <code>tree</code> could also be considered as a subtree of itself.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# N-ary Tree Preorder Traversal

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/n-ary-tree-preorder-traversal

## Content

<p>Given the <code>root</code> of an n-ary tree, return <em>the preorder traversal of its nodes&#39; values</em>.</p>

<p>Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value (See examples)</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Can Place Flowers

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/can-place-flowers

## Content

<p>You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in <strong>adjacent</strong> plots.</p>

<p>Given an integer array <code>flowerbed</code> containing <code>0</code>&#39;s and <code>1</code>&#39;s, where <code>0</code> means empty and <code>1</code> means not empty, and an integer <code>n</code>, return <code>true</code>&nbsp;<em>if</em> <code>n</code> <em>new flowers can be planted in the</em> <code>flowerbed</code> <em>without violating the no-adjacent-flowers rule and</em> <code>false</code> <em>otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Merge Two Binary Trees

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/merge-two-binary-trees

## Content

<p>You are given two binary trees <code>root1</code> and <code>root2</code>.</p>

<p>Imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not. You need to merge the two trees into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of the new tree.</p>

<p>Return <em>the merged tree</em>.</p>

<p><strong>Note:</strong> The merging process must start from the root nodes of both trees.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Average of Levels in Binary Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/average-of-levels-in-binary-tree

## Content

Given the <code>root</code> of a binary tree, return <em>the average value of the nodes on each level in the form of an array</em>. Answers within <code>10<sup>-5</sup></code> of the actual answer will be accepted.
<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Maximum Average Subarray I

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/maximum-average-subarray-i

## Content

<p>You are given an integer array <code>nums</code> consisting of <code>n</code> elements, and an integer <code>k</code>.</p>

<p>Find a contiguous subarray whose <strong>length is equal to</strong> <code>k</code> that has the maximum average value and return <em>this value</em>. Any answer with a calculation error less than <code>10<sup>-5</sup></code> will be accepted.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Search in a Binary Search Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/search-in-a-binary-search-tree

## Content

<p>You are given the <code>root</code> of a binary search tree (BST) and an integer <code>val</code>.</p>

<p>Find the node in the BST that the node&#39;s value equals <code>val</code> and return the subtree rooted with that node. If such a node does not exist, return <code>null</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Binary Search

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/binary-search

## Content

<p>Given an array of integers <code>nums</code> which is sorted in ascending order, and an integer <code>target</code>, write a function to search <code>target</code> in <code>nums</code>. If <code>target</code> exists, then return its index. Otherwise, return <code>-1</code>.</p>

<p>You must write an algorithm with <code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find Pivot Index

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-pivot-index

## Content

<p>Given an array of integers <code>nums</code>, calculate the <strong>pivot index</strong> of this array.</p>

<p>The <strong>pivot index</strong> is the index where the sum of all the numbers <strong>strictly</strong> to the left of the index is equal to the sum of all the numbers <strong>strictly</strong> to the index&#39;s right.</p>

<p>If the index is on the left edge of the array, then the left sum is <code>0</code> because there are no elements to the left. This also applies to the right edge of the array.</p>

<p>Return <em>the <strong>leftmost pivot index</strong></em>. If no such index exists, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Flood Fill

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/flood-fill

## Content

<p>You are given an image represented by an <code>m x n</code> grid of integers <code>image</code>, where <code>image[i][j]</code> represents the pixel value of the image. You are also given three integers <code>sr</code>, <code>sc</code>, and <code>color</code>. Your task is to perform a <strong>flood fill</strong> on the image starting from the pixel <code>image[sr][sc]</code>.</p>

<p>To perform a <strong>flood fill</strong>:</p>

<ol>
	<li>Begin with the starting pixel and change its color to <code>color</code>.</li>
	<li>Perform the same process for each pixel that is <strong>directly adjacent</strong> (pixels that share a side with the original pixel, either horizontally or vertically) and shares the <strong>same color</strong> as the starting pixel.</li>
	<li>Keep <strong>repeating</strong> this process by checking neighboring pixels of the <em>updated</em> pixels&nbsp;and modifying their color if it matches the original color of the starting pixel.</li>
	<li>The process <strong>stops</strong> when there are <strong>no more</strong> adjacent pixels of the original color to update.</li>
</ol>

<p>Return the <strong>modified</strong> image after performing the flood fill.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find Smallest Letter Greater Than Target

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-smallest-letter-greater-than-target

## Content

<p>You are given an array of characters <code>letters</code> that is sorted in <strong>non-decreasing order</strong>, and a character <code>target</code>. There are <strong>at least two different</strong> characters in <code>letters</code>.</p>

<p>Return <em>the smallest character in </em><code>letters</code><em> that is lexicographically greater than </em><code>target</code>. If such a character does not exist, return the first character in <code>letters</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Min Cost Climbing Stairs

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/min-cost-climbing-stairs

## Content

<p>You are given an integer array <code>cost</code> where <code>cost[i]</code> is the cost of <code>i<sup>th</sup></code> step on a staircase. Once you pay the cost, you can either climb one or two steps.</p>

<p>You can either start from the step with index <code>0</code>, or the step with index <code>1</code>.</p>

<p>Return <em>the minimum cost to reach the top of the floor</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Backspace String Compare

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/backspace-string-compare

## Content

<p>Given two strings <code>s</code> and <code>t</code>, return <code>true</code> <em>if they are equal when both are typed into empty text editors</em>. <code>&#39;#&#39;</code> means a backspace character.</p>

<p>Note that after backspacing an empty text, the text will continue empty.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Lemonade Change

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/lemonade-change

## Content

<p>At a lemonade stand, each lemonade costs <code>$5</code>. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a <code>$5</code>, <code>$10</code>, or <code>$20</code> bill. You must provide the correct change to each customer so that the net transaction is that the customer pays <code>$5</code>.</p>

<p>Note that you do not have any change in hand at first.</p>

<p>Given an integer array <code>bills</code> where <code>bills[i]</code> is the bill the <code>i<sup>th</sup></code> customer pays, return <code>true</code> <em>if you can provide every customer with the correct change, or</em> <code>false</code> <em>otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Middle of the Linked List

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/middle-of-the-linked-list

## Content

<p>Given the <code>head</code> of a singly linked list, return <em>the middle node of the linked list</em>.</p>

<p>If there are two middle nodes, return <strong>the second middle</strong> node.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Uncommon Words from Two Sentences

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/uncommon-words-from-two-sentences

## Content

<p>A <strong>sentence</strong> is a string of single-space separated words where each word consists only of lowercase letters.</p>

<p>A word is <strong>uncommon</strong> if it appears exactly once in one of the sentences, and <strong>does not appear</strong> in the other sentence.</p>

<p>Given two <strong>sentences</strong> <code>s1</code> and <code>s2</code>, return <em>a list of all the <strong>uncommon words</strong></em>. You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Monotonic Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/monotonic-array

## Content

<p>An array is <strong>monotonic</strong> if it is either monotone increasing or monotone decreasing.</p>

<p>An array <code>nums</code> is monotone increasing if for all <code>i &lt;= j</code>, <code>nums[i] &lt;= nums[j]</code>. An array <code>nums</code> is monotone decreasing if for all <code>i &lt;= j</code>, <code>nums[i] &gt;= nums[j]</code>.</p>

<p>Given an integer array <code>nums</code>, return <code>true</code><em> if the given array is monotonic, or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Smallest Range I

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/smallest-range-i

## Content

<p>You are given an integer array <code>nums</code> and an integer <code>k</code>.</p>

<p>In one operation, you can choose any index <code>i</code> where <code>0 &lt;= i &lt; nums.length</code> and change <code>nums[i]</code> to <code>nums[i] + x</code> where <code>x</code> is an integer from the range <code>[-k, k]</code>. You can apply this operation <strong>at most once</strong> for each index <code>i</code>.</p>

<p>The <strong>score</strong> of <code>nums</code> is the difference between the maximum and minimum elements in <code>nums</code>.</p>

<p>Return <em>the minimum <strong>score</strong> of </em><code>nums</code><em> after applying the mentioned operation at most once for each index in it</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# DI String Match

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/di-string-match

## Content

<p>A permutation <code>perm</code> of <code>n + 1</code> integers of all the integers in the range <code>[0, n]</code> can be represented as a string <code>s</code> of length <code>n</code> where:</p>

<ul>
	<li><code>s[i] == &#39;I&#39;</code> if <code>perm[i] &lt; perm[i + 1]</code>, and</li>
	<li><code>s[i] == &#39;D&#39;</code> if <code>perm[i] &gt; perm[i + 1]</code>.</li>
</ul>

<p>Given a string <code>s</code>, reconstruct the permutation <code>perm</code> and return it. If there are multiple valid permutations perm, return <strong>any of them</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> diStringMatch(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Squares of a Sorted Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/squares-of-a-sorted-array

## Content

<p>Given an integer array <code>nums</code> sorted in <strong>non-decreasing</strong> order, return <em>an array of <strong>the squares of each number</strong> sorted in non-decreasing order</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find the Town Judge

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-the-town-judge

## Content

<p>In a town, there are <code>n</code> people labeled from <code>1</code> to <code>n</code>. There is a rumor that one of these people is secretly the town judge.</p>

<p>If the town judge exists, then:</p>

<ol>
	<li>The town judge trusts nobody.</li>
	<li>Everybody (except for the town judge) trusts the town judge.</li>
	<li>There is exactly one person that satisfies properties <strong>1</strong> and <strong>2</strong>.</li>
</ol>

<p>You are given an array <code>trust</code> where <code>trust[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> representing that the person labeled <code>a<sub>i</sub></code> trusts the person labeled <code>b<sub>i</sub></code>. If a trust relationship does not exist in <code>trust</code> array, then such a trust relationship does not exist.</p>

<p>Return <em>the label of the town judge if the town judge exists and can be identified, or return </em><code>-1</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Remove Outermost Parentheses

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/remove-outermost-parentheses

## Content

<p>A valid parentheses string is either empty <code>&quot;&quot;</code>, <code>&quot;(&quot; + A + &quot;)&quot;</code>, or <code>A + B</code>, where <code>A</code> and <code>B</code> are valid parentheses strings, and <code>+</code> represents string concatenation.</p>

<ul>
	<li>For example, <code>&quot;&quot;</code>, <code>&quot;()&quot;</code>, <code>&quot;(())()&quot;</code>, and <code>&quot;(()(()))&quot;</code> are all valid parentheses strings.</li>
</ul>

<p>A valid parentheses string <code>s</code> is primitive if it is nonempty, and there does not exist a way to split it into <code>s = A + B</code>, with <code>A</code> and <code>B</code> nonempty valid parentheses strings.</p>

<p>Given a valid parentheses string <code>s</code>, consider its primitive decomposition: <code>s = P<sub>1</sub> + P<sub>2</sub> + ... + P<sub>k</sub></code>, where <code>P<sub>i</sub></code> are primitive valid parentheses strings.</p>

<p>Return <code>s</code> <em>after removing the outermost parentheses of every primitive string in the primitive decomposition of </em><code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string removeOuterParentheses(string s) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Sum of Root To Leaf Binary Numbers

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers

## Content

<p>You are given the <code>root</code> of a binary tree where each node has a value <code>0</code> or <code>1</code>. Each root-to-leaf path represents a binary number starting with the most significant bit.</p>

<ul>
	<li>For example, if the path is <code>0 -&gt; 1 -&gt; 1 -&gt; 0 -&gt; 1</code>, then this could represent <code>01101</code> in binary, which is <code>13</code>.</li>
</ul>

<p>For all leaves in the tree, consider the numbers represented by the path from the root to that leaf. Return <em>the sum of these numbers</em>.</p>

<p>The test cases are generated so that the answer fits in a <strong>32-bits</strong> integer.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Divisor Game

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/divisor-game

## Content

<p>Alice and Bob take turns playing a game, with Alice starting first.</p>

<p>Initially, there is a number <code>n</code> on the chalkboard. On each player&#39;s turn, that player makes a move consisting of:</p>

<ul>
	<li>Choosing any <code>x</code> with <code>0 &lt; x &lt; n</code> and <code>n % x == 0</code>.</li>
	<li>Replacing the number <code>n</code> on the chalkboard with <code>n - x</code>.</li>
</ul>

<p>Also, if a player cannot make a move, they lose the game.</p>

<p>Return <code>true</code> <em>if and only if Alice wins the game, assuming both players play optimally</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool divisorGame(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Confusing Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/confusing-number

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Index Pairs of a String

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/index-pairs-of-a-string

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Duplicate Zeros

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/duplicate-zeros

## Content

<p>Given a fixed-length integer array <code>arr</code>, duplicate each occurrence of zero, shifting the remaining elements to the right.</p>

<p><strong>Note</strong> that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Armstrong Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/armstrong-number

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# N-th Tribonacci Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/n-th-tribonacci-number

## Content

<p>The Tribonacci sequence T<sub>n</sub> is defined as follows:&nbsp;</p>

<p>T<sub>0</sub> = 0, T<sub>1</sub> = 1, T<sub>2</sub> = 1, and T<sub>n+3</sub> = T<sub>n</sub> + T<sub>n+1</sub> + T<sub>n+2</sub> for n &gt;= 0.</p>

<p>Given <code>n</code>, return the value of T<sub>n</sub>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int tribonacci(int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Check If a Number Is Majority Element in a Sorted Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Diet Plan Performance

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/diet-plan-performance

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Unique Number of Occurrences

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/unique-number-of-occurrences

## Content

<p>Given an array of integers <code>arr</code>, return <code>true</code> <em>if the number of occurrences of each value in the array is <strong>unique</strong> or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Convert Binary Number in a Linked List to Integer

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer

## Content

<p>Given <code>head</code> which is a reference node to a singly-linked list. The value of each node in the linked list is either <code>0</code> or <code>1</code>. The linked list holds the binary representation of a number.</p>

<p>Return the <em>decimal value</em> of the number in the linked list.</p>

<p>The <strong>most significant bit</strong> is at the head of the linked list.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Count Negative Numbers in a Sorted Matrix

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix

## Content

<p>Given a <code>m x n</code> matrix <code>grid</code> which is sorted in non-increasing order both row-wise and column-wise, return <em>the number of <strong>negative</strong> numbers in</em> <code>grid</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find a Corresponding Node of a Binary Tree in a Clone of That Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree

## Content

<p>Given two binary trees <code>original</code> and <code>cloned</code> and given a reference to a node <code>target</code> in the original tree.</p>

<p>The <code>cloned</code> tree is a <strong>copy of</strong> the <code>original</code> tree.</p>

<p>Return <em>a reference to the same node</em> in the <code>cloned</code> tree.</p>

<p><strong>Note</strong> that you are <strong>not allowed</strong> to change any of the two trees or the <code>target</code> node and the answer <strong>must be</strong> a reference to a node in the <code>cloned</code> tree.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Counting Elements

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/counting-elements

## Content

None

## C++ Code

```cpp

```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Kids With the Greatest Number of Candies

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

## Content

<p>There are <code>n</code> kids with candies. You are given an integer array <code>candies</code>, where each <code>candies[i]</code> represents the number of candies the <code>i<sup>th</sup></code> kid has, and an integer <code>extraCandies</code>, denoting the number of extra candies that you have.</p>

<p>Return <em>a boolean array </em><code>result</code><em> of length </em><code>n</code><em>, where </em><code>result[i]</code><em> is </em><code>true</code><em> if, after giving the </em><code>i<sup>th</sup></code><em> kid all the </em><code>extraCandies</code><em>, they will have the <strong>greatest</strong> number of candies among all the kids</em><em>, or </em><code>false</code><em> otherwise</em>.</p>

<p>Note that <strong>multiple</strong> kids can have the <strong>greatest</strong> number of candies.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Final Prices With a Special Discount in a Shop

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop

## Content

<p>You are given an integer array <code>prices</code> where <code>prices[i]</code> is the price of the <code>i<sup>th</sup></code> item in a shop.</p>

<p>There is a special discount for items in the shop. If you buy the <code>i<sup>th</sup></code> item, then you will receive a discount equivalent to <code>prices[j]</code> where <code>j</code> is the minimum index such that <code>j &gt; i</code> and <code>prices[j] &lt;= prices[i]</code>. Otherwise, you will not receive any discount at all.</p>

<p>Return an integer array <code>answer</code> where <code>answer[i]</code> is the final price you will pay for the <code>i<sup>th</sup></code> item of the shop, considering the special discount.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Running Sum of 1d Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/running-sum-of-1d-array

## Content

<p>Given an array <code>nums</code>. We define a running sum of an array as&nbsp;<code>runningSum[i] = sum(nums[0]&hellip;nums[i])</code>.</p>

<p>Return the running sum of <code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Can Make Arithmetic Progression From Sequence

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence

## Content

<p>A sequence of numbers is called an <strong>arithmetic progression</strong> if the difference between any two consecutive elements is the same.</p>

<p>Given an array of numbers <code>arr</code>, return <code>true</code> <em>if the array can be rearranged to form an <strong>arithmetic progression</strong>. Otherwise, return</em> <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Kth Missing Positive Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/kth-missing-positive-number

## Content

<p>Given an array <code>arr</code> of positive integers sorted in a <strong>strictly increasing order</strong>, and an integer <code>k</code>.</p>

<p>Return <em>the</em> <code>k<sup>th</sup></code> <em><strong>positive</strong> integer that is <strong>missing</strong> from this array.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Design Parking System

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/design-parking-system

## Content

<p>Design a parking system for a parking lot. The parking lot has three kinds of parking spaces: big, medium, and small, with a fixed number of slots for each size.</p>

<p>Implement the <code>ParkingSystem</code> class:</p>

<ul>
	<li><code>ParkingSystem(int big, int medium, int small)</code> Initializes object of the <code>ParkingSystem</code> class. The number of slots for each parking space are given as part of the constructor.</li>
	<li><code>bool addCar(int carType)</code> Checks whether there is a parking space of <code>carType</code> for the car that wants to get into the parking lot. <code>carType</code> can be of three kinds: big, medium, or small, which are represented by <code>1</code>, <code>2</code>, and <code>3</code> respectively. <strong>A car can only park in a parking space of its </strong><code>carType</code>. If there is no space available, return <code>false</code>, else park the car in that size space and return <code>true</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        
    }
    
    bool addCar(int carType) {
        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Richest Customer Wealth

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/richest-customer-wealth

## Content

<p>You are given an <code>m x n</code> integer grid <code>accounts</code> where <code>accounts[i][j]</code> is the amount of money the <code>i​​​​​<sup>​​​​​​th</sup>​​​​</code> customer has in the <code>j​​​​​<sup>​​​​​​th</sup></code>​​​​ bank. Return<em> the <strong>wealth</strong> that the richest customer has.</em></p>

<p>A customer&#39;s <strong>wealth</strong> is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum <strong>wealth</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Count the Number of Consistent Strings

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/count-the-number-of-consistent-strings

## Content

<p>You are given a string <code>allowed</code> consisting of <strong>distinct</strong> characters and an array of strings <code>words</code>. A string is <strong>consistent </strong>if all characters in the string appear in the string <code>allowed</code>.</p>

<p>Return<em> the number of <strong>consistent</strong> strings in the array </em><code>words</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find the Highest Altitude

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-the-highest-altitude

## Content

<p>There is a biker going on a road trip. The road trip consists of <code>n + 1</code> points at different altitudes. The biker starts his trip on point <code>0</code> with altitude equal <code>0</code>.</p>

<p>You are given an integer array <code>gain</code> of length <code>n</code> where <code>gain[i]</code> is the <strong>net gain in altitude</strong> between points <code>i</code>​​​​​​ and <code>i + 1</code> for all (<code>0 &lt;= i &lt; n)</code>. Return <em>the <strong>highest altitude</strong> of a point.</em></p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Sum of Unique Elements

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/sum-of-unique-elements

## Content

<p>You are given an integer array <code>nums</code>. The unique elements of an array are the elements that appear <strong>exactly once</strong> in the array.</p>

<p>Return <em>the <strong>sum</strong> of all the unique elements of </em><code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Merge Strings Alternately

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/merge-strings-alternately

## Content

<p>You are given two strings <code>word1</code> and <code>word2</code>. Merge the strings by adding letters in alternating order, starting with <code>word1</code>. If a string is longer than the other, append the additional letters onto the end of the merged string.</p>



<p>Return <em>the merged string.</em></p>



<p>&nbsp;</p>

<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Sign of the Product of an Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/sign-of-the-product-of-an-array

## Content

<p>Implement a function <code>signFunc(x)</code> that returns:</p>

<ul>
	<li><code>1</code> if <code>x</code> is positive.</li>
	<li><code>-1</code> if <code>x</code> is negative.</li>
	<li><code>0</code> if <code>x</code> is equal to <code>0</code>.</li>
</ul>

<p>You are given an integer array <code>nums</code>. Let <code>product</code> be the product of all values in the array <code>nums</code>.</p>

<p>Return <code>signFunc(product)</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int arraySign(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Sum of Digits of String After Convert

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/sum-of-digits-of-string-after-convert

## Content

<p>You are given a string <code>s</code> consisting of lowercase English letters, and an integer <code>k</code>. Your task is to <em>convert</em> the string into an integer by a special process, and then <em>transform</em> it by summing its digits repeatedly <code>k</code> times. More specifically, perform the following steps:</p>

<ol>
	<li><strong>Convert</strong> <code>s</code> into an integer by replacing each letter with its position in the alphabet (i.e.&nbsp;replace <code>&#39;a&#39;</code> with <code>1</code>, <code>&#39;b&#39;</code> with <code>2</code>, ..., <code>&#39;z&#39;</code> with <code>26</code>).</li>
	<li><strong>T</strong><strong>ransform</strong> the integer by replacing it with the <strong>sum of its digits</strong>.</li>
	<li>Repeat the <strong>transform</strong> operation (step 2) <code>k</code><strong> times</strong> in total.</li>
</ol>

<p>For example, if <code>s = &quot;zbax&quot;</code> and <code>k = 2</code>, then the resulting integer would be <code>8</code> by the following operations:</p>

<ol>
	<li><strong>Convert</strong>: <code>&quot;zbax&quot; ➝ &quot;(26)(2)(1)(24)&quot; ➝ &quot;262124&quot; ➝ 262124</code></li>
	<li><strong>Transform #1</strong>: <code>262124 ➝ 2 + 6 + 2 + 1 + 2 + 4 ➝ 17</code></li>
	<li><strong>Transform #2</strong>: <code>17 ➝ 1 + 7 ➝ 8</code></li>
</ol>

<p>Return the <strong>resulting</strong> <strong>integer</strong> after performing the <strong>operations</strong> described above.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int getLucky(string s, int k) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Convert 1D Array Into 2D Array

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/convert-1d-array-into-2d-array

## Content

<p>You are given a <strong>0-indexed</strong> 1-dimensional (1D) integer array <code>original</code>, and two integers, <code>m</code> and <code>n</code>. You are tasked with creating a 2-dimensional (2D) array with <code> m</code> rows and <code>n</code> columns using <strong>all</strong> the elements from <code>original</code>.</p>

<p>The elements from indices <code>0</code> to <code>n - 1</code> (<strong>inclusive</strong>) of <code>original</code> should form the first row of the constructed 2D array, the elements from indices <code>n</code> to <code>2 * n - 1</code> (<strong>inclusive</strong>) should form the second row of the constructed 2D array, and so on.</p>

<p>Return <em>an </em><code>m x n</code><em> 2D array constructed according to the above procedure, or an empty 2D array if it is impossible</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Count Elements With Strictly Smaller and Greater Elements 

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements

## Content

<p>Given an integer array <code>nums</code>, return <em>the number of elements that have <strong>both</strong> a strictly smaller and a strictly greater element appear in </em><code>nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int countElements(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find the Difference of Two Arrays

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-the-difference-of-two-arrays

## Content

<p>Given two <strong>0-indexed</strong> integer arrays <code>nums1</code> and <code>nums2</code>, return <em>a list</em> <code>answer</code> <em>of size</em> <code>2</code> <em>where:</em></p>

<ul>
	<li><code>answer[0]</code> <em>is a list of all <strong>distinct</strong> integers in</em> <code>nums1</code> <em>which are <strong>not</strong> present in</em> <code>nums2</code><em>.</em></li>
	<li><code>answer[1]</code> <em>is a list of all <strong>distinct</strong> integers in</em> <code>nums2</code> <em>which are <strong>not</strong> present in</em> <code>nums1</code>.</li>
</ul>

<p><strong>Note</strong> that the integers in the lists may be returned in <strong>any</strong> order.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Minimum Bit Flips to Convert Number

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/minimum-bit-flips-to-convert-number

## Content

<p>A <strong>bit flip</strong> of a number <code>x</code> is choosing a bit in the binary representation of <code>x</code> and <strong>flipping</strong> it from either <code>0</code> to <code>1</code> or <code>1</code> to <code>0</code>.</p>

<ul>
	<li>For example, for <code>x = 7</code>, the binary representation is <code>111</code> and we may choose any bit (including any leading zeros not shown) and flip it. We can flip the first bit from the right to get <code>110</code>, flip the second bit from the right to get <code>101</code>, flip the fifth bit from the right (a leading zero) to get <code>10111</code>, etc.</li>
</ul>

<p>Given two integers <code>start</code> and <code>goal</code>, return<em> the <strong>minimum</strong> number of <strong>bit flips</strong> to convert </em><code>start</code><em> to </em><code>goal</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int minBitFlips(int start, int goal) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find the Index of the First Occurrence in a String

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string

## Content

<p>Given two strings <code>needle</code> and <code>haystack</code>, return the index of the first occurrence of <code>needle</code> in <code>haystack</code>, or <code>-1</code> if <code>needle</code> is not part of <code>haystack</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    int strStr(string haystack, string needle) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Evaluate Boolean Binary Tree

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/evaluate-boolean-binary-tree

## Content

<p>You are given the <code>root</code> of a <strong>full binary tree</strong> with the following properties:</p>

<ul>
	<li><strong>Leaf nodes</strong> have either the value <code>0</code> or <code>1</code>, where <code>0</code> represents <code>False</code> and <code>1</code> represents <code>True</code>.</li>
	<li><strong>Non-leaf nodes</strong> have either the value <code>2</code> or <code>3</code>, where <code>2</code> represents the boolean <code>OR</code> and <code>3</code> represents the boolean <code>AND</code>.</li>
</ul>

<p>The <strong>evaluation</strong> of a node is as follows:</p>

<ul>
	<li>If the node is a leaf node, the evaluation is the <strong>value</strong> of the node, i.e. <code>True</code> or <code>False</code>.</li>
	<li>Otherwise, <strong>evaluate</strong> the node&#39;s two children and <strong>apply</strong> the boolean operation of its value with the children&#39;s evaluations.</li>
</ul>

<p>Return<em> the boolean result of <strong>evaluating</strong> the </em><code>root</code><em> node.</em></p>

<p>A <strong>full binary tree</strong> is a binary tree where each node has either <code>0</code> or <code>2</code> children.</p>

<p>A <strong>leaf node</strong> is a node that has zero children.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


----

# Largest Local Values in a Matrix

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/largest-local-values-in-a-matrix

## Content

<p>You are given an <code>n x n</code> integer matrix <code>grid</code>.</p>

<p>Generate an integer matrix <code>maxLocal</code> of size <code>(n - 2) x (n - 2)</code> such that:</p>

<ul>
	<li><code>maxLocal[i][j]</code> is equal to the <strong>largest</strong> value of the <code>3 x 3</code> matrix in <code>grid</code> centered around row <code>i + 1</code> and column <code>j + 1</code>.</li>
</ul>

<p>In other words, we want to find the largest value in every contiguous <code>3 x 3</code> matrix in <code>grid</code>.</p>

<p>Return <em>the generated matrix</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Special Array I

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/special-array-i

## Content

<p>An array is considered <strong>special</strong> if every pair of its adjacent elements contains two numbers with different parity.<!-- notionvc: e6bed0fa-c67d-43a7-81b4-99fb85b99e98 --></p>

<p>You are given an array of integers <code>nums</code>. Return <code>true</code> if <code>nums</code> is a <strong>special</strong> array, otherwise, return <code>false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```
----

# Find the Winning Player in Coin Game

**Difficulty:** Easy

**Link:** https://leetcode.com/problems/find-the-winning-player-in-coin-game

## Content

<p>You are given two <strong>positive</strong> integers <code>x</code> and <code>y</code>, denoting the number of coins with values 75 and 10 <em>respectively</em>.</p>

<p>Alice and Bob are playing a game. Each turn, starting with <strong>Alice</strong>, the player must pick up coins with a <strong>total</strong> value 115. If the player is unable to do so, they <strong>lose</strong> the game.</p>

<p>Return the <em>name</em> of the player who wins the game if both players play <strong>optimally</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">

## C++ Code

```cpp
class Solution {
public:
    string losingPlayer(int x, int y) {
        
    }
};
```
## Notes

<!--
Add your notes here.

-->
## Other Solutions

```cpp
// Add another solution here
```


