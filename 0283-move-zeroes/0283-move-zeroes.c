











void moveZeroes(int* nums, int numsSize) {
    int k = 0;

    // Move non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[k] = nums[i];
            k++;
        }
    }

    // Fill the rest with zeros
    for (int i = k; i < numsSize; i++) {
        nums[i] = 0;
    }




    // Print result
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
 
}
