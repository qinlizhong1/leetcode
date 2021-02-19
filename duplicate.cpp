//
// Created by 覃立中 on 2021/2/19.
//

/*
题目描述：
在一个长度为n的数组里的所有数字都在0到n-1的范围内。 数组中某些数字是重复的，但不知道有几个数字是重复的。
    也不知道每个数字重复几次。请找出数组中第一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2。

 返回描述：
如果数组中有重复的数字，函数返回true，否则返回false。
如果数组中有重复的数字，把重复的数字放到参数duplication[0]中。（ps:duplication已经初始化，可以直接赋值使用。）
*/

class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        bool res = false;
        int min = 0;
        int count = 0;
        map<int, int> m;

        for (int i=0; i<length; i++){
            if (m.find(numbers[i]) != m.end()){
                count++;
                res = true;
                if (count  == 1){
                    min = m[numbers[i]];
                }

                if (min > m[numbers[i]]){
                    min = m[numbers[i]];
                }
            }else {
                m[numbers[i]] = i;
            }
        }

        if (res){
            *duplication = numbers[min];
        }else{
            *duplication = -1;
        }

        return res;
    }
};