//
// Created by 覃立中 on 2021/2/18.
//

/*
 * 题目描述：大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项
 * （从0开始，第0项为0，第1项是1）。n≤39
 */

class Solution {
public:
    int Fibonacci(int n) {
        int res = 0;
        int first = 0;
        int second = 1;

        if (0 == n || 1 == n){
            return n;
        }

        for (int i = 2; i<=n; i++){
            res = first + second;
            first = second;
            second = res;
        }

        return res;
    }
};