//
// Created by 覃立中 on 2021/2/18.
//

/*
*给定一个二叉树的根节点 root ，返回它的 中序 遍历。
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;

        if (NULL == root)
        {
            return res;
        }

        stack <TreeNode* > s;
        TreeNode* tmp = NULL;

        while(root || !s.empty())
        {
            if (root)
            {
                s.push(root);
                root = root -> left;
            }else
            {
                tmp = s.top();
                s.pop();
                res.push_back(tmp -> val);

                root = tmp -> right;
            }
        }

        return res;
    }
};