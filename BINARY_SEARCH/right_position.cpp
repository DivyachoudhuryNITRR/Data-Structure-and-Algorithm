using namespace std;
#include<bits/stdc++.h>
int solve(vector<int>&arr,int target){
    int n=arr.size();
    int ans=n;
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={1,3,5,6};
    int target=5;
    int ans=solve(arr,target);
    cout<<ans;
}