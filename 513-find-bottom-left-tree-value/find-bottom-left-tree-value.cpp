/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        vector<int> ans;
        if (root == NULL)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int sz = q.size();
            for (int i = 0; i < sz; i++) {
                TreeNode* t = q.front();
                q.pop();
                if (i == 0) {
                    ans.push_back(t->val);
                }
                if (t->left)
                    q.push(t->left);
                if (t->right)
                    q.push(t->right);
            }
        }
        int siz=ans.size();
        return ans[siz-1];
    }
};