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
        ListNode* result;
        ListNode* f = new ListNode(0);
        result = f;
        ListNode* temp = head;
        set<int> s;
        set<int> :: iterator it;
        
        while(temp!=NULL){
            s.insert(temp->val);
            temp = temp->next;
        }
        
        for(it=s.begin();it!=s.end();it++){
            f->next = new ListNode(*it);
            f = f->next;
        }
        return result->next;
    }
};
