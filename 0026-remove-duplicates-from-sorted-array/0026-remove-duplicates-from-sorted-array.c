int removeDuplicates(int* nums, int numsSize) {
if (numsSize==0){return 0;}
int k=0;
for(int i =0;i<=numsSize-2;i++){
if (nums[i]!=nums[i+1]){
    nums[k]=nums[i];
    k++;}

}nums[k]=nums[numsSize-1];


return k+1;
}