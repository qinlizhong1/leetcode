//
// Created by 覃立中 on 2021/2/18.
//

/*
*把只包含质因子2、3和5的数称作丑数（Ugly Number）。例如6、8都是丑数，但14不是，因为它包含质因子7。
 * 习惯上我们把1当做是第一个丑数。求按从小到大的顺序的第N个丑数。
*/

class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        int p2 = 0;
        int p3 = 0;
        int p5 = 0;

        int arr[index];
        arr[0] = 1;

        if (0 == index)
        {
            return 0;
        }

        for(int i=1; i<index; i++)
        {
            arr[i] = min(min(arr[p2] * 2, arr[p3] * 3), arr[p5] * 5);

            while (arr[i] == arr[p2] * 2)
            {
                p2++;
            }

            while (arr[i] == arr[p3] * 3)
            {
                p3++;
            }

            while (arr[i] == arr[p5] * 5)
            {
                p5++;
            }
        }

        return arr[index - 1];
    }
};