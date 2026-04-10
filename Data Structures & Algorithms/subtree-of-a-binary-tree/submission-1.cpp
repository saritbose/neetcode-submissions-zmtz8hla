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
    bool isSame(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL || subRoot == NULL) return root == subRoot;

        bool isLeft = isSame(root->left,subRoot->left);
        bool isRight = isSame(root->right,subRoot->right);

        return isLeft && isRight && root->val == subRoot->val;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> q;
        q.push(root);

        while(q.size() > 0) {
            TreeNode* curr = q.front();
            q.pop();

            if(curr->val == subRoot->val) {
                if(isSame(curr,subRoot)) return true;
            }

            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        return false;
    }
};
