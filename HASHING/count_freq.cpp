using namespace std;
#include<bits/stdc++.h>
void count_freq(int arr[],int n){
    vector<bool>visited(n,false);
    for(int i=0;i<n;i++){
        if(visited[i]==true){
            continue;
        }
        int cnt=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                cnt++;
            }
        }
        cout<<arr[i]<<" "<<cnt<<endl;
    }
}
int main(){
    int  arr[]={10,5,10,15,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    count_freq(arr,n);
    return 0;
}