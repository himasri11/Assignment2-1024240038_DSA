#include <iostream>
using namespace std;
int main(){
   int arr[] = {1,2,3,4,5,6};
   int n = sizeof(arr)/sizeof(arr[0]);
   int mid, idx = -1, target;
   cout << "enter target : ";
   cin >> target;
   int lo = 0, hi = n - 1;
   while (lo <= hi) {
       mid = (hi + lo) / 2;
       if (arr[mid] == target) {
           idx = mid;
           break;  // exit loop once found
       } else if (arr[mid] > target) {
           hi = mid - 1;
       } else {
           lo = mid + 1;
       }
   }
   if(idx!=-1){
    cout<<"index found : "<<idx;
   }
   else{
    cout<<"index not found"<<endl;
   }
   return 0;
}
