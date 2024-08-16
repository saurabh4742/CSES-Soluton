#include <iostream>
using namespace std;
int main(){
   long long n;
   long long op=0;
   cin>>n;
   long long arr[n];
   if(n>1){
   for(long long i=0;i<n;i++){
       cin>>arr[i];
   }
   for(long long i=1;i<n;i++){
       if(arr[i]<arr[i-1]){
           op+=arr[i-1]-arr[i];
           arr[i]=arr[i-1];
       }
   }
   }
   cout<<op;
   return 0;
}