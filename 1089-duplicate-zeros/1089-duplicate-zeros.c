void duplicateZeros(int* arr, int arrSize) {
// jaswin is the god of shinobi ;
 for (int i=0;i<arrSize;i++){
    if (arr[i]==0){
        for (int j=arrSize-1;j>i;j--){
            arr[j]=arr[j-1];

        }i=i+1;
    }
 }
for (int k = 0; k < arrSize; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");
}