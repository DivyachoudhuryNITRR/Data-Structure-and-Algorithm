using namespace std;
#include<bits/stdc++.h>
// int hash[1e7]={0} //can be declared globally
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

    //pre-compute
    // int hash[1e7]={0};--> can not declare 1e7 here locally
     /*int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }*/

    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
       //cout<<hash[num]<<endl;
       cout<<mp[num]<<endl;
    }
    return 0;
}