#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,5,7,9,11,34};
    int mid,hi,lo,target,n;
    n = sizeof(arr)/sizeof(arr[0]) ;
    lo = 0;
    hi = n-1;
    cout<<"enter target : ";
    cin>>target;
    int idx = -1;
    while(lo<=hi){
        mid = (hi+lo)/2;
        if(arr[mid] == target){
            idx = mid;
            cout<<target;
            break;
        }
        else if(arr[mid]>target){
            hi = mid-1;
        }
        else if(arr[mid]<target){
            lo = mid+1;
        }
    
    }
    if(idx!=-1){
        cout<<"target index found : "<<idx<<endl;

    }
    else{
        cout<<"index not found"<<endl;

    }
    return 0;
}
