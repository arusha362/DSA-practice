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
        vector<int> ans;
        if (root == NULL){
		    return ans;
        }
	    stack<TreeNode*> s;
	    s.push(root);
        
	    while (s.empty() == false) {
		    struct TreeNode* node = s.top();
		    ans.push_back(node->val);
		    s.pop();

		    if (node->right)
			    s.push(node->right);
		    if(node->left)
			    s.push(node->left);
	    }
        return ans;
    }
};
