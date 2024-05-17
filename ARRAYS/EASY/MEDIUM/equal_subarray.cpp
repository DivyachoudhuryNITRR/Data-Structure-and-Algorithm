using namespace std;
#include<bits/stdc++.h>
bool equal_sum(vector<int>arr){
    /*int n=arr.size();
    for(int i=0;i<n-1;i++){
        int sum1=0,sum2=0;
        for(int j=0;j<=i;j++){
            sum1+=arr[j];
        }
        for(int j=i+1;j<n;j++){
            sum2+=arr[j];
        }
        if(sum1==sum2)return true;
    }
    return false;*/

    int n=arr.size();
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    int prefix_sum=0;
    for(int i=0;i<n-1;i++){
        prefix_sum+=arr[i];
        int ans=total_sum-prefix_sum;
        if(prefix_sum==ans){
            return 1;
        }
    }
    return 0;

}
int main(){
    vector<int>arr={3,4,-2,5,8,20,-10,8};
    bool ans=equal_sum(arr);
    if(ans){
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}