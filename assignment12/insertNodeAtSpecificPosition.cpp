/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    int count=0;
    SinglyLinkedListNode* nnode=new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp=llist;
    SinglyLinkedListNode* nextnode;
    while(temp!=NULL){
        if(count+1==position){
            nextnode=temp->next;
            temp->next=nnode;
            nnode->next=nextnode;
            //break;
        }
        temp=temp->next;
        count++;
    }
    return llist;
}
