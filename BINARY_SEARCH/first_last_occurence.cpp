using namespace std;
#include<bits/stdc++.h>
int last_occurence(vector<int>&arr,int target){
    int n=arr.size();
    int start=0;
    int end=n-1;
    int ans;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
            
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int first_occurence(vector<int>&arr,int target){
    int n=arr.size();
    int start=0;
    int end=n-1;
    int ans;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
           
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;

}
int main(){
     vector<int>arr={5,7,7,8,8};
    int target=8;
   int first= first_occurence(arr,target);
   int last=last_occurence(arr,target);
   cout<<first<<" " <<last<<endl;

}