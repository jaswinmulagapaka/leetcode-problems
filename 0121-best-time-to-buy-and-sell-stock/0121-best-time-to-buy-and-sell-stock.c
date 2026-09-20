int maxProfit(int* prices, int pricesSize) {
// jaswin is the god of shinobi ;
int left=0;
int right =0;
int min = prices[left];
int max_profit =0;

while (right <pricesSize){
    if (prices[left]<prices[right]){
        int current_profit =prices[right]-prices[left];
        if (current_profit>max_profit){
            max_profit=current_profit ;

        }
    }
    else{left=right;
     }
 right ++;}



return max_profit;

}