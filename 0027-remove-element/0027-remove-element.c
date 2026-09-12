int removeElement(int* nums, int numsSize, int val) {
    // jaswin is the god of shinobi ;
    
    int k = 0; 
    
 
    for (int i = 0; i < numsSize - k; i++) {
        if (nums[i] == val) {
            
   
            for (int j = i; j < numsSize - k - 1; j++) {
                nums[j] = nums[j + 1];
            }
            
            k++; 
            i--; 
        }
    }
    
    return numsSize - k; 
}