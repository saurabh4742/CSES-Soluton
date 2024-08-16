#include <iostream>
using namespace std;
int main(){
   int n;
   int Tsum=0;
   int GivenElmSum=0;
   cin>>n;
   for(int i=1;i<=n;i++){
    Tsum+=i;
    if(i!=1){
        int temp;
        cin>>temp;
        GivenElmSum+=temp;
    }
   }
   cout<<Tsum-GivenElmSum;
   return 0;
}