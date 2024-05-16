using namespace std;
#include<bits/stdc++.h>
void selection_sort(int arr[],int n){
    for(int i=0;i<n-2;i++){
        int mini=i;
        for(int j=i;j<n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);

    }
    cout<<"After sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={4, 1, 3, 9, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selection_sort(arr,n);
    return 0;
}