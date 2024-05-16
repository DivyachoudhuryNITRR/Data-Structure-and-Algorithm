using namespace std;
#include<bits/stdc++.h>
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void reverse_array(int arr[],int n){
    /*int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[n-i-1]=arr[i];
    }
    */

    // reverse(arr,arr+n);


    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    


}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    reverse_array(arr,n);
    print(arr,n);
    return 0;
}