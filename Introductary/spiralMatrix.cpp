#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long y[n];
    long long x[n];
   for (int i=0;i<n;i++){
       cin>>y[i];
       cin>>x[i];
   }
   for(int i=0;i<n;i++){
       if(x[i]==y[i])
       cout<<(x[i]*x[i])-(x[i]-1)<<endl;
       else if(x[i]>y[i]){
           if(x[i]%2==0){
              cout<<(x[i]*x[i])-((x[i]*2)-y[i]-1)<<endl; 
           }
           else{
              cout<<(x[i]*x[i])-(y[i]-1)<<endl;
           }
       }
       else{
           if(y[i]%2==0){
               cout<<(y[i]*y[i])-(x[i]-1)<<endl;
           }
           else{
               cout<<(y[i]*y[i])-((y[i]*2)-x[i]-1)<<endl;
           }
       }
   }
   return 0;
}