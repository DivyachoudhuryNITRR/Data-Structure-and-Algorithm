using namespace std;
#include<bits/stdc++.h>
void sort_the_array(vector<int>&arr,int n){
    //sort(arr.begin(),arr.end()); -->TC=O(nlogn)
    
    /*int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)cnt0++;
        if(arr[i]==1)cnt1++;
        if(arr[i]==2)cnt2++;
    }
    for(int i=0;i<cnt0;i++){
        arr[i]=0;
    }
    for(int i=cnt0;i<cnt0+cnt1;i++){
        arr[i]=1;
    }
    for(int i=cnt1+cnt0;i<n;i++){
        arr[i]=2;
    }*/


    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }


}
int main(){
    vector<int>arr={2,0,2,1,1,0};
    int n=arr.size();
    sort_the_array(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}