//
// Created by 覃立中 on 2021/2/18.
//

/*
*从上往下打印出二叉树的每个节点，同层节点从左至右打印。
*/

class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> res;

        if (!root)
        {
            return res;
        }

        queue<TreeNode *> q;
        TreeNode *tmp = NULL;
        q.push(root);

        while(!q.empty())
        {
            tmp = q.front();
            q.pop();
            res.push_back(tmp -> val);

            if (tmp -> left)
            {
                q.push(tmp -> left);
            }

            if (tmp -> right)
            {
                q.push(tmp -> right);
            }
        }

        return res;
    }
};