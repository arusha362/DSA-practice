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
        if(head==NULL)return head;
        ListNode* temp=head;
        ListNode* nextnode=head->next;
        while(temp!=NULL && nextnode!=NULL){
            if(temp->val==nextnode->val){
                temp->next=nextnode->next;
                nextnode=temp->next;
            }
            else{
                temp=temp->next;
                nextnode=nextnode->next;
            }
        }
        return head;
    }
};
