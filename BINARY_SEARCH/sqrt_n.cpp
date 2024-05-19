using namespace std;
#include<bits/stdc++.h>
int solve(int n){
    int start=1;
    int end=n;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid*mid==n){
            res=mid;
        }
        else if(mid*mid<n){
             res=mid;
            start=mid+1;
        }
        else{
           
            end=mid-1;
        }
    }
    return res;
}
int main(){
    int n=100;
    int ans=solve(n);
    cout<<ans;
}