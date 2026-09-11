/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    //  it aint easy guys (); btw  i am the god of shinobi ;
        // 30 mins in still dint get the  logic  :] ;
        // finally afer 1 hr broooooooo lets goooooo;
        if (head == NULL) {
        return NULL;
    }
    struct ListNode *a=head;
// (struct ListNode* d=head ;

    struct ListNode  *b= head->next;


while (b != NULL){
struct ListNode* c= b;
struct ListNode* d=b;
b= b->next;
c->next = a;
a=d;





}

head->next=NULL ;
return a ;



}