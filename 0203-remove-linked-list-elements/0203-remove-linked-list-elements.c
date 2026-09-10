/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
// jaswin is the god of shinobi;

    while (head != NULL && head->val == val) {
        head = head->next;
    }


    if (head == NULL) {
        return NULL;
    }

    struct ListNode* temp1 = head;
    struct ListNode* temp2 = head->next;

    while (temp2 != NULL) {
        if (temp2->val == val) {
      
            temp1->next = temp2->next;
        
            temp2 = temp1->next; 
        } else {
        
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    
    return head;
}