//
// Created by 覃立中 on 2021/2/18.
//

/*
*给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。
*/
class Solution {
public:
    double Power(double base, int exponent) {
        double res = 1.0;

        if (exponent < 0)
        {
            base = 1.0 / base;
            exponent = -exponent;
        }

        for (int i=0; i<exponent; i++)
        {
            res *= base;
        }

        return res;
    }
};