using namespace std;
#include<bits/stdc++.h>
/*bool check_prime(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==2){
        return true;
    }
    else{
        return false;
    }
}*/

bool check_prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(check_prime(n)){
        cout<<"number is a prime"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }
    return 0;
}