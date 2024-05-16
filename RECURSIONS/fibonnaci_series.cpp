using namespace std;
#include<bits/stdc++.h>
int fib_series(int n){
    /*if(n==0) return 0;
    if(n==1) return 1;
    
    int prev1=0;
    int prev2=1;
    for(int i=2;i<=n;i++){
        int curr=prev1+prev2;
        prev1=prev2;
        prev2=curr;
    }
    return prev2;*/

    //USING RECURSION

    if(n<=1) return n;
    int secondLast=fib_series(n-1);
    int Last=fib_series(n-2);
    return secondLast+Last;
}
int main(){
    int n;
    cin>>n;
    int ans=fib_series(n);
    cout<<ans<<endl;
    return 0;
}