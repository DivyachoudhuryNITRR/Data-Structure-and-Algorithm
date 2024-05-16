using namespace std;
#include<bits/stdc++.h>
bool sum_equal(vector<int>&arr,int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<int>arr={2,6,5,8,11};
    int target=14;
    bool ans=sum_equal(arr,target);
    cout<<ans;
    return 0;
}