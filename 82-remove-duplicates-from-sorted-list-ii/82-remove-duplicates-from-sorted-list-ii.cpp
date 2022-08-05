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
        ListNode *temp=new ListNode(),*h=temp;
        if(head==NULL)
            return NULL;
        while(head!=NULL && head->next!=NULL)
        {
            if(head->val!=head->next->val)
            {
                ListNode *c=new ListNode();
                c->val=head->val;
                c->next=NULL;
                if(temp==NULL)
                {
                    temp=c;
                }
                else
                {
                    temp->next=c;
                    temp=c;
                }
                head=head->next;
            }
            else
            {
                int value=head->val;
                while(head!=NULL && head->val==value)
                    head=head->next;
            }
        }
        if(head!=NULL)
            temp->next=head;
        return h->next;
    }
};