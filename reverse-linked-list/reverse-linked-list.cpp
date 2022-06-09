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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
           return head;
        if(head->next->next==NULL)
        {
            ListNode *t;
            t=head->next;
            head->next->next=head;
            head->next=NULL;
            head=t;
            return head;
        }
        ListNode *p,*c,*n,*t;
        p=head;
        c=head->next;
        n=head->next->next;
         p->next=NULL;
        while(n!=NULL)
        {
            t=n->next;
            n->next=c;
            c->next=p;
            p=c;
            c=n;
            n=t;
        }
        return c;
    }
};