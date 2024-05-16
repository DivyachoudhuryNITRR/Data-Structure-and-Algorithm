using namespace std;
#include<bits/stdc++.h>
void reverse_arr(int arr[],int start,int end){
    while(start<=end){
        // int temp=arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;
        // start++;
        // end--;
        swap(arr[start++],arr[end--]);
    }
}
void rotate_left(int arr[],int n,int k){
    /*if(n==0)return;
    k=k%n;
    if(k>n){
        return;
    }
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n-k;i++){
        arr[i]=arr[i+k];
    }
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-n+k];
    }*/

    reverse_arr(arr,0,n-k-1);
    reverse_arr(arr,n-k,n-1);
    reverse_arr(arr,0,n-1);
}
int main(){
    int n=7;
    int arr[]={1,2,3,4,5,6,7};
    int k=2;
    rotate_left(arr,n,k);
    cout<<"After rotation : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}