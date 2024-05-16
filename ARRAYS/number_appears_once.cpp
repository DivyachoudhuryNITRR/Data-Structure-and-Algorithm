using namespace std;
#include<bits/stdc++.h>
int once_appeared(vector<int>&arr){
    int n=arr.size();
    
    /*for(int i=0;i<n;i++){
        int num=arr[i];
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                cnt++;
            }
        }
        if(cnt==1)return num;
    }
    return -1;*/

    /*int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[i]==1){
            return i;
        }
    }
    return -1;*/
   
   /* map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second==1){
            return it.first;
        }
    }
    return -1;*/

    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr^arr[i];
    }
    return xorr;

}
int main(){
    vector<int>arr={4,1,2,1,2};
    
    int ans=once_appeared(arr);
    cout<<ans;
    return 0;
}