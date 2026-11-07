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
    unordered_map<int,int> mp;
    int preIndex = 0;

    TreeNode* solve(vector<int>& preorder, int start, int end) {
        if(start > end) {
            return NULL;
        }

        // First element of preorder is the root
        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);

        // Find root position in inorder
        int pos = mp[rootVal];

        // Construct left subtree
        root->left = solve(preorder, start, pos - 1);

        // Construct right subtree
        root->right = solve(preorder, pos + 1, end);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        return solve(preorder, 0, inorder.size() - 1);
    }
};