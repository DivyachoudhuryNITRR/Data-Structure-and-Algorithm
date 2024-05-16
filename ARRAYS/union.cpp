using namespace std;
#include<bits/stdc++.h>
// tc==O((m+n)log(m+n))  sc==O(m+n)(space of union is considered),o(1)-->(space of union not considered)
vector<int>union_array(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    //unordered_map is not used  as it stores not in sorted manner
    vector<int>ans;
    /*map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr1[i]]++;
    }
    for(int j=0;j<m;j++){
        mp[arr2[j]]++;
    }
    for(auto &it:mp){
        ans.push_back(it.first);
    }*/


    /*set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }
    for(auto &it:s){
        ans.push_back(it);
    }
    return ans;*/

    int i=0,j=0;
    while(i<n&&j<m){
        if(arr1[i]<=arr2[j]){
            if(ans.size()==0||ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
                i++;
            }
            
        }
        else{
            if(ans.size()==0||ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
                j++;
            }
        }
    }
    while(i<n){
        if(ans.back()!=arr1[i]){
            ans.push_back(arr1[i]);
            i++;
        }
    }
    while(j<m){
        if(ans.back()!=arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
    }
    return ans;

}
int main()
{
    vector<int>arr1={1,2,3,4,5};
    vector<int> arr2={2,3,4,4,5};


    vector<int>ans=union_array(arr1,arr2);
    for(auto val:ans){
       cout<<val<<" ";
    }
    return 0;
}