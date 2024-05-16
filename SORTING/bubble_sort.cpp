using namespace std;
#include<bits/stdc++.h>
void bubble_sort(int arr[],int n){
    /*
    for(int i=n-1;i>=0;i--){
        int cnt=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                cnt=1;
            }
        }
        if(cnt==0){
            break;
        }
        cout<<"runs\n";
    }
    */

   //Recursive Solution
   if(n==1) return;

   for(int j=0;j<=n-2;j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j+1],arr[j]);
    }
   }
   bubble_sort(arr,n-1);
    
}
int main(){
    int arr[]={4, 1, 3, 9, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr,n);
    cout<<"After sorting : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}