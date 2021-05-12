//
// Created by 覃立中 on 2021/2/18.
//

/*
*在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
 请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
输入:7,[[1,2,8,9],[2,4,9,12],[4,7,10,13],[6,8,11,15]]
输出:true
 */

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        bool res = false;

        size_t size = array.size();

        if (size == 0)
        {
            return res;
        }

        int u = 0;
        int d = array.size() - 1;
        int l = 0;
        int r = array[0].size() - 1;

        while(d>=0&& l<=r)
        {
            if (array[d][l] == target)
            {
                return true;
            }else if (array[d][l] < target)
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