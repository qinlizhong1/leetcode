//
// Created by 覃立中 on 2021/2/18.
//

/*
*以字符串的形式读入两个数字，编写一个函数计算它们的和，以字符串形式返回。
（字符串长度不大于100000，保证字符串仅由'0'~'9'这10种字符组成）
 输入："1","99"
 输出："100"
*/

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 计算两个数之和
     * @param s string字符串 表示第一个整数
     * @param t string字符串 表示第二个整数
     * @return string字符串
     */
    string solve(string s, string t) {
        // write code here
        if (0 == s.size())
        {
            return t;
        }

        if (0 == t.size())
        {
            return s;
        }
        string res = "";
        int sR = s.size() - 1;
        int tR = t.size() - 1;
        int carry = 0;
        int tmp = 0;
        while (sR>=0 || tR >= 0)
        {
            int n = sR >=0 ? s[sR] - '0' :  0;
            int m = tR >=0 ? t[tR] - '0' :  0;


            res += to_string((n + m + carry) % 10);
            carry = (n + m + carry) / 10;

            sR--;
            tR--;
        }

        if (carry)
        {
            res = res + "1";
        }

        reverse(res.begin(), res.end());

        return res;
    }
};

