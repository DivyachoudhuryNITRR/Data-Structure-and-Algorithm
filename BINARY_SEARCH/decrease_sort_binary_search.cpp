using namespace std;
#include<bits/stdc++.h>
int solve(vector<int>&arr,int n, int target){
    int start=0;
    int  end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={30,28,20,16,4};
    int target=20;
    int n=arr.size();
    int ans=solve(arr,n,target);
    cout<<ans;
}