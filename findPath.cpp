//
// Created by 覃立中 on 2021/2/18.
//

/*
*输入一颗二叉树的根节点和一个整数，按字典序打印出二叉树中结点值的和为输入整数的所有路径。
 路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。
*/

class Solution {
public:
    vector<vector<int> > res;
    vector<int> v;

    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if (root)
        {
            findSubPath(root, expectNumber);
        }

        return res;
    }

    void findSubPath(TreeNode* root,int expectNumber)
    {
        v.push_back(root -> val);

        if (root -> val == expectNumber && root -> left == NULL && root -> right == NULL )
        {
            res.push_back(v);
        }else
        {
            if (root -> left)
            {
                findSubPath(root -> left, expectNumber - root -> val);
            }

            if (root -> right)
            {
                findSubPath(root -> right, expectNumber - root -> val);
            }
        }

        v.pop_back();
    }
};
