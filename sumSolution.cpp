//
// Created by 覃立中 on 2021/2/18.
//

/*
*求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
*/

class Solution {
public:
    int Sum_Solution(int n) {
        int sum = n;

        return sum ? sum += Sum_Solution(n - 1) : 0;
    }
};

class Solution2 {
public:
    int Sum_Solution(int n) {
        int sum = n;

        sum && (sum += Sum_Solution(n - 1));

        return sum;
    }
};