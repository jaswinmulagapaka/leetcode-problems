/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    int count = 0;
    while (head != NULL) {
        if (count > 10000) {
            return true;
        }
        head = head->next;
        count++;
    }
    return false;
}