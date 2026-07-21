// Last updated: 7/21/2026, 4:35:37 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
int mini = prices[0];
int profit =0;

for(int i=0; i<prices.size(); i++){
    if(prices[i] < mini){
        mini = prices[i];
    }
    int  currentprofit = prices[i] - mini;
    profit = max(profit , currentprofit);

}
 if(profit == 0){
        return 0;
    }

    return profit;
    }
};

