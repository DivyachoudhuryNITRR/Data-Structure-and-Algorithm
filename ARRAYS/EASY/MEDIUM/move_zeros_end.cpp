using namespace std;
#include<bits/stdc++.h>
vector<int>move_zeroes_to_end(vector<int>&arr,int n){
   /* vector<int>ans;
    vector<int>zero;
    int i=0;
    while(i<n){
        if(arr[i]!=0){
            ans.push_back(arr[i]);
           
        }
        else{
            zero.push_back(arr[i]);
        }
        i++;
    }
    for(int i=0;i<zero.size();i++){
        ans.push_back(zero[i]);
    }
    return ans;*/

    /*vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    int nz=temp.size();
    for(int i=0;i<nz;i++){
        arr[i]=temp[i];
    }
    for(int i=nz;i<n;i++){
        arr[i]=0;
    }
    return arr;*/


//2 pointer approach --> tc== o(n) , sc=O(1)
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return arr;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}
int main()
{
    vector<int>arr={1,0,2,3,0,4,0,1};
    int n=arr.size();
    vector<int>ans=move_zeroes_to_end(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}