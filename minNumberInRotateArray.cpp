//
// Created by 覃立中 on 2021/2/18.
//

/*
*输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
*给出的所有元素都大于0，若数组大小为0，请返回0。
*/

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        size_t size = rotateArray.size();
        size_t l = 0;
        size_t r = size - 1;
        size_t mid = 0;

        if (size == 0)
        {
            return 0;
        }

        while(l < r)
        {
            mid = l + (r - l) / 2;

            if (rotateArray[mid] > rotateArray[r])
            {
                l = mid + 1;
            }else if(rotateArray[mid] < rotateArray[r])
            {
                r = mid;
            } else
            {
                r--;
            }
        }

        return rotateArray[l];
    }
};