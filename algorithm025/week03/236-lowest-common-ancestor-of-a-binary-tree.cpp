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
    unordered_map<int, TreeNode*> pa;
    unordered_map<int, bool> vis;
    void dfs(TreeNode* rt) {
        if(rt->left != NULL) {
            pa[rt->left->val] = rt;
            dfs(rt->left);
        }
        if(rt->right != NULL) {
            pa[rt->right->val] = rt;
            dfs(rt->right);
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        pa[root->val] = NULL;
        dfs(root);
        while(p != NULL) {
            vis[p->val] = true;
            p = pa[p->val];
        }
        while(q != NULL) {
            if(vis[q->val]) return q;
            q = pa[q->val];
        }
        return nullptr;
    }
};
