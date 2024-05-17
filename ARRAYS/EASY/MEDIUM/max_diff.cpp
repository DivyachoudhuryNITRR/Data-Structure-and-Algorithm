using namespace std;
#include<bits/stdc++.h>
int solve(vector<int>arr){
    int n=arr.size();
    int maxi=-1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            maxi=max(maxi,(arr[j]-arr[i]));
        }
    }
    return maxi;
}
int main(){
    vector<int>arr={9,5,8,12,2,3,7,4};
    int ans=solve(arr);
    cout<<ans;
    return 0;
}