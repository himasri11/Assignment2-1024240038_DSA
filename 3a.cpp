#include <iostream>
using namespace std;
int main(){
   int arr[] = {1,2,3,5,6};
   int s = sizeof(arr)/sizeof(arr[0]);
   int n = 5;
   int sum = n* (n+1)/2;
   int actual_sum = 0;
   for( int i = 0;i<s;i++){
    actual_sum = actual_sum + arr[i];
   }
   int missing_number = sum - actual_sum;
   cout<<"the missing number is : "<<missing_number<<endl;
   return 0;
}
