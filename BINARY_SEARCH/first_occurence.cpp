using namespace std;
#include<bits/stdc++.h>
void solve(vector<int>&arr,int n,int target){
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            last=i;
        }
    }
    for(int j=n-1;j>=0;j--){
        if(arr[j]==target){
            first=j;
        }
    }
    cout<<first<<" "<<last<<endl;
}
int main(){
    vector<int>arr={5,7,7,8,8};
    int target=8;
    int n=arr.size();
    
    solve(arr,n,target);
    
}