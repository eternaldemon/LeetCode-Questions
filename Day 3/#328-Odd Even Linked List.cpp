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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* result;
        ListNode* f = new ListNode(0);
        result = f;
        while(odd && odd->next){
                f->next = new ListNode(odd->val);
                f = f->next;
                odd = odd->next->next;
        }
        if(odd){
            f->next = new ListNode(odd->val);
            f = f->next;
        }

        while(even!=NULL && even->next!=NULL){
                f->next = new ListNode(even->val);
                f = f->next;
                even = even->next;
                even = even->next;
        }
        if(even){
            f->next = new ListNode(even->val);
            f = f->next;
        }
        return result->next;
    }
};
