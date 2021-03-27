//
// Created by 覃立中 on 2021/2/18.
//

/*
*输入一个整型数组，数组中的一个或连续多个整数组成一个子数组。求所有子数组的和的最大值。
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = 0;
        int max = INT_MIN;

        for (size_t i=0; i<nums.size(); i++)
        {
            cur += nums[i];

            if (cur > max)
            {
                max = cur;
            }

            if (cur < 0)
            {
                cur = 0;
            }
        }

        return max;
    }
};