//
// Created by 覃立中 on 2021/2/18.
//

/*
*请实现一个函数按照之字形打印二叉树，即第一行按照从左到右的顺序打印，第二层按照从右至左的顺序打印，第三行按照从左到右的顺序打印，其他行以此类推。
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
            if (res.size() % 2 == 1)
            {
                reverse(v.begin(), v.end());
            }
            res.push_back(v);
        }

        return res;
    }

};