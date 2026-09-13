/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
// jaswin is the god of shinobi broooooo; its two pointer left right ;
int *result =malloc(2*sizeof(int));
*returnSize = 2;   
int left=0;
int right=numbersSize-1;

while (left <right){
int temp=numbers[left]+numbers[right ];
if(target==temp){
    result[0]=left+1;
    result[1]=right+1;
    return  result ;

}
if(target<temp){right--;

}
if(target>temp){
    left++;

}
}
return result;

}









