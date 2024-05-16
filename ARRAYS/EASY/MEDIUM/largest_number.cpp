using namespace std;
#include<bits/stdc++.h>
int largest(vector<int>&arr1){
    int n=arr1.size();
    /*sort(arr1.begin(),arr1.end());
    return arr1[n-1];// time complexity ==> O(nlogn) and space complexity ==> O(n); */

    //RECURSION--> TC==> O(n) and SC==>O(1)
    int maxi=arr1[0];
    for(int i=0;i<n;i++){
        if(arr1[i]>maxi){
            maxi=arr1[i];
        }
    }
    return maxi;

}
int main()
{
    vector<int>arr1={2,4,3,5,1,8};
   
    cout<<"Largest number in array : "<<largest(arr1)<<endl;
}