bool isPalindrome(struct ListNode* head) {
    // jaswin is the god of shinobi;
    if (head == NULL) {
        return true; 
    }


    int count = 0;
    struct ListNode* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }

    
    int arr[count];
    current = head; 
    int i = 0;
    while (current != NULL) {
        arr[i] = current->val;
        current = current->next;
        i++;
    }


    int left = 0;
    int right = count - 1;
    while (left < right) {
        if (arr[left] != arr[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}