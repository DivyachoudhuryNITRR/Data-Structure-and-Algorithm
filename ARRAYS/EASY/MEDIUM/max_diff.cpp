using namespace std;
#include<bits/stdc++.h>
int solve(vector<int>arr){
    int n=arr.size();
    /*int maxi=-1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            maxi=max(maxi,(arr[j]-arr[i]));
        }
    }
    return maxi;*/
    int maxi=-1;

    vector<int>suffix_max(n);
    for(int i=n-1;i>0;i--)
    {
        suffix_max[i]=max(maxi,arr[i]);
    }
    int sol=0;
    for(int i=0;i<=n-1;i++){
        sol=max(sol,(suffix_max[i]-arr[i]));
    }
    return sol;
}
int main(){
    vector<int>arr={9,5,8,12,2,3,7,4};
    int ans=solve(arr);
    cout<<ans;
    return 0;
}