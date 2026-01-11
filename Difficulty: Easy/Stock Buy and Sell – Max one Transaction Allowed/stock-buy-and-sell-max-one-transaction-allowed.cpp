class Solution {
  public:
    int maximumProfit(vector<int> &v) {
        // code here
        int n = v.size();
        int minprice;
        int maxprofit = INT_MIN;
        int profit; 
        for(int i=0 ; i<n ; i++){
            minprice = min(v[i],minprice);
            profit = v[i] - minprice;
            maxprofit = max(profit,maxprofit);
        }
        return maxprofit;
    }
};
