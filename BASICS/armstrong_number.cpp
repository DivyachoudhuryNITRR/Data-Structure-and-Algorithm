using namespace std;
#include<bits/stdc++.h>
bool armstrong_number(int n){
    int sum=0;
    int t=n;
    while(n>0){
        int digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(t==sum){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n=143;
    if(armstrong_number(n)){
        cout<<"Number is a armstrong number"<<endl;
    }
    else{
        cout<<"Number is not a armstrong number"<<endl;
    }
    return 0;
}