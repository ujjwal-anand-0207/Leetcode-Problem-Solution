/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1=headA , *t2=headB;
        ListNode *ans=NULL;
        bool f=true;
        while(t1!=NULL && f)
        {
            t2=headB;
            while(t2!=NULL)
            {
                if(t1==t2)
                {
                    ans=t1;
                    f=false;
                    break;
                } 
                t2=t2->next;
            }
            
            t1=t1->next;
        }
        return ans;
    }
};