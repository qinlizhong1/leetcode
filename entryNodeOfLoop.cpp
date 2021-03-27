//
// Created by 覃立中 on 2021/2/18.
//

/*
*给一个链表，若其中包含环，请找出该链表的环的入口结点，否则，输出null。
*/

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead) {
        if (NULL == pHead || NULL == pHead -> next)
        {
            return NULL;
        }

        ListNode* pFast = pHead;
        ListNode* pSlow = pHead;
        ListNode* pMeetNode = NULL;
        ListNode* pTmp = pHead;

        while (pFast && pFast->next)
        {
            pFast = pFast -> next -> next;
            pSlow = pSlow -> next;

            if (pFast == pSlow)
            {
                pMeetNode = pSlow;
                break;
            }
        }

        while(pMeetNode && pTmp)
        {
            if (pMeetNode == pTmp)
            {
                return pMeetNode;
            }else
            {
                pMeetNode = pMeetNode -> next;
                pTmp = pTmp -> next;
            }
        }

        return NULL;
    }
};