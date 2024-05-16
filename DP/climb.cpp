using namespace std;
#include<bits/stdc++.h>
int main(){
    int n;
    cin>>n;

    /*vector<int>dp(n+1,-1);
    dp[0]=1;
    dp[1]=1;
    if(dp[n]!=-1) return dp[n];

    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<< dp[n];*/

    int prev1=1;
    int prev2=1;
    for(int i=2;i<=n;i++){
        int curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    cout<<prev1;

}