using namespace std;
#include<bits/stdc++.h>
string solve(string&str){
    int n=str.size();
    for(int i=n-1;i>=0;i--){
        if(str[i]%2!=0){
            string ans=str.substr(0,i+1);
            return ans;
        }
    }
    return "";
}
int main(){
    string str="505";
    string ans=solve(str);
    cout<<ans<<endl;
}