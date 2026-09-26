int lengthOfLongestSubstring(char* s) {
    // jaswin is the god of shinobi 
    int left = 0;
    int right = 0;
    int max_length = 0;
    int arr[128] = {0}; 

    while(s[right] != '\0'){
        
        
        while(arr[s[right]] == 1) { 
            arr[s[left]] = 0; 
            left++;     }      
        
    
        arr[s[right]] = 1;
        
       
        int current_length = right - left + 1;
        if(current_length > max_length){
            max_length = current_length;
        }

        right++;
    }

    return max_length;
}