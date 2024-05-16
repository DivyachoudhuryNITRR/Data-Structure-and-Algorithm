using namespace std;
#include<bits/stdc++.h>
/*int count_digits(int N){
    int cnt=0;
    while(N>0){
        int r=N%10;
        cnt++;
        N=N/10;
    }
    return cnt;
}*/

//OPTIMAL
int count_digits(int n){
    int cnt=(int)(log10(n)+1);
    return cnt;
}
int main(){
    int N=329823;
    cout<<"N : "<<N<<endl;
    int digits=count_digits(N);
    cout<<"Number of Digits = "<<digits<<endl;
    return 0;
}