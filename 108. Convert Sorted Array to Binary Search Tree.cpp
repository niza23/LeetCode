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
//recursively every element will be a middle ele we will create the Balanced BST

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums, int l, int r) {
        if(l > r) return NULL;
        
        int mid = l + (r - l) / 2;
        TreeNode *root = 
            new TreeNode(
                nums[mid],
                sortedArrayToBST(nums, l, mid - 1),
                sortedArrayToBST(nums, mid + 1, r)
        );
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
};