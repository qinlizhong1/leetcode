//
// Created by 覃立中 on 2021/2/18.
//

/*
*输入一个链表，按链表从尾到头的顺序返回一个ArrayList。
*/

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;

        stack<ListNode*> s;
        ListNode* tmp = NULL;

        while(head){
            s.push(head);
            head = head->next;
        }

        while (!s.empty()){
            tmp = s.top();
            s.pop();
            res.push_back(tmp->val);
        }

        return res;
    }

};