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
        ListNode* result;
        ListNode* temp = new ListNode(0);
        result = temp;
        int flag=0,sum=0;
        while(l1 || l2 || flag){
            sum=(l1?l1->val:0) + (l2?l2->val:0) + flag;
            if(sum > 9){
               sum = sum %10;
                flag=1;
            }
            else
                flag=0;
            temp->next =new ListNode(sum);
            temp = temp->next;
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }
       return result->next; 
    }
};
