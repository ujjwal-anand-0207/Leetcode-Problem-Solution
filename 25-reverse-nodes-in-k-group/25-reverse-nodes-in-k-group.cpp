class Solution {
public:
	ListNode* reverseKGroup(ListNode* head, int k) {
    
    //base case
    if(head == NULL )return head;
    
    //counter
    int i = 0;
    
    //two pointer method for reversing simple linked list
    ListNode* pre = NULL;
    ListNode* cur = head;
    
    //loop for checking if the group of k is avaliable for revering or not
    while(i<k && cur!=NULL){
        cur = cur->next;
        i++;
    }
    
    //re-assining head to cur for further use
    cur = head;
    
    //condition for the avaliability of the k group or not
    if(i>k-1){
        i = 0;
        while(i < k && cur !=NULL )
        {
        ListNode* dummyNode = cur -> next;
        cur -> next = pre;
        pre = cur;
        cur = dummyNode;
        i++;
        }
    }
    //otherwise return the head as it is untouched
    else{
        return head;
    }
    
    //recursion call saved in head->next because head is now NULL
    head->next = reverseKGroup(cur, k);
   
    //returning pre as of we get this node as head of linked list after two pointer method reversing
    return pre;
}
};