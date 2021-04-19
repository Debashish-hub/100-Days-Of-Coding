// Best Time to Buy and Sell Stock

// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to 
// sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int max = 0;
        for(int i= 0; i<prices.size(); i++){
            if(prices[i] < min)
                min = prices[i];
            else if(prices[i] - min > max)
                max = prices[i] - min;
        }
        return max;
    }
};