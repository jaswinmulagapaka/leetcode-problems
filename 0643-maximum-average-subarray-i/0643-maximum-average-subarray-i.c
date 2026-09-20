double findMaxAverage(int* nums, int numsSize, int k) {
int left=0 ;
 int right =k-1;

 int sum=0;



 for (int i=0;i<=k-1;i++
 ){sum=sum+nums[i];

    
 }
 int max_sum =sum ;


while(right+1<numsSize){
sum =sum +nums[right+1]-nums[left];
if(sum >max_sum){
    max_sum=sum ;

}
   right++;
   left++;

}
double   avg= (double)max_sum/k;
return avg ;

}