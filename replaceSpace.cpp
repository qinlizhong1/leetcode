//
// Created by 覃立中 on 2021/2/18.
//

/*
*请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串
* 为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
*/

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param s string字符串
     * @return string字符串
     */
    string replaceSpace(string s) {
        // write code here
        string res = "";
        size_t size = s.size();


        for (size_t i = 0; i<size; i++)
        {
            if (s[i] == ' ')
            {
                res += "%20";
            }else
            {
                res += s[i];
            }
        }

        return res;
    }
};