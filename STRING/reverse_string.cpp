using namespace std;
#include<bits/stdc++.h>
int main(){
    // string s1="Divya";
    /*int start=0;
    int end=s1.size()-1;
    while(start<=end){
        swap(s1[start],s1[end]);
        start++;
        end--;
    }
    cout<<s1;*/

    /*int size=0;
    while(s1[size]!='\0'){
        size++;
    }
    cout<<size<<endl;*/


    string s2="namau";
    int start=0;
    int end=s2.size()-1;
    while(start<end){
        if(s2[start]!=s2[end]){
            cout<<"Not a palindrome"<<endl;
            return 0;
        }
        start++;
            end--;

    }
    cout<<"palindrome"<<endl;
    
  

}