using namespace std;
#include<bits/stdc++.h>
int solve(vector<int>&arr){
    /*int n=arr.size();
    int maxi=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                maxi=max(maxi,(arr[j]-arr[i]));
            }
        }
    }
    return maxi;*/

    int n=arr.size();

    int maxi=INT_MIN,mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]-mini);
    }
    return maxi;
}
int main(){
    vector<int>arr={7,1,5,3,6,4};
    int ans=solve(arr);
    cout<<ans;
    return 0;
}