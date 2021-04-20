// Minimum Depth of Binary Tree

// Given a binary tree, find its minimum depth.
// The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
// Note: A leaf is a node with no children.

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
        if (root == nullptr)
	{
		return 0;
	}

	int level = 0;

	queue<TreeNode*> pending_nodes;
	pending_nodes.push(root);
	while (!pending_nodes.empty())
	{
		++level;
		int num_of_leve = pending_nodes.size();

		for (int i = 0; i < num_of_leve; i++)
		{
			TreeNode* node = pending_nodes.front();
			pending_nodes.pop();
			if (node->left == nullptr && node->right == nullptr)
			{
				return level;
			}

			if (node->left != nullptr)
			{
				pending_nodes.push(node->left);
			}

			if (node->right != nullptr)
			{
				pending_nodes.push(node->right);
			}
		}
	}

	return level;
    }
};