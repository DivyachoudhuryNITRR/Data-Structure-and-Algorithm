using namespace std;
#include<bits/stdc++.h>
int solve(int ind, vector<int>& height, vector<int>& dp){
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int jumpTwo = INT_MAX;
    int jumpOne= solve(ind-1, height,dp)+ abs(height[ind]-height[ind-1]);
    if(ind>1)
        jumpTwo = solve(ind-2, height,dp)+ abs(height[ind]-height[ind-2]);
    
    return dp[ind]=min(jumpOne, jumpTwo);
}


int main(){
    vector<int>height{30,10,60,20,60,50};
    int n=height.size();
    vector<int>dp(n,-1);
    //cout<<solve(n-1,height,dp);


/*TC==>O(N) SC==>O(N);
    dp[0]=0;
    for(int ind=1;ind<n;ind++){
        int right=INT_MAX;
        int left=dp[ind-1]+abs(height[ind]-height[ind-1]);
        if(ind>1){
            right=dp[ind-2]+abs(height[ind]-height[ind-2]);
        }
        dp[ind]=min(left,right);
    }
    cout<<dp[n-1];*/


    //SPACE OPOTIMISATION

    int prev=0;
    int prev2=0;
    for(int i=1;i<n;i++){
        int jumpTwo=INT_MAX;
        int jump_one=prev+abs(height[i]-height[i-1]);
        if(i>1){
            jumpTwo=prev2+abs(height[i]-height[i-2]);
        }
        int curr=min(jump_one,jumpTwo);
        prev2=prev;
        prev=curr;
    }
    cout<<prev;
}