//
// Created by 覃立中 on 2021/2/18.
//

/*
*输入一个链表，反转链表
*/

class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if (NULL == pHead || NULL == pHead -> next)
        {
            return pHead;
        }

        ListNode * pre = NULL;
        ListNode * next = NULL;

        while (pHead )
        {
            next = pHead -> next;
            pHead -> next = pre;
            pre = pHead;
            pHead = next;
        }

        return pre;
    }
};