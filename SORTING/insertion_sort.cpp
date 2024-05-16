using namespace std;
#include<bits/stdc++.h>
void insertion_sort(int arr[],int i,int n){
    /*for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }*/

    if(i==n) return;
    int j=i;
    while(j>0&&arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }
    insertion_sort(arr,i+1,n);

    
    
}
int main(){
    int arr[]={4,9,3,6,7,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertion_sort(arr,0,n);
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}