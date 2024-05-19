using namespace std;
#include<bits/stdc++.h>
vector<int>solve(vector<int>arr){
    int n=arr.size();
    vector<int>ans(n,0);
    int pos=0,neg=1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[neg]=arr[i];
            neg+=2;
        }
        else{
            ans[pos]=arr[i];
            pos+=2;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={1,2,-4,-5};
    vector<int>ans1=solve(arr);
    for(int i=0;i<ans1.size();i++){
        cout<<ans1[i]<<" ";
    }
    return 0;
}