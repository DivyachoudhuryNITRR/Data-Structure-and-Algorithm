using namespace std;
#include<bits/stdc++.h>
/*vector<int>printDivisors(int n,int &size){
    vector<int>divisors(n);
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            divisors[cnt++]=i;
        }
    }
    size=divisors.size();
    return divisors;
}*/
vector<int>printDivisors(int n){
    vector<int>divisors(n);
    int sqrtN=sqrt(n);
    for(int i=1;i<=sqrtN;i++){
        if(n%i==0){
            divisors.push_back(i);
        }
        if(i!=n/i){
            divisors.push_back(n/i);
        }
    }
    return divisors;
}
int main(){
    int num=12;
    int size;
    vector<int>divisors=printDivisors(num);
    cout<<"Divisors of "<<num<<" are : ";
    for(int i:divisors){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
    
}