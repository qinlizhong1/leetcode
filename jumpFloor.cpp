//
// Created by 覃立中 on 2021/2/18.
//

/*
*一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法
*（先后次序不同算不同的结果）。
*/

class Solution {
public:
    int jumpFloor(int number) {
        int res = 0;
        int first = 1;
        int second = 2;
        if (1==number || 2 == number){
            return number;
        }

        for (int i=3; i<=number; i++){
            res = first + second;
            first = second;
            second = res;
        }

        return res;
    }
};