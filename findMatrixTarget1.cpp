//
// Created by 覃立中 on 2021/2/18.
//

/*
*已知int一个有序矩阵mat，同时给定矩阵的大小n和m以及需要查找的元素x，且矩阵的行和列都是从小到大有序的。
 设计查找算法返回所查找元素的二元数组，代表该元素的行号和列号(均从零开始)。保证元素互异。
输入:[[1,2,3],[4,5,6]],2,3,6
输出:[1,2]
 */

class Solution {
public:
    vector<int> findElement(vector<vector<int> > mat, int n, int m, int x) {
        // write code here
        vector<int> res;
        int u = 0;
        int d = n - 1;
        int l = 0;
        int r = m - 1;

        if (0 == n && 0 == m)
        {
            return res;
        }

        while (d>=0 && l<=r)
        {
            if (mat[d][l] == x)
            {
                res.push_back(d);
                res.push_back(l);
                break;
            }else if (mat[d][l] < x)
            {
                l++;
            }else
            {
                d--;
            }
        }

        return res;
    }
};