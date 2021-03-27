//
// Created by 覃立中 on 2021/2/18.
//

/*
*给你二叉树的根节点 root ，返回它节点值的 前序 遍历。
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;

        if (!root)
        {
            return res;
        }

        stack<TreeNode *> s;
        TreeNode * tmp = NULL;

        while (root || !s.empty())
        {
            if (root)
            {
                res.push_back(root -> val);
                s.push(root);
                root = root -> left;
            }else
            {
                tmp = s.top();
                s.pop();
                root = tmp -> right;
            }
        }

        return res;
    }
};