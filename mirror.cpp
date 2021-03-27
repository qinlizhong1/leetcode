//
// Created by 覃立中 on 2021/2/18.
//

/*
*操作给定的二叉树，将其变换为源二叉树的镜像。
*/

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param pRoot TreeNode类
     * @return TreeNode类
     */
    TreeNode* Mirror(TreeNode* pRoot) {
        // write code here
        if (NULL == pRoot)
        {
            return NULL;
        }

        TreeNode* tmp = pRoot -> left;
        pRoot -> left = Mirror(pRoot -> right);
        pRoot -> right = Mirror(tmp);

        return pRoot;
    }
};