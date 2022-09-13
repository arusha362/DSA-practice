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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;
        if(head==NULL) return NULL;
        while(temp->next!=NULL){
            if(temp->next->val==val){
                ListNode* toRemove=temp->next;
                temp->next=temp->next->next;
                delete toRemove;
            }
            else{
                temp=temp->next;
            }
        }
        if(head->val==val){
            ListNode* toRemove=head;
            head=head->next;
            delete toRemove;
        }
        return head;
    }
};
