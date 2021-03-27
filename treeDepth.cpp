//
// Created by 覃立中 on 2021/2/18.
//

/*
*输入一棵二叉树，求该树的深度。从根结点到叶结点依次经过的结点（含根、叶结点）形成树的一条路径，最长路径的长度为树的深度。
*/


class Solution {
public:
    int TreeDepth(TreeNode* pRoot) {
        if (!pRoot)
        {
            return 0;
        }

        return max(TreeDepth(pRoot -> left), TreeDepth(pRoot -> right)) + 1;
    }
};