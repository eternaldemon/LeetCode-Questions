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
        
        if(head==NULL)
            return head;
    
        ListNode* temp = head;
        ListNode* f = new ListNode(0);
        ListNode* result = f;
        map<int,bool> m;
        map<int,bool>::iterator it;
        while(temp!=NULL){
            int value = temp->val;
            if(m.find(value)==m.end())
                m[value] = true; // If value doesn't exist then make it true
            else
                m[value] = false;//If value exists then make it false
            
            //cout<<m[value]<<endl;
            temp = temp->next;
        }
        for(it = m.begin();it!=m.end();++it){
         if(it->second == true){//Loop on map with true values and insert them into a new Linked List
             f->next = new ListNode(it->first);
             f= f->next;
         }   
        }
        return result->next;
    }
};
