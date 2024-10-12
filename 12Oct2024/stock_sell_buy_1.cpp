// link to problem https://www.geeksforgeeks.org/stock-buy-sell/
//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        
        int maxProfit =0 ; 
        int N =  prices.size(); 
        //int left = prices[0]; 
        int right ; 
        for(int i =1 ; i< N ; i++ ){
            int a = prices[i]-prices[i-1];
           maxProfit += a >0 ? a :0 ; 
           //left = prices[i];
        }
        return maxProfit;
        // code here
    }
};
