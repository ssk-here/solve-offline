#include <Test.h>
/*
Name -:
Regd No -:
Date -:

Fill in the functions in the below Solution classes.
Edit the comments to fill in Time and Space complexity and give your comments
Do not change the name of the function or the class.
Including headers is optional.
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

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



/*
6.Find kth node from end of linked list. 
Return NULL if you are unable to find the node.
0 <= Length of the List <= 2^31 - 1.


Fill in the below-:
Time Complexity:
Space Complexity:
Comments:
*/
class Solution6 {
public:
    ListNode* findKthFromEnd(ListNode* head, int k) {

    }
};

///////////////////////////////////////////////////////////////////////////////////////////////


/*
7. Find the height of a balanced binary tree.
Height is the number of edges in the longest path from root to leaf node.
Empty tree has height -1 and tree with one node has height 0.
0 <= height <= 2^31 - 1.

Fill in the below-:
Time Complexity:
Space Complexity:
Comments:
*/
class Solution7 {
public:
    int height(TreeNode* root) {
    }
};


///////////////////////////////////////////////////////////////////////////////////////////////

/*
8. Given an integer K, find if there are 2 elements in the array that add up to K
(you cannot use the same index twice)
0 <= array size <= 2^31 - 1.
0 <= K <= 2^31 - 1.

Fill in the below-:
Time Complexity:
Space Complexity:
Comments:
*/
class Solution8 {
public:
    bool findSumK(vector<int> nums,int K){

    }
};

///////////////////////////////////////////////////////////////////////////////////////////////

/*
9.Describe How do you detect if you have a cycle in the linked-list?
0 <= Length of the List <= 2^31 - 1.


Fill in the below-:
Time Complexity:
Space Complexity:
Comments:
*/
class Solution9 {
public:
    bool hasCycle(ListNode* head) {

    }
};

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

//set this value as 1 or 2 , 1 for question1 and 2 for question2.
int chosenQuestion = 0;

/*
Question 1: Maximum amount of water a container can store (Read other details from question paper.)

Fill in the below-:
Time Complexity:
Space Complexity:
Test-Cases-:



Comments:
*/
class Solution1 {
public:
    int maxAmount(vector<int>& height) {
        return 0;
    }
};


/*
Question 2: Maximum number of vowel letters in any substring of s with length k.(Read details from question paper.)

Fill in the below-:
Time Complexity:
Space Complexity:
Test-Cases-:



Comments:
*/
class Solution2 {
public:
    int maxVowels(string s, int k) {
        return 0;
    }
};


////////////////////////// END /////////////////////////////////

ListNode* Solution6::findKthFromEnd(ListNode* head, int k) {
    ListNode* fast = head;
    ListNode* slow = head;
    for (int i = 0; i < k; ++i) {
        if (fast == nullptr) return nullptr;
        fast = fast->next;
    }
    while (fast != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

int Solution7::height(TreeNode* root) {
    if (root == nullptr) return -1;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;
}

bool Solution8::findSumK(vector<int> nums, int K) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(K - num)) return true;
        seen.insert(num);
    }
    return false;
}

bool Solution9::hasCycle(ListNode* head) {
    if (head == nullptr || head->next == nullptr) return false;
    ListNode* slow = head;
    ListNode* fast = head->next;
    while (slow != fast) {
        if (fast == nullptr || fast->next == nullptr) return false;
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}

int Solution1::maxAmount(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxWater = 0;
    while (left < right) {
        int h = min(height[left], height[right]);
        maxWater = max(maxWater, h * (right - left));
        if (height[left] < height[right]) {
            ++left;
        } else {
            --right;
        }
    }
    return maxWater;
}

int Solution2::maxVowels(string s, int k) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int maxCount = 0, currentCount = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (vowels.count(s[i])) ++currentCount;
        if (i >= k && vowels.count(s[i - k])) --currentCount;
        maxCount = max(maxCount, currentCount);
    }
    return maxCount;
}