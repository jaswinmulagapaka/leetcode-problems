int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int maxarea = 0;

    while (left < right) {
        

        int current_height;
        if (height[left] > height[right]) {
            current_height = height[right];
        } else {
            current_height = height[left];
        }
  
        int width = right - left;
        int area = current_height * width;
   
        if (area > maxarea) {
            maxarea = area;
        }
    
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxarea;
}