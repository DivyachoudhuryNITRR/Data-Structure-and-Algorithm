using namespace std;
#include<bits/stdc++.h>
void subarray_generate(vector<int>&arr){
    int n=arr.size();
    

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    vector<int>arr={4,3};
    subarray_generate(arr);
}