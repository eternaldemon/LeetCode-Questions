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
    ListNode* sortList(ListNode* head) {
        if(head==NULL)
            return nullptr;
        vector<int> temp;
        ListNode* result;
        ListNode* f = new ListNode(0);
        result = f;
        while(head!=NULL){
            temp.push_back(head->val);
            head = head->next;
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            f->next = new ListNode(temp[i]);
            f= f->next;
        }        
        return result->next;
    }
};
