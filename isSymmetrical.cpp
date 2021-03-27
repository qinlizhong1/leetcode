//
// Created by 覃立中 on 2021/2/18.
//

/*
*请实现一个函数，用来判断一棵二叉树是不是对称的。注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。
*/
/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot) {
        if (NULL == pRoot)
        {
            return true;
        }

        return isSubSymmetrical(pRoot -> left, pRoot -> right);
    }

    bool isSubSymmetrical(TreeNode* l, TreeNode* r)
    {
        if (NULL == l && NULL == r)
        {
            return true;
        }

        if ((NULL == l && NULL != r) || (NULL != l && NULL == r))
        {
            return false;
        }

        if (l -> val != r ->val)
        {
            return false;
        }

        return isSubSymmetrical(l->left, r->right) && isSubSymmetrical(l->right, r->left);
    }

};