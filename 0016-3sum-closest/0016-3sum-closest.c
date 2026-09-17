

void bubbleSort(int* nums, int n) {
   for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
        if (nums[j] > nums[j + 1]) {
            int temp = nums[j];
            nums[j] = nums[j + 1];
            nums[j + 1] = temp;
        }
    }
}
}

int threeSumClosest(int* nums, int numsSize, int target) {
    bubbleSort(nums, numsSize);

    int closest_sum = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < numsSize - 2; i++) {
        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {
            int current_sum = nums[i] + nums[left] + nums[right];

            if (abs(target - current_sum) < abs(target - closest_sum)) {
                closest_sum = current_sum;
            }

            if (current_sum < target) {
                left++;
            } else if (current_sum > target) {
                right--;
            } else {
                return target; 
            }
        }
    }

    return closest_sum;
}