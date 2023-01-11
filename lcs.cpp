#include <bits/stdc++.h>
using namespace std;

int dpLCS(string a,string b,int n,int m,vector<vector<int>> &dp){
    if(dp[n][m]==-1){
        if(n>=a.size() || m>=b.size()){
            return 0;
        }
        if(a[n]==b[m]){
            dp[n][m]=  1+dpLCS(a,b,n+1,m+1,dp);
        }
        else {
            dp[n][m]= max(dpLCS(a,b,n+1,m,dp),dpLCS(a,b,n,m+1,dp));
        }
    }
    return dp[n][m];
}
int recursiveLCS(string a,string b,int idx1,int idx2){
    if(idx1==a.size() || idx2==b.size()){
        return 0;
    }
    if(a[idx1]==b[idx2]){
       return  1+recursiveLCS(a,b,idx1+1,idx2+1);
    }
    else {
        
        return max(recursiveLCS(a,b,idx1+1,idx2),recursiveLCS(a,b,idx1,idx2+1));
    }
}
int main(){
    string a;
    string b;
    cout<<"Enter the 2 strings"<<endl;
    cin>>a>>b;
    cout<<"Strings you entered"<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;
     
    //cout<<"Longest incresing sequence is:"<<recursiveLCS(a,b,0,0)<<endl;
    vector<vector<int>> dp(a.size()+1,vector<int>(b.size()+1,-1));
    cout<<"Longest incresing sequence is:"<<dpLCS(a,b,0,0,dp)<<endl;
    return 0;

}
