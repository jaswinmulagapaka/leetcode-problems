int minimumPairRemoval(int* nums, int numsSize) {
    int count = 0;

    // 1. Loop until the array is fully sorted
    while (1) {
        
        int isSorted = 1;
        for (int i = 0; i < numsSize - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                isSorted = 0;
                break; // Found an unsorted pair, break out of this check
            }
        }
        
        // If the whole array passed the check, we are done
        if (isSorted) {
            return count;
        }

        // 2. Scan the ENTIRE array first to find the absolute minimum pair sum
        int minSum = nums[0] + nums[1];
        int minIndex = 0;
        
        for (int i = 1; i < numsSize - 1; i++) {
            if (nums[i] + nums[i + 1] < minSum) {
                minSum = nums[i] + nums[i + 1];
                minIndex = i;
            }
        }

        // 3. ONLY replace and shift after the minimum is found
        nums[minIndex] = minSum; // Overwrite the left number with the sum
        
        for (int j = minIndex + 1; j < numsSize - 1; j++) {
            nums[j] = nums[j + 1]; // Shift everything left by one
        }

        numsSize--; // Decrease size ONCE per operation
        count++;
    }
    
    return count;
}
