//
// Created by 覃立中 on 2021/2/18.
//

/*
*存在一个按升序排列的链表，给你这个链表的头节点 head ，请你删除所有重复的元素，使每个元素 只出现一次 。
*输入：head = [1,1,2,3,3]
*输出：[1,2,3]
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (NULL == head || NULL == head->next)
        {
            return head;
        }

        ListNode *tmp = head;

        while (tmp && tmp -> next)
        {
            if (tmp -> val == tmp -> next -> val)
            {
                tmp -> next = tmp -> next -> next;
            }else
            {
                tmp = tmp -> next;
            }
        }

        return head;
    }
};