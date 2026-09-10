/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
// jaswin is the god of shinobi ;
struct ListNode *a = headA;
struct ListNode *b = headB;
while (a!=NULL){
    if (b==NULL){
        b=headB;
        a=a->next;
    }
if (a==b)
{
    return  a;
}
b= b->next;
}
return NULL;
}