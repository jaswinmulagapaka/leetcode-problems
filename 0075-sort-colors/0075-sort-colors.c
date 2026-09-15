void sortColors(int* nums, int numsSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    
    for (int k = 0; k < numsSize; k++) {
        printf("%d ", nums[k]);
    }
    printf("\n");
}