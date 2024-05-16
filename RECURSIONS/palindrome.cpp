using namespace std;
#include<bits/stdc++.h>
bool palindrome(string str){
    int n=str.size();
    int start=0;
    int end=n-1;
    while(start<=end){
        if(str[start]!=str[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}
int main(){
    string str;
    cin>>str;
    if(palindrome(str)){
        cout<<"string is palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    return 0;
}