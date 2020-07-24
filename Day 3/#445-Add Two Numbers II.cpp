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
        stack<int> s1,s2,s3;
        ListNode * result;
        ListNode * temp = new ListNode(0);
        result = temp;
        
        while(l1){
            s1.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            s2.push(l2->val);
            l2 = l2->next;
        }
        
        int sum,flag=0;
        while(!s1.empty() || !s2.empty() || flag){
            int x=0,y=0;
            if(!s1.empty()){
                x = s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                y = s2.top();
                s2.pop();
            }
            sum = x + y + flag;
            if(sum>9){
                sum = sum%10;
                flag=1;
            }
            else
                flag = 0;
            s3.push(sum);
        }
        

        while(!s3.empty()){
            temp->next = new ListNode(s3.top());
            s3.pop();
            temp = temp->next;
        }
        
        return result->next;
    }
};
