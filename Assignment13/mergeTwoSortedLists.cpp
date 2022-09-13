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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        ListNode* temp1;
        ListNode* temp2;
        if(list1->val<=list2->val){
            temp1=list1;
            temp2=list1;
            list1=list1->next;
        }
        else{
            temp1=list2;
            temp2=list2;
            list2=list2->next;
        }
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                temp2->next=list1;
                temp2=temp2->next;
                list1=list1->next;
            }
            else{
                temp2->next=list2;
                temp2=temp2->next;
                list2=list2->next;
            }
        }
        if(list1==NULL)temp2->next=list2;
        else temp2->next=list1;
        return temp1;
    }
};
