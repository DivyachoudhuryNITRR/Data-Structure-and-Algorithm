using namespace std;
#include<bits/stdc++.h>
/*int reverse_number(int n){
    int reverse=0;
    while(n!=0)
    {
        int  digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    return reverse;
}*/
int reverse_number(int n){
    stack<int>st;
    while(n>0){
        st.push(n%10);
        n=n/10;
    }
    int ans=0,i=1;
    while(!st.empty()){
        int digit=st.top();
        st.pop();
        ans=ans+digit*i;
        i=i*10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int ans=reverse_number(n);
    cout<<"Reversed Number is : "<<ans<<endl;
    return 0;
}