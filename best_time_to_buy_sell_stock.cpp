/*
Problem Statement:- BEST TIME TO BUY & SELL STOCK (Leetcode 121)
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


TIME COMPLEXITY:- O(n)
SPACE COMPLEXITY:- O(1)

APPROACH:-
1)We need to find two elements from given array such that our buying price should be minimum and we gain maximum profit through seeling price.
2)Initially,initialize variable min_price (buying price) as first element of array.
3)Initialize one more variable for maxprof=0
4)iterate over the array from 2nd element and  if current profit i.e arr[i]-maxprof is greater than maxprof update maxprof=current profit.
5)And if price at current index is less than min_price update min_price to current price.
6)follow these steps upto size of array;
7)Return maxprof.
*/



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int maxprof = 0;

        for(int i=1;i<prices.size();i++){
            maxprof = max(maxprof,prices[i]-min_price);
            min_price = min(prices[i],min_price);
        }

        return maxprof;
    }
};
