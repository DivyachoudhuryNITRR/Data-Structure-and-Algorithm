using namespace std;
#include<bits/stdc++.h>
bool palindrome(int n){
    int t=n;
    int reverse=0;

    while(n>0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(t==reverse){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(palindrome(n)){
        cout<<"Number is Palindrome"<<endl;
    }
    else{
        cout<<"Number is not palindrome"<<endl;
    }
    return 0;
}