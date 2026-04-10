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

        vector<int> res;
        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if(root == NULL) return ans;

        q.push(root);
        q.push(NULL);

        while(q.size() > 0) {
            TreeNode* curr = q.front();
            if(curr) res.push_back(curr->val);
            q.pop();

            if(curr == NULL) {
                ans.push_back(res);
                res.clear();
                if(!q.empty()) q.push(NULL);
                continue;
            }

            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }

        return ans;
    }
};
