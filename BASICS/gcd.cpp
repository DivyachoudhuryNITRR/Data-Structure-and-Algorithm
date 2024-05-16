using namespace std;
#include<bits/stdc++.h>
/*int findGcd(int n1,int n2){
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    return gcd;
}*/
int findGcd2(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}
int main(){
    int n1=20,n2=15;
    // int gcd=findGcd(n1,n2);
    int gcd2=findGcd2(n1,n2);
    cout<<"gcd of "<<n1<<" and "<<n2<<" is : "<<gcd2<<endl;
    return 0;
}