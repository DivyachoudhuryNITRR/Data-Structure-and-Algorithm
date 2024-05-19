using namespace std;
#include<bits/stdc++.h>
int solve(vector<int>arr){
    int n=arr.size();
    int maxi=INT_MIN;
   /*for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int p=1;
            for(int k=i;k<j;k++){
                p*=arr[k];
                maxi=max(maxi,p);
            }
        }
    }
    return maxi;*/

    /*for(int i=0;i<n;i++){
        int p=arr[i];
        for(int j=i+1;j<n;j++){
           
            maxi=max(maxi,p);
             p*=arr[j];
            
        }
        
    }
    return maxi;*/

    int pre=1,suf=1;
    for(int i=0;i<n;i++){
        if(pre==0) pre=1;
        if(suf==0) suf=1;
        pre*=arr[i];
        suf*=arr[n-i-1];
        maxi=max(maxi,max(pre,suf));
    }
    return maxi;

}
int main(){
    vector<int>arr={1,2,3,4,5,0};
    int ans=solve(arr);
    cout<<ans;
}