using namespace std;
#include<bits/stdc++.h>
int prefix_sum(vector<int>&arr){
    int n=arr.size();
    vector<int>pre(n);
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+arr[i];
    }
    return pre[n-1];
}
int suffix_sum(vector<int>arr){
    int n=arr.size();
    vector<int>suf(n);
    suf[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]+arr[i];
    }
    return suf[0];
}
int main(){
    vector<int>arr={6,4,5,-3,2,8};
    int ans=prefix_sum(arr);
    cout<<ans;
    cout<<endl;
    int sol=suffix_sum(arr);
    cout<<sol;
}