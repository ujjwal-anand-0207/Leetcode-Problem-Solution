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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* result = new ListNode();
ListNode* curr = result;

bool carry = false;
while(l1 || l2 || carry)
{
	// Add and get number
	int v1 = l1 ? l1->val : 0;
	int v2 = l2 ? l2->val : 0;
	int num = v1 + v2 + (carry ? 1 : 0);

	// Get digit and carry
	curr->val = num % 10;
	carry = num > 9;

	// Increment
	l1 = l1 ? l1->next : nullptr;
	l2 = l2 ? l2->next : nullptr;

	if(l1 || l2 || carry)
	{
		// No leading zero
		curr->next = new ListNode();
		curr = curr->next;
	}
}

return result;
    }
};