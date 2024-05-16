using namespace std;
#include<bits/stdc++.h>
int fact(int n){
   /* if(n==0) return 1;
    return n*fact(n-1);*/

    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}