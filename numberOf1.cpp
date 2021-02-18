//
// Created by 覃立中 on 2021/2/18.
//

/*
*输入一个整数，输出该数32位二进制表示中1的个数。其中负数用补码表示。
*/

class Solution {
public:
    int  NumberOf1(int n) {
        int res = 0;
        while(n){
            res++;
            n = n &(n-1);
        }

        return res;
    }
};