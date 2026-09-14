int removeDuplicates(int* nums, int numsSize) {
    if (numsSize <= 2) {
        return numsSize;
    }

    int k = 2; // nums[0] and nums[1] are always kept

    for (int i = 2; i < numsSize; i++) {
        // Since array is sorted, nums[i] is valid as long as
        // it differs from the element 2 positions back
        if (nums[i] != nums[k - 2]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}