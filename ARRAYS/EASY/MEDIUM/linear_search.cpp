using namespace std;
#include<bits/stdc++.h>
int linear_search(vector<int>&arr,int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    int  num=3;
    int n=arr.size();
    int ans=linear_search(arr,n,num);
    cout<<ans;
}