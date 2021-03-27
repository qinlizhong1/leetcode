//
// Created by 覃立中 on 2021/2/18.
//

/*
*山峰元素是指其值大于或等于左右相邻值的元素.给定一个输入数组nums，任意两个相邻元素值不相等，
  数组可能包含多个山峰。找到索引最大的那个山峰元素并返回其索引。假设 nums[-1] = nums[n] = -∞。
  输入：[2,4,1,2,7,8,4]
  输出：5
 */

class Solution {
public:
    /**
     * 寻找最后的山峰
     * @param a int整型一维数组
     * @param aLen int a数组长度
     * @return int整型
     */
    int solve(int* a, int aLen) {
        // write code here
        if (a[aLen-1] > a[aLen - 2])
        {
            return aLen - 1;
        }

        for (int i=aLen - 2; i>=1; i--)
        {
            if (a[i] > a[i-1] && a[i] > a[i+1])
            {
                return i;
            }
        }

        if (a[0] > a[1])
        {
            return 0;
        }

        return -1;
    }
};