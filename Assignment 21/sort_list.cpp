/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* find_mid(ListNode* A){
    ListNode* slow = A;
    ListNode* fast = A->next;
    
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* merge(ListNode* left, ListNode* right){
    if(left==NULL)
        return right;
    if(right==NULL)
        return left;
        
    ListNode* res = new ListNode(0);
    ListNode* temp = res;
    
    while(left!=NULL && right!=NULL){
        if(left->val<right->val){
            temp->next=left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while(left!=NULL){
        temp->next=left;
        temp = left;
        left = left->next;
    }
    while(right!=NULL){
        temp->next = right;
        temp = right;
        right = right->next;
    }
    res = res->next;
    return res;
}

ListNode* Solution::sortList(ListNode* A) {
    if(A == NULL || A->next==NULL){
        return A;
    }
    ListNode* mid = find_mid(A);
    
    ListNode* left = A;
    ListNode* right = mid->next;
    mid->next = NULL;
    
    left = sortList(left);
    right = sortList(right);
    
    ListNode* ans = merge(left, right);
    
    return ans;
}
