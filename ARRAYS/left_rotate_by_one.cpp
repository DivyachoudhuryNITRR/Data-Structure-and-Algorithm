using namespace std;
#include<bits/stdc++.h>
void solve(vector<int>&arr,int n){
    int i=0;
   int m=arr[0];
    while(i<n){
        arr[i]=arr[i+1];
        i++;
    }
    arr[n-1]=m;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    int n=arr.size();
    solve(arr,n);
}