using namespace std;
#include<bits/stdc++.h>
int missing_number(vector<int>&a,int n){
    /*for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(a[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0) return i;
    }
    return -1;*/

    /*int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;*/
    
    
    /*int s=0;
    int sum=n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        s=s+a[i];
    }
    return abs(s-sum);*/
    int xor1=0,xor2=0;

    for(int i=0;i<n-1;i++){
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;
    return xor1^xor2;
}
int main(){
    int n=5;
    vector<int>a={1,2,4,5};
    int ans=missing_number(a,n);
    cout<<"The missing number is :"<<ans<<endl;
}