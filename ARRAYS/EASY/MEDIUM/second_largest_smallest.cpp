using namespace std;
#include<bits/stdc++.h>

void getElements(int arr[],int n){
    /*
    if(n==0||n==1){
        cout<<-1<<" "<<-1<<endl;
    }
    sort(arr,arr+n);//-->TC==>O(nlogn), SC==>O(1)
    int small=arr[1];
    int large=arr[n-2];
    cout<<"Second smallest is "<<small<<endl;
    cout<<"Second largest is "<<large<<endl;*/

   /* if(n==0||n==1){
        cout<<-1<<" "<<-1<<endl;
    }
    int small=INT_MAX;
    int second_small=INT_MAX;
    int large=INT_MIN;
    int second_large=INT_MIN;
    int i;
    for(i=0;i<n;i++){
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<second_small&&arr[i]!=small){
            second_small=arr[i];
        }
        if(arr[i]>second_large&&arr[i]!=large){
            second_large=arr[i];
        }
        
    }
    cout<<"Second smallest is "<<second_small<<endl;
        cout<<"Second largest is "<<second_large<<endl;*/
}

int secondSmallest(int arr[],int n){
    if(n<2){
        return -1;
    }
    int small=INT_MAX;
    int second_small=INT_MAX;
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            second_small=small;
            small=arr[i];
        }
        else if(arr[i]<second_small && arr[i]!=small){
            second_small=arr[i];
        }
    }
    return second_small;
}
int secondLargest(int arr[],int n){
    if(n<2){
        return -1;
    }
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>large){
            second_large=large;
            large=arr[i];
        }
        else if(arr[i]>second_large&&arr[i]!=large){
            second_large=arr[i];
        }
    }
    return second_large;
}


int main(){
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // getElements(arr,n);

    int ss=secondSmallest(arr,n);
    int sl=secondLargest(arr,n);
    cout<<"Second smallest is "<<ss<<endl;
    cout<<"Second largest is "<<sl<<endl;
    return 0;
}