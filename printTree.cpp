//
// Created by 覃立中 on 2021/2/18.
//

/*
*从上到下按层打印二叉树，同一层结点从左至右输出。每一层输出一行。
*/

class Solution {
public:
    vector<vector<int> > Print(TreeNode* pRoot) {
        vector<vector<int> > res;

        if (NULL == pRoot)
        {
            return res;
        }
        vector<int> v;
        TreeNode* tmp = NULL;
        size_t size = 0;
        queue<TreeNode* > q;
        q.push(pRoot);

        while (!q.empty())
        {
            v.clear();
            size = q.size();

            for (size_t i=0; i<size; i++)
            {
                tmp = q.front();
                q.pop();
                v.push_back(tmp->val);

                if (tmp -> left)
                {
                    q.push(tmp -> left);
                }

                if (tmp -> right)
                {
                    q.push(tmp -> right);
                }
            }

            res.push_back(v);
        }

        return res;
    }

};