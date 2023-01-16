// User function Template for C++
#include<bits/stdc++.h>
class Solution {
  public:
  int solve(vector<vector<int>> &arr,int n,int idx,vector<int>&v,vector<int>&dp){
      if(idx>=n)return 0;
        int  a=0,b=0;
        if(dp[idx]!=-1)return dp[idx];
        auto it=lower_bound(v.begin(),v.end(),arr[idx][1]);
        int nxt_idx=it-v.begin();
        a=arr[idx][2]+solve(arr,n,nxt_idx,v,dp);
        b=solve(arr,n,idx+1,v,dp);
        return dp[idx]=max(a,b);
  }
    int maximum_profit(int n, vector<vector<int>> &arr) {
        // Write your code here.
        sort(arr.begin(),arr.end());
        vector<int>v;
        vector<int>dp(n+1,-1);
        for(int i=0;i<arr.size();++i){
                v.push_back(arr[i][0]);
        }
        return solve(arr,n,0,v,dp);
    }
};