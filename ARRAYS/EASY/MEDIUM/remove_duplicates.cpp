//TC==> O(nlogn)+O(n)
// SC==>O(n)

using namespace std;
#include<bits/stdc++.h>  //-->TC: O(n) ans SC: O(1)
int remove(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int remove_duplicate(int arr[],int n){
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int k=s.size();
    int j=0;
    for(int x:s){
        arr[j]=x;
        j++;
    }
    return k;
}
int main(){
    int arr[]={1,1,2,2,2,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int k=remove_duplicate(arr,n);
    int k=remove(arr,n);
    cout<<"Array after removing duplicate elements : "<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}
