#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   if(n<=3 && n!=1){
       cout<<"NO SOLUTION";
       return 0;
   }
   for(int i=2;i<=n;i++){
       if(i%2==0)
       cout<<i<<" ";
   }
   for(int i=1;i<=n;i++){
       if(i%2!=0)
       cout<<i<<" ";
   }
   
   return 0;
}