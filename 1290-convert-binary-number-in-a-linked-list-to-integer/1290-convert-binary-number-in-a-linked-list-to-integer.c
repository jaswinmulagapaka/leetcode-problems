/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
int count =0;
int val=0;
struct ListNode* temp = head; 
    
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
int n= count ;
while (head!=0){
 val =  val + (head->val)*pow(2,n-1);
head = head->next;
n--;
}










return val;

}