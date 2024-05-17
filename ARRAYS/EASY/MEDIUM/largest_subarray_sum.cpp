using namespace std;
#include<bits/stdc++.h>
int largest_subarray_sum(vector<int>&arr){
    /*int n=arr.size();
    int maxi=-1;
    for(int j=0;j<n;j++){
        int prefix=0;
        for(int i=j;i<n;i++){
            prefix+=arr[i];
            maxi=max(maxi,prefix);
        }
    }
    return maxi;*/

    int n=arr.size();
    int maxi=-1;
    int prefix=0;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        maxi=max(maxi,prefix);
        if(prefix<0){
            prefix=0;
        }
    }
    return maxi;
}
int main(){
    vector<int>arr={4,-6,2,8};
    int ans=largest_subarray_sum(arr);
    cout<<ans;
    return 0;
}