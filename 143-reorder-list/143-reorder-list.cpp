class Solution {
public:

	void reorderList(ListNode* head) {
		if(head==NULL||head->next==NULL)
			return;
		ListNode* slow=head;
		ListNode* fast=head;
		 ListNode* prev=head;
		while(fast!=NULL&&fast->next!=NULL){
			prev=slow;
			slow=slow->next;
			fast=fast->next->next;
		}
		prev->next=NULL;
		ListNode* l1=head;
		ListNode* l2=reverse(slow);
		merge(l1,l2);
	}
	   ListNode* reverse(ListNode* head){
		if(head==NULL)
			return NULL;
		ListNode *prev=NULL;
		ListNode* curr=head;
		ListNode* next;
		while(curr!=NULL){
			next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
		}
		return prev;
	}

	void merge(ListNode* L1,ListNode* L2){
		while(L2!=NULL){
			ListNode* next=L1->next;
			L1->next=L2;
			L1=L2;
			L2=next;
		}
	}
};