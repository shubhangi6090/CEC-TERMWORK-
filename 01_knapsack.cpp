#include <bits/stdc++.h>
using namespace std;

int dpMethod(vector<int>pf,vector<int>wt,int n,int m,vector<vector<int>> dp){
    if(dp[n][m]==-1){
         if(n<=0 || m<=0)return 0;
        if(wt[n-1]>m){
            dp[n][m]=dpMethod(pf,wt,n-1,m,dp);
        }
        else
        dp[n][m]=max(dpMethod(pf,wt,n-1,m,dp),pf[n-1]+dpMethod(pf,wt,n-1,m-wt[n-1],dp));
    }
    return dp[n][m];
}
int recursivefun(vector<int>pf,vector<int>wt,int n,int m){
    if(n==0 || m==0){
        return 0;
    }
    if(wt[n-1]>m){ ///if weight greater than cap ignore
       return  recursivefun(pf,wt,n-1,m);
    }
    else{
            return max(recursivefun(pf,wt,n-1,m),pf[n-1]+recursivefun(pf,wt,n-1,m-wt[n-1]));
    }
}
int main(){
    int n,m;
    cout<<"Enter the number of items and knapsack quantity"<<endl;
    cin>>n>>m;
    vector<int>profit;
    vector<int>weights;
    cout<<"Enter the profit and weight of each item"<<endl;
    for(int i=0;i<n;i++){
        int pt,wt;
        cin>>pt>>wt;
       profit.push_back(pt);
       weights.push_back(wt);
        
    }
    cout<<"Data you entered is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<profit[i]<<" "<<weights[i]<<endl;
    }
   //cout<<"MAXIMUM profit using recursive method is :"<< recursivefun(profit,weights,n,m);
   
   vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
   cout<<"MAXIMUM profit using memoisation method is :"<< dpMethod(profit,weights,n,m,dp);
}
