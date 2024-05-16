using namespace std;
#include<bits/stdc++.h>
int max_consecutive_ones(vector<int>&arr){
    int n=arr.size();
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        
        
        if(arr[i]==1){
            cnt++;
        }
        else{
            cnt=0;
      }
        
        maxi=max(maxi,cnt);
    }
    return maxi;
}
int main(){
    vector<int>arr={1, 1, 0, 1, 1, 1};
    
    int ans=max_consecutive_ones(arr);
    cout<<ans;
}