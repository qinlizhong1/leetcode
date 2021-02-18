//
// Created by 覃立中 on 2021/2/18.
//

/*
*统计一个数字在升序数组中出现的次数。
*/

class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        int res = 0;

        size_t len = data.size();
        int left = 0;
        int  mid = 0;
        int right = len - 1;
        int l = 0;
        int r = 0;
        bool hasFlag = false;

        while (left <= right){
            mid = left + (right-left)/2;
            if (data[mid] < k){
                left = mid + 1;
            }else if(data[mid] > k){
                right = mid - 1;
            }else
            {
                hasFlag = true;
                if (mid == 0 || (data[mid] != data[mid-1])){
                    l = mid;
                    break;
                }
                right = mid - 1;
            }
        }

        if (!hasFlag){
            return 0;
        }

        left = 0;
        right = len - 1;

        while (left <= right){
            mid = left + (right-left)/2;
            if (data[mid] < k){
                left = mid + 1;
            }else if(data[mid] > k){
                right = mid - 1;
            }else
            {
                if (mid == len -1  || (data[mid] != data[mid+1])){
                    r = mid;
                    break;
                }
                left = mid + 1;
            }
        }

        res = r - l + 1;
        return res;
    }
};