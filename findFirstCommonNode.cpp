//
// Created by 覃立中 on 2021/2/18.
//

/*
*输入两个链表，找出它们的第一个公共结点。
*/

class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if (NULL == pHead1 || NULL == pHead2){
            return NULL;
        }

        int len1 = 0;
        int len2 = 0;
        int lenDiff = 0;
        ListNode* longPHead = NULL;
        ListNode* shortPHead = NULL;

        ListNode *pTmp1 = pHead1;
        ListNode *pTmp2 = pHead2;

        while (pTmp1){
            len1++;
            pTmp1 = pTmp1->next;
        }

        while (pTmp2){
            len2++;
            pTmp2 = pTmp2->next;
        }

        if (len1 > len2){
            lenDiff = len1 - len2;
            longPHead = pHead1;
            shortPHead = pHead2;
        }else
        {
            lenDiff = len2 - len1;
            longPHead = pHead2;
            shortPHead = pHead1;
        }

        for (int i=0; i<lenDiff; i++){
            longPHead = longPHead -> next;
        }

        while (longPHead && (longPHead != shortPHead)){
            longPHead = longPHead->next;
            shortPHead = shortPHead -> next;
        }

        return longPHead;

    }
};